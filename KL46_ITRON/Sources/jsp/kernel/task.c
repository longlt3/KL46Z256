/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2005,2006 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 * 
 *  ��L���쌠�҂́C�ȉ��� (1)�`(4) �̏������CFree Software Foundation 
 *  �ɂ���Č��\����Ă��� GNU General Public License �� Version 2 �ɋL
 *  �q����Ă�������𖞂����ꍇ�Ɍ���C�{�\�t�g�E�F�A�i�{�\�t�g�E�F�A
 *  ����ς������̂��܂ށD�ȉ������j���g�p�E�����E��ρE�Ĕz�z�i�ȉ��C
 *  ���p�ƌĂԁj���邱�Ƃ𖳏��ŋ����D
 *  (1) �{�\�t�g�E�F�A���\�[�X�R�[�h�̌`�ŗ��p����ꍇ�ɂ́C��L�̒���
 *      ���\���C���̗��p��������щ��L�̖��ۏ؋K�肪�C���̂܂܂̌`�Ń\�[
 *      �X�R�[�h���Ɋ܂܂�Ă��邱�ƁD
 *  (2) �{�\�t�g�E�F�A���C���C�u�����`���ȂǁC���̃\�t�g�E�F�A�J���Ɏg
 *      �p�ł���`�ōĔz�z����ꍇ�ɂ́C�Ĕz�z�ɔ����h�L�������g�i���p
 *      �҃}�j���A���Ȃǁj�ɁC��L�̒��쌠�\���C���̗��p��������щ��L
 *      �̖��ۏ؋K����f�ڂ��邱�ƁD
 *  (3) �{�\�t�g�E�F�A���C�@��ɑg�ݍ��ނȂǁC���̃\�t�g�E�F�A�J���Ɏg
 *      �p�ł��Ȃ��`�ōĔz�z����ꍇ�ɂ́C���̂����ꂩ�̏����𖞂�����
 *      �ƁD
 *    (a) �Ĕz�z�ɔ����h�L�������g�i���p�҃}�j���A���Ȃǁj�ɁC��L�̒�
 *        �쌠�\���C���̗��p��������щ��L�̖��ۏ؋K����f�ڂ��邱�ƁD
 *    (b) �Ĕz�z�̌`�Ԃ��C�ʂɒ�߂��@�ɂ���āCTOPPERS�v���W�F�N�g��
 *        �񍐂��邱�ƁD
 *  (4) �{�\�t�g�E�F�A�̗��p�ɂ�蒼�ړI�܂��͊ԐړI�ɐ����邢���Ȃ鑹
 *      �Q������C��L���쌠�҂����TOPPERS�v���W�F�N�g��Ɛӂ��邱�ƁD
 * 
 *  �{�\�t�g�E�F�A�́C���ۏ؂Œ񋟂���Ă�����̂ł���D��L���쌠�҂�
 *  ���TOPPERS�v���W�F�N�g�́C�{�\�t�g�E�F�A�Ɋւ��āC���̓K�p�\����
 *  �܂߂āC�����Ȃ�ۏ؂��s��Ȃ��D�܂��C�{�\�t�g�E�F�A�̗��p�ɂ�蒼
 *  �ړI�܂��͊ԐړI�ɐ����������Ȃ鑹�Q�Ɋւ��Ă��C���̐ӔC�𕉂�Ȃ��D
 * 
 *  @(#) $Id: task.c,v 1.12 2006/02/12 05:29:32 hiro Exp $
 */

/*
 *	�^�X�N�Ǘ����W���[��
 */

#include <kernel/jsp_kernel.h>
#include <kernel/task.h>
#include <armv6/cpu_context.h>

#ifdef __tskini

/*
 *  ���s��Ԃ̃^�X�N
 */
TCB	*runtsk;

/*
 *  �ō��D�揇�ʂ̃^�X�N
 */
TCB	*schedtsk;

/*
 *  �^�X�N�f�B�X�p�b�`�^�^�X�N��O�������[�`���N���v���t���O
 */
BOOL	reqflg;

/*
 *  �^�X�N�f�B�X�p�b�`�����
 */
BOOL	enadsp;

/*
 *  ���f�B�L���[
 */
QUEUE	ready_queue[TNUM_TPRI];

/*
 *  ���f�B�L���[�T�[�`�̂��߂̃r�b�g�}�b�v
 *
 *  �r�b�g�}�b�v�� UINT �Œ�`���Ă��邪�C�r�b�g�}�b�v�T�[�`�֐��ŗD��
 *  �x��16�i�K�ȉ��ł��邱�Ƃ����肵�Ă���D
 */
UINT	ready_primap;

/*
 *  �^�X�N�Ǘ����W���[���̏���
 */
void
task_initialize()
{
	UINT	i, j;
	TCB	*tcb;

	runtsk = schedtsk = NULL;
	reqflg = FALSE;
	enadsp = TRUE;

	for (i = 0; i < TNUM_TPRI; i++) {
		queue_initialize(&(ready_queue[i]));
	}
	ready_primap = 0;

	for (i = 0; i < TNUM_TSK; i++) {
		j = INDEX_TSK(torder_table[i]);
		tcb = &(tcb_table[j]);
		tcb->tinib = &(tinib_table[j]);
		tcb->actcnt = FALSE;
		make_dormant(tcb);
		if ((tcb->tinib->tskatr & TA_ACT) != 0) {
			make_active(tcb);
		}
	}
}

#endif /* __tskini */

/*
 *  �r�b�g�}�b�v�T�[�`�֐�
 *
 *  bitmap ���� 1 �̃r�b�g�̓��C�ł����ʁi�E�j�̂��̂��T�[�`���C���̃r
 *  �b�g�ԍ���Ԃ��D�r�b�g�ԍ��́C�ŉ��ʃr�b�g�� 0 �Ƃ���Dbitmap �� 0
 *  ���w�肵�Ă͂Ȃ�Ȃ��D���̊֐��ł́C�D��x��16�i�K�ȉ��ł��邱�Ƃ�
 *  ���肵�Cbitmap �̉���16�r�b�g�݂̂��T�[�`����D
 *  �r�b�g�T�[�`���߂����v���Z�b�T�ł́C�r�b�g�T�[�`���߂��g���悤��
 *  ��������������ǂ����낤�D���̂悤�ȏꍇ�ɂ́Ccpu_insn.h ��
 *  �r�b�g�T�[�`���߂��g���� bitmap_search ���`���CCPU_BITMAP_SEARCH 
 *  ���}�N����`����΂悢�D�܂��C�r�b�g�T�[�`���߂̃T�[�`���t�Ȃ�
 *  �̗��R�ŗD��x�ƃr�b�g�Ƃ̑Ή���ύX�������ꍇ�ɂ́CPRIMAP_BIT ��
 *  �}�N����`����΂悢�D
 *  �܂��C�W�����C�u������ ffs ������Ȃ�C���̂悤�ɒ�`���ĕW�����C
 *  �u�������g��������ǂ��\��������D
 *	#define	bitmap_search(bitmap) (ffs(bitmap) - 1)
 */
#ifndef PRIMAP_BIT
#define	PRIMAP_BIT(pri)		(1u << (pri))
#endif /* PRIMAP_BIT */

#ifndef CPU_BITMAP_SEARCH

Inline UINT
bitmap_search(UINT bitmap)
{
	static const unsigned char search_table[] = { 0, 1, 0, 2, 0, 1, 0,
						3, 0, 1, 0, 2, 0, 1, 0 };
	UINT	n = 0;

	assert((bitmap & 0xffff) != 0);
	if ((bitmap & 0x00ff) == 0) {
		bitmap >>= 8;
		n += 8;
	}
	if ((bitmap & 0x0f) == 0) {
		bitmap >>= 4;
		n += 4;
	}
	return(n + search_table[(bitmap & 0x0f) - 1]);
}

#endif /* CPU_BITMAP_SEARCH */

/*
 *  �ō��D�揇�ʃ^�X�N�̃T�[�`
 */
#ifdef __tsksched

TCB *
search_schedtsk()
{
	UINT	schedpri;

	schedpri = bitmap_search(ready_primap);
	return((TCB *)(ready_queue[schedpri].next));
}

#endif /* __tsksched */

/*
 *  ���s�ł����Ԃւ̈ڍs
 *
 *  �ō��D�揇�ʂ̃^�X�N���X�V����̂́C���s�ł���^�X�N���Ȃ������ꍇ
 *  �ƁCtcb �̗D��x���ō��D�揇�ʂ̃^�X�N�̗D��x���������ꍇ�ł���D
 */
#ifdef __tskrun

BOOL
make_runnable(TCB *tcb)
{
	UINT	pri = tcb->priority;

	tcb->tstat = TS_RUNNABLE;
	LOG_TSKSTAT(tcb);
	queue_insert_prev(&(ready_queue[pri]), &(tcb->task_queue));
	ready_primap |= PRIMAP_BIT(pri);

	if (schedtsk == (TCB *) NULL || pri < schedtsk->priority) {
		schedtsk = tcb;
		return(enadsp);
	}
	return(FALSE);
}

#endif /* __tskrun */

/*
 *  ���s�ł����Ԃ��瑼�̏�Ԃւ̈ڍs
 *
 *  �ō��D�揇�ʂ̃^�X�N���X�V����̂́Ctcb ���ō��D�揇�ʂ̃^�X�N�ł���
 *  ���ꍇ�ł���Dtcb �Ɠ����D��x�̃^�X�N�����ɂ���ꍇ�́Ctcb �̎���
 *  �^�X�N���ō��D�揇�ʂɂȂ�D�����łȂ��ꍇ�́C���f�B�L���[���T�[�`
 *  ����K�v������D
 */
#ifdef __tsknrun

BOOL
make_non_runnable(TCB *tcb)
{
	UINT	pri = tcb->priority;
	QUEUE	*queue = &(ready_queue[pri]);

	queue_delete(&(tcb->task_queue));
	if (queue_empty(queue)) {
		ready_primap &= ~PRIMAP_BIT(pri);
		if (schedtsk == tcb) {
			schedtsk = (ready_primap == 0) ? (TCB * ) NULL
						: search_schedtsk();
			return(enadsp);
		}
	}
	else {
		if (schedtsk == tcb) {
			schedtsk = (TCB *)(queue->next);
			return(enadsp);
		}
	}
	return(FALSE);
}

#endif /* __tsknrun */

/*
 *  �x�~��Ԃւ̈ڍs
 */
#ifdef __tskdmt

void
make_dormant(TCB *tcb)
{
	tcb->priority = tcb->tinib->ipriority;
	tcb->tstat = TS_DORMANT;
	tcb->wupcnt = FALSE;
	tcb->enatex = FALSE;
	tcb->texptn = 0;
	create_context(tcb);
	LOG_TSKSTAT(tcb);
}

#endif /* __tskdmt */

/*
 *  �x�~��Ԃ�����s�ł����Ԃւ̈ڍs
 */
#ifdef __tskact

BOOL
make_active(TCB *tcb)
{
	activate_context(tcb);
	return(make_runnable(tcb));
}

#endif /* __tskact */

/*
 *  ���s��Ԃ̃^�X�N�̏I��
 */
#ifdef __tskext

void
exit_task()
{
	make_non_runnable(runtsk);
	make_dormant(runtsk);
	if (runtsk->actcnt) {
		runtsk->actcnt = FALSE;
		make_active(runtsk);
	}
	exit_and_dispatch();
}

#endif /* __tskext */

/*
 *  ���f�B�L���[���̃^�X�N�̗D��x�̕ύX
 *
 *  �ō��D�揇�ʂ̃^�X�N���X�V����̂́C(1) tcb ���ō��D�揇�ʂ̃^�X�N
 *  �ł����āC���̗D��x���������ꍇ�C(2) tcb ���ō��D�揇�ʂ̃^�X�N��
 *  �͂Ȃ��C�ύX��̗D��x���ō��D�揇�ʂ̃^�X�N�̗D��x���������ꍇ
 *  �ł���D(1) �̏ꍇ�ɂ́C���f�B�L���[���T�[�`����K�v������D
 */
#ifdef __tskpri

BOOL
change_priority(TCB *tcb, UINT newpri)
{
	UINT	oldpri = tcb->priority;

	tcb->priority = newpri;
	queue_delete(&(tcb->task_queue));
	if (queue_empty(&(ready_queue[oldpri]))) {
		ready_primap &= ~PRIMAP_BIT(oldpri);
	}
	queue_insert_prev(&(ready_queue[newpri]), &(tcb->task_queue));
	ready_primap |= PRIMAP_BIT(newpri);

	if (schedtsk == tcb) {
		if (newpri >= oldpri) {
			schedtsk = search_schedtsk();
			return(schedtsk != tcb && enadsp);
		}
	}
	else {
		if (newpri < schedtsk->priority) {
			schedtsk = tcb;
			return(enadsp);
		}
	}
	return(FALSE);
}

#endif /* __tskpri */

/*
 *  ���f�B�L���[�̉�]
 *
 *  �ō��D�揇�ʂ̃^�X�N���X�V����̂́C�ō��D�揇�ʂ̃^�X�N���^�X�N�L
 *  ���[�̖����Ɉړ������ꍇ�ł���D
 */
#ifdef __tskrot

BOOL
rotate_ready_queue(UINT pri)
{
	QUEUE	*queue = &(ready_queue[pri]);
	QUEUE	*entry;

	if (!(queue_empty(queue)) && queue->next->next != queue) {
		entry = queue_delete_next(queue);
		queue_insert_prev(queue, entry);
		if (schedtsk == (TCB *) entry) {
			schedtsk = (TCB *)(queue->next);
			return(enadsp);
		}
	}
	return(FALSE);
}

#endif /* __tskrot */

/*
 *  ��܂Œ�`�����^�X�N��O�������[�`���̌^
 */
typedef void	(*TEXRTN)(TEXPTN texptn, VP_INT exinf);

/*
 *  �^�X�N��O�������[�`���̌ďo��
 */
#ifdef __tsktex

void
call_texrtn()
{
	TEXPTN	texptn;

	do {
		texptn = runtsk->texptn;
		runtsk->enatex = FALSE;
		runtsk->texptn = 0;
		t_unlock_cpu();			// enable interrupt
		LOG_TEX_ENTER(texptn);
		(*((TEXRTN)(runtsk->tinib->texrtn)))(texptn,
						runtsk->tinib->exinf);
		LOG_TEX_LEAVE(texptn);
		if (!t_sense_lock()) {	// check interrupt enable
			t_lock_cpu();		// disable interrupt
		}
	} while (runtsk->texptn != 0);
	runtsk->enatex = TRUE;
}

/*
 *  �^�X�N��O�������[�`���̋N��
 */
#ifndef OMIT_CALLTEX

void
calltex()
{
	if (runtsk->enatex && runtsk->texptn != 0) {
		call_texrtn();
	}
}

#endif /* OMIT_CALLTEX */
#endif /* __tsktex */
