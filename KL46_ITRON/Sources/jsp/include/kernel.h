/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2004 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: kernel.h,v 1.22 2007/05/08 07:33:51 honda Exp $
 */

/*
 *	��ITRON4.0�d�l�W���C���N���[�h�t�@�C��
 *
 *  ���̃t�@�C���ł́C�X�^���_�[�h�v���t�@�C���ŕK�v�Ȃ��̂ƁCJSP�J�[
 *  �l���Ǝ��̊g���@�\�ŕK�v�Ȃ��̂������`���Ă���D�f�[�^�^�̒�`�́C
 *  �X�^���_�[�h�v���t�@�C���𖞂������傤�ǂ̒����ɂ͂��Ă��Ȃ��D
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 *
 *  ���̃C���N���[�h�t�@�C���́C�W���C���N���[�h�t�@�C���it_services.h 
 *  �� jsp_kernel.h�j�ŃC���N���[�h�����D�܂��C���� ITRON�d�lOS ����
 *  �\�t�g�E�F�A���|�[�e�B���O����ꍇ�Ȃǂɂ́C���̃t�@�C���𒼐ڃC��
 *  �N���[�h���Ă��悢�D���̗�O�������āC���̃t�@�C�����璼�ڃC���N���[
 *  �h����邱�Ƃ͂Ȃ��D
 *
 *  ���̒��ŃC���N���[�h���Ă���t�@�C���������āC���̃C���N���[�h�t�@
 *  �C���Ɉˑ����Ă��Ȃ��D
 */

#ifndef _KERNEL_H_
#define _KERNEL_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  �J�[�l���E�A�v���P�[�V���� ���ʃC���N���[�h�t�@�C��
 */
#include <include/t_stddef.h>

/*
 *  ITRON�d�l���ʋK��̃f�[�^�^�E�萔�E�}�N��
 */
#include <include/itron.h>

/*
 *  �V�X�e����v���Z�b�T�Ɉˑ������`
 */
#include <armv6/KL46/sys_defs.h>
#include <armv6/cpu_defs.h>

/*
 *  �V�X�e�����O�T�[�r�X�̂��߂̒�`
 */
#include <include/t_syslog.h>

/*
 *  �⏕�}�N��
 */
#define	TROUND_VP(sz)	(((sz) + sizeof(VP) - 1) & ~(sizeof(VP) - 1))
#define	TCOUNT_VP(sz)	(((sz) + sizeof(VP) - 1) / sizeof(VP))

/*
 *  �f�[�^�^�̒�`
 */
#ifndef _MACRO_ONLY

typedef	UINT		TEXPTN;		/* �^�X�N��O�v���̃r�b�g�p�^�[�� */
typedef	UINT		FLGPTN;		/* �C�x���g�t���O�̃r�b�g�p�^�[�� */

typedef	struct t_msg {			/* ���[���{�b�N�X�̃��b�Z�[�W�w�b�_ */
	struct t_msg	*next;
} T_MSG;

typedef	struct t_msg_pri {		/* �D��x�t�����b�Z�[�W�w�b�_ */
	T_MSG		msgque;		/* ���b�Z�[�W�w�b�_ */
	PRI		msgpri;		/* ���b�Z�[�W�D��x */
} T_MSG_PRI;

#endif /* _MACRO_ONLY */

/*
 *  �T�[�r�X�R�[���̐錾
 */
#ifndef _MACRO_ONLY

/*
 *  �^�X�N�Ǘ��@�\
 */
extern ER	act_tsk(ID tskid) throw();
extern ER	iact_tsk(ID tskid) throw();
extern ER_UINT	can_act(ID tskid) throw();
extern void	ext_tsk(void) throw();
extern ER	ter_tsk(ID tskid) throw();
extern ER	chg_pri(ID tskid, PRI tskpri) throw();
extern ER	get_pri(ID tskid, PRI *p_tskpri) throw();

/*
 *  �^�X�N�t������@�\
 */
