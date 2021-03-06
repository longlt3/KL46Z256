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
 *  @(#) $Id: t_stddef.h,v 1.7 2004/01/05 05:11:37 hiro Exp $
 */

/*
 *	�J�[�l���E�A�v���P�[�V���� ���ʃC���N���[�h�t�@�C��
 *
 *  ���̃C���N���[�h�t�@�C���́Ckernel.h �� sil.h �̐擪�ŃC���N���[�h
 *  �����D���̃t�@�C�����璼�ڃC���N���[�h����邱�Ƃ͂Ȃ��D
 *
 *  ���̒��ŃC���N���[�h���Ă���t�@�C���������āC���̃C���N���[�h�t�@
 *  �C���Ɉˑ����Ă��Ȃ��D
 */

#ifndef _T_STDDEF_H_
#define _T_STDDEF_H_

/*
 *  �J�����Ɉˑ������`
 */
#include <armv6/tool_defs.h>

/*
 *  �J�����̕W���C���N���[�h�t�@�C���iCHAR_BIT �̒�`���K�v�j
 *
 *  C++/EC++ �ł́C�W���d�l��� limits.h ���T�|�[�g����Ă���Ƃ͌����
 *  �����C�قƂ�ǂ̏����n�ŃT�|�[�g����Ă���D
 */
#ifndef _MACRO_ONLY
#include <limits.h>
#endif /* _MACRO_ONLY */

/*
 *  �R���p�C���̊g���@�\�̂��߂̃}�N���̃f�t�H���g��`
 */
#ifndef Inline
#define	Inline		static inline
#endif /* Inline */

/*
 *  C����/EC++�� throw() �ɑΏ�
 */
#if !defined(__cplusplus) || defined(__embedded_cplusplus)
#define throw()
#endif

/*
 *  assert�}�N���̒�`
 */
#undef assert
#ifndef NDEBUG
#define assert(exp) \
	((void)(!(exp) ? (_syslog_3(LOG_EMERG, LOG_TYPE_ASSERT,		\
				(VP_INT)(__FILE__), (VP_INT)(__LINE__),	\
				(VP_INT)(#exp)),			\
				kernel_abort(), 0) : 0))
#else /* NDEBUG */
#define	assert(exp)	((void) 0)
#endif /* NDEBUG */

#endif /* _T_STDDEF_H_ */
