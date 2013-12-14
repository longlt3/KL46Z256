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
 *  @(#) $Id: syslog.h,v 1.3 2003/07/08 14:44:19 hiro Exp $
 */

/*
 *	�V�X�e�����O�@�\
 */

#ifndef _SYSLOG_H_
#define _SYSLOG_H_

#include <include/t_syslog.h>

/*
 *  ���O�o�b�t�@�Ƃ���ɃA�N�Z�X���邽�߂̃|�C���^
 */
#ifndef TCNT_SYSLOG_BUFFER
#define TCNT_SYSLOG_BUFFER	32	/* ���O�o�b�t�@�̃T�C�Y */
#endif /* TCNT_SYSLOG_BUFFER */

extern SYSLOG	syslog_buffer[];	/* ���O�o�b�t�@ */
extern UINT	syslog_count;		/* ���O�o�b�t�@���̃��O�̐� */
extern UINT	syslog_head;		/* �擪�̃��O�̊i�[�ʒu */
extern UINT	syslog_tail;		/* ���̃��O�̊i�[�ʒu */
extern UINT	syslog_lost;		/* ����ꂽ���O�̐� */

/*
 *  �o�͂��ׂ����O���̏d�v�x�i�r�b�g�}�b�v�j
 */
extern UINT	syslog_logmask;		/* ���O�o�b�t�@�ɋL�^���ׂ��d�v�x */
extern UINT	syslog_lowmask;		/* �჌�x���o�͂��ׂ��d�v�x */

#ifndef OMIT_SYSLOG

/*
 *  �V�X�e�����O�@�\�̏���
 */
extern void	syslog_initialize(void);

/*
 *  �V�X�e�����O�@�\�̏I������
 */
extern void	syslog_terminate(void);

#else /* OMIT_SYSLOG */

#define syslog_initialize()	((void) 0)
#define syslog_terminate()	((void) 0)

#endif /* OMIT_SYSLOG */
#endif /* _SYSLOG_H_ */