extern ER	slp_tsk(void) throw();
extern ER	tslp_tsk(TMO tmout) throw();
extern ER	wup_tsk(ID tskid) throw();
extern ER	iwup_tsk(ID tskid) throw();
extern ER_UINT	can_wup(ID tskid) throw();
extern ER	rel_wai(ID tskid) throw();
extern ER	irel_wai(ID tskid) throw();
extern ER	sus_tsk(ID tskid) throw();
extern ER	rsm_tsk(ID tskid) throw();
extern ER	frsm_tsk(ID tskid) throw();
extern ER	dly_tsk(RELTIM dlytim) throw();

/*
 *  �^�X�N��O�����@�\
 */
extern ER	ras_tex(ID tskid, TEXPTN rasptn) throw();
extern ER	iras_tex(ID tskid, TEXPTN rasptn) throw();
extern ER	dis_tex(void) throw();
extern ER	ena_tex(void) throw();
extern BOOL	sns_tex(void) throw();

/*
 *  ����E�ʐM�@�\
 */
extern ER	sig_sem(ID semid) throw();
extern ER	isig_sem(ID semid) throw();
extern ER	wai_sem(ID semid) throw();
extern ER	pol_sem(ID semid) throw();
extern ER	twai_sem(ID semid, TMO tmout) throw();

extern ER	set_flg(ID flgid, FLGPTN setptn) throw();
extern ER	iset_flg(ID flgid, FLGPTN setptn) throw();
extern ER	clr_flg(ID flgid, FLGPTN clrptn) throw();
extern ER	wai_flg(ID flgid, FLGPTN waiptn,
			MODE wfmode, FLGPTN *p_flgptn) throw();
extern ER	pol_flg(ID flgid, FLGPTN waiptn,
			MODE wfmode, FLGPTN *p_flgptn) throw();
extern ER	twai_flg(ID flgid, FLGPTN waiptn,
			MODE wfmode, FLGPTN *p_flgptn, TMO tmout) throw();

extern ER	snd_dtq(ID dtqid, VP_INT data) throw();
extern ER	psnd_dtq(ID dtqid, VP_INT data) throw();
extern ER	ipsnd_dtq(ID dtqid, VP_INT data) throw();
extern ER	tsnd_dtq(ID dtqid, VP_INT data, TMO tmout) throw();
extern ER	fsnd_dtq(ID dtqid, VP_INT data) throw();
extern ER	ifsnd_dtq(ID dtqid, VP_INT data) throw();
extern ER	rcv_dtq(ID dtqid, VP_INT *p_data) throw();
extern ER	prcv_dtq(ID dtqid, VP_INT *p_data) throw();
extern ER	trcv_dtq(ID dtqid, VP_INT *p_data, TMO tmout) throw();

extern ER	snd_mbx(ID mbxid, T_MSG *pk_msg) throw();
extern ER	rcv_mbx(ID mbxid, T_MSG **ppk_msg) throw();
extern ER	prcv_mbx(ID mbxid, T_MSG **ppk_msg) throw();
extern ER	trcv_mbx(ID mbxid, T_MSG **ppk_msg, TMO tmout) throw();

/*
 *  �������v�[���Ǘ��@�\
 */
extern ER	get_mpf(ID mpfid, VP *p_blk) throw();
extern ER	pget_mpf(ID mpfid, VP *p_blk) throw();
extern ER	tget_mpf(ID mpfid, VP *p_blk, TMO tmout) throw();
extern ER	rel_mpf(ID mpfid, VP blk) throw();

/*
 *  ���ԊǗ��@�\
 */
extern ER	set_tim(const SYSTIM *p_systim) throw();
extern ER	get_tim(SYSTIM *p_systim) throw();
extern ER	isig_tim(void) throw();

extern ER	sta_cyc(ID cycid) throw();
extern ER	stp_cyc(ID cycid) throw();

/*
 *  �V�X�e����ԊǗ��@�\
 */
extern ER	rot_rdq(PRI tskpri) throw();
extern ER	irot_rdq(PRI tskpri) throw();
extern ER	get_tid(ID *p_tskid) throw();
extern ER	iget_tid(ID *p_tskid) throw();
extern ER	loc_cpu(void) throw();
extern ER	iloc_cpu(void) throw();
extern ER	unl_cpu(void) throw();
extern ER	iunl_cpu(void) throw();
extern ER	dis_dsp(void) throw();
extern ER	ena_dsp(void) throw();
extern BOOL	sns_ctx(void) throw();
extern BOOL	sns_loc(void) throw();
extern BOOL	sns_dsp(void) throw();
extern BOOL	sns_dpn(void) throw();

