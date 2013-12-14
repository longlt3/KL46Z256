/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2004-2005 by Embedded and Real-Time Systems Laboratory
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
 *  @(#) $Id: vasyslog.c,v 1.7 2005/11/24 11:46:02 hiro Exp $
 */

/*
 *	�ϐ���̃V�X�e�����O���C�u����
 */

#include <include/t_services.h>
#include <stdarg.h>

ER
syslog(UINT prio, const char *format, ...)
{
	SYSLOG	log;
	va_list	ap;
	int	i;
	int	c;
	BOOL	lflag;

	log.logtype = LOG_TYPE_COMMENT;
	log.loginfo[0] = (VP_INT) format;
	i = 1;
	va_start(ap, format);

	while ((c = *format++) != '\0' && i < TMAX_LOGINFO) {
		if (c != '%') {
			continue;
		}

		lflag = FALSE;
		c = *format++;
		while ('0' <= c && c <= '9') {
			c = *format++;
		}
		if (c == 'l') {
			lflag = TRUE;
			c = *format++;
		}
		switch (c) {
		case 'd':
			log.loginfo[i++] = lflag ?
					(VP_INT) va_arg(ap, long) :
					(VP_INT) va_arg(ap, int);
			break;
		case 'u':
		case 'x':
		case 'X':
			log.loginfo[i++] = lflag ?
					(VP_INT) va_arg(ap, unsigned long) :
					(VP_INT) va_arg(ap, unsigned int);
			break;
		case 'p':
			log.loginfo[i++] = (VP_INT) va_arg(ap, void *);
			break;
		case 'c':
			log.loginfo[i++] = (VP_INT) va_arg(ap, int);
			break;
		case 's':
			log.loginfo[i++] = (VP_INT) va_arg(ap, const char *);
			break;
		case '\0':
			format--;
			break;
		default:
			break;
		}
	}
	va_end(ap);
	return(vwri_log(prio, &log));
}
