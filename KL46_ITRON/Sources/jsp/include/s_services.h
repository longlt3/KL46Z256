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
 *  @(#) $Id: s_services.h,v 1.4 2003/06/18 12:46:54 hiro Exp $
 */

/*
 *	�f�o�C�X�h���C�o�p �W���C���N���[�h�t�@�C��
 *
 *  ���̃C���N���[�h�t�@�C���́C���ڃn�[�h�E�F�A�ɃA�N�Z�X����f�o�C�X
 *  �h���C�o�̃\�[�X�t�@�C���ŃC���N���[�h����ׂ��W���C���N���[�h�t�@
 *  �C���ł���D���̒��ŁCsil.h�i����ɂ�������Ct_stddef.h�Citron.h�C
 *  tool_defs.h�Csys_defs.h�Ccpu_defs.h�Ct_syslog.h�j�� t_config.h�i��
 *  ��ɂ�������Csys_config.h�Ccpu_config.h�Ctool_config.h�j���C���N
 *  ���[�h���Ă���D
 *
 *  �܂��C�A�v���P�[�V��������Ă΂��f�o�C�X�h���C�o�̃C���N���[�h�t�@
 *  �C���ŁC�C�����C���֐��ȂǂŃV�X�e���C���^�t�F�[�X���C����p���Ă�
 *  ��ꍇ�ɂ��C���̃t�@�C�����C���N���[�h����D
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 */

#ifndef _S_SERVICES_H_
#define _S_SERVICES_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  SIL���Ăяo�����߂ɕK�v�ȃC���N���[�h�t�@�C��
 */
#include <include/sil.h>

/*
 *  �^�[�Q�b�g�ˑ����̒�`
 */
#include <include/t_config.h>

#ifdef __cplusplus
}
#endif

#endif /* _S_SERVICES_H_ */