/*
 *  �����Ǝ��T�[�r�X�R�[��
 */
extern BOOL	vxsns_ctx(VP p_excinf) throw();
extern BOOL	vxsns_loc(VP p_excinf) throw();
extern BOOL	vxsns_dsp(VP p_excinf) throw();
extern BOOL	vxsns_dpn(VP p_excinf) throw();
extern BOOL	vxsns_tex(VP p_excinf) throw();
extern BOOL	vsns_ini(void) throw();

#endif /* _MACRO_ONLY */

/*
 *  �I�u�W�F�N�g�����̒�`
 */
#define TA_HLNG		0x00u		/* ��������p�C���^�t�F�[�X */
#define TA_ASM		0x01u		/* �A�Z���u������p�C���^�t�F�[�X */

#define TA_TFIFO	0x00u		/* �^�X�N�̑҂��s���FIFO���� */
#define TA_TPRI		0x01u		/* �^�X�N�̑҂��s���D��x���� */

#define TA_MFIFO	0x00u		/* ���b�Z�[�W�L���[��FIFO���� */
#define TA_MPRI		0x02u		/* ���b�Z�[�W�L���[��D��x���� */

#define TA_ACT		0x02u		/* �^�X�N���N�����ꂽ��ԂŐ��� */

#define TA_WSGL		0x00u		/* �C�x���g�t���O�̑҂��^�X�N��1�� */
#define TA_CLR		0x04u		/* �C�x���g�t���O�̃N���A�w�� */

#define	TA_STA		0x02u		/* ���n���h���𓮍��ԂŐ��� */

/*
 *  �T�[�r�X�R�[���̓��샂�[�h�̒�`
 */
#define	TWF_ANDW	0x00u		/* �C�x���g�t���O��AND�҂� */
#define	TWF_ORW		0x01u		/* �C�x���g�t���O��OR�҂� */

/*
 *  ���̑��̒萔�̒�`
 */
#define	TSK_SELF	0		/* ���^�X�N�w�� */
#define	TSK_NONE	0		/* �Y������^�X�N���Ȃ� */
#define	TPRI_SELF	0		/* ���^�X�N�̃x�[�X�D��x�̎w�� */
#define	TPRI_INI	0		/* �^�X�N�̋N�����D��x�̎w�� */

/*
 *  �\���萔�ƃ}�N��
 */

/*
 *  �D��x�͈̔�
 */
#define	TMIN_TPRI	1		/* �^�X�N�D��x�̍ŏ��l */
#define	TMAX_TPRI	16		/* �^�X�N�D��x�̍ő�l */
#define	TMIN_MPRI	1		/* ���b�Z�[�W�D��x�̍ŏ��l */
#define	TMAX_MPRI	16		/* ���b�Z�[�W�D��x�̍ő�l */

/*
 *  �o�[�W�������
 */
#define	TKERNEL_MAKER	0x0118u		/* �J�[�l���̃��[�J�[�R�[�h */
#define	TKERNEL_PRID	0x0001u		/* �J�[�l���̎��ʔԍ� */
#define	TKERNEL_SPVER	0x5402u		/* ITRON�d�l�̃o�[�W�����ԍ� */
#define	TKERNEL_PRVER	0x1044u		/* �J�[�l���̃o�[�W�����ԍ� */

/*
 *  �L���[�C���O�^�l�X�g�񐔂̍ő�l
 */
#define	TMAX_ACTCNT	1		/* �N���v���L���[�C���O���̍ő�l */
#define	TMAX_WUPCNT	1		/* �N���v���L���[�C���O���̍ő�l */
#define	TMAX_SUSCNT	1		/* �����҂��v���l�X�g���̍ő�l */

/*
 *  �r�b�g�p�^�[���̃r�b�g��
 */
#define	TBIT_TEXPTN	(sizeof(TEXPTN) * CHAR_BIT)
					/* �^�X�N��O�v���̃r�b�g�� */
#define	TBIT_FLGPTN	(sizeof(FLGPTN) * CHAR_BIT)
					/* �C�x���g�t���O�̃r�b�g�� */

#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_H_ */
