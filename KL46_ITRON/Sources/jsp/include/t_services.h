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
 *  @(#) $Id: t_services.h,v 1.7 2006/01/13 00:34:58 hiro Exp $
 */

/*
 *	�A�v���P�[�V�����p �W���C���N���[�h�t�@�C��
 *
 *  ���̃C���N���[�h�t�@�C���́C�J�[�l����œ��삷��v���O�����̃\�[�X
 *  �t�@�C���ŃC���N���[�h����W���C���N���[�h�t�@�C���ł���D���̒��ŁC
 *  kernel.h�i����ɂ�������Ct_stddef.h�Citron.h�Ctool_defs.h�C
 *  sys_defs.h�Ccpu_defs.h�Ct_syslog.h�j��serial.h���C���N���[�h���Ă�
 *  ��D�܂��C�A�v���P�[�V�����ɗL�v�Ǝv�����`���������܂�ł���D
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 */

#ifndef _T_SERVICES_H_
#define _T_SERVICES_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  �J�[�l�����Ăяo�����߂ɕK�v�ȃC���N���[�h�t�@�C��
 */
#include <include/kernel.h>

#ifndef _MACRO_ONLY

/*
 *  �V���A���C���^�t�F�[�X���W���[��
 */
#include <include/serial.h>

/*
 *  �J�[�l���̏I������
 */
extern void	kernel_exit(void) throw();

/*
 *  syscall�}�N���C_syscall �}�N���̒�`
 */

extern void	t_perror(UINT prio, const char *file, int line,
					const char *expr, ER ercd) throw();

Inline ER
_t_perror(const char *file, int line, const char *expr, ER ercd)
{
	if (ercd < 0) {
		t_perror(LOG_ERROR, file, line, expr, ercd);
	}
	return(ercd);
}

Inline ER
_t_panic(const char *file, int line, const char *expr, ER ercd)
{
	if (ercd < 0) {
		t_perror(LOG_EMERG, file, line, expr, ercd);
		kernel_abort();
	}
	return(ercd);
}

#define syscall(s)	_t_perror(__FILE__, __LINE__, #s, (s))
#define _syscall(s)	_t_panic(__FILE__, __LINE__, #s, (s))

#endif /* _MACRO_ONLY */

#ifdef __cplusplus
}
#endif

#endif /* _T_SERVICES_H_ */
