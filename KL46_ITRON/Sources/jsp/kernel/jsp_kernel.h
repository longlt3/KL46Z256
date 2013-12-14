/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
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
 *  @(#) $Id: jsp_kernel.h,v 1.10 2003/07/01 13:31:35 hiro Exp $
 */

/*
 *	JSP�J�[�l�� �W���C���N���[�h�t�@�C��
 *
 *  ���̃C���N���[�h�t�@�C���́C�J�[�l�����\������v���O�����̃\�[�X�t�@
 *  �C���ŕK���C���N���[�h����ׂ��W���C���N���[�h�t�@�C���ł���D
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 */

#ifndef _JSP_KERNEL_H_
#define _JSP_KERNEL_H_
/*
 *  �J�[�l���̓������ʖ��̃��l�[��
 */
#include "jsp_rename.h"

/*
 *  �A�v���P�[�V�����Ƌ��ʂ̃C���N���[�h�t�@�C��
 */
#include <include/kernel.h>

/*
 *  �^�[�Q�b�g�ˑ����̒�`
 */
#include <include/t_config.h>

/*
 *  �I�u�W�F�N�gID�̍ŏ��l�̒�`
 */
#define	TMIN_TSKID	1	/* �^�X�NID�̍ŏ��l */
#define	TMIN_SEMID	1	/* �Z�}�t�HID�̍ŏ��l */
#define	TMIN_FLGID	1	/* �t���OID�̍ŏ��l */
#define	TMIN_DTQID	1	/* �f�[�^�L���[ID�̍ŏ��l */
#define	TMIN_MBXID	1	/* ���[���{�b�N�XID�̍ŏ��l */
#define	TMIN_MPFID	1	/* �Œ蒷�������v�[��ID�̍ŏ��l */
#define	TMIN_CYCID	1	/* ���n���h��ID�̍ŏ��l */

/*
 *  �D��x�̒i�K���̒�`
 */
#define	TNUM_TPRI	(TMAX_TPRI - TMIN_TPRI + 1)
#define	TNUM_MPRI	(TMAX_MPRI - TMIN_MPRI + 1)

/*
 *  �J�[�l�����ŗp����}�N���̒�`
 */
#define SYSCALL

/*
 *  �w�b�_�t�@�C���������Ȃ����W���[���̊֐��E�ϐ��̐錾
 */
#ifndef _MACRO_ONLY

/*
 *  �e���W���[���̏���ikernel_cfg.c�j
 */
extern void	object_initialize(void);

/*
 *  �����[�`���̎��s�ikernel_cfg.c�j
 */
extern void	call_inirtn(void);

/*
 *  �I���������[�`���̎��s�ikernel_cfg.c�j
 */
extern void	call_terrtn(void);

/*
 *  �N�����b�Z�[�W�̕\���ibanner.c�j
 */
extern void	print_banner(void);

/*
 *  �J�[�l���̏I�������istartup.c�j
 */
extern void	kernel_exit(void);

/*
 *  �J�[�l�������ԃt���O�istartup.c�j
 */
extern BOOL	iniflg;

#endif /* _MACRO_ONLY */
#endif /* _JSP_KERNEL_H_ */
