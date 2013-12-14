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
 *  @(#) $Id: log_output.c,v 1.11 2007/03/27 08:56:12 hiro Exp $
 */

/*
 *	�V�X�e�����O�̃t�H�[�}�b�g�o��
 */

#include <include/t_services.h>

/*
 *  �|�C���^���i�[�ł��鐮���^�̃f�t�H���g�̒�`
 */
#ifndef _intptr_
#define _intptr_	long
#endif /* _intptr_ */

/*
 *  ���l�𕶎���ɕϊ�
 */
#define CONVERT_BUFLEN	((sizeof(_intptr_) * CHAR_BIT + 2) / 3)
					/* _intptr_�^�̐��l�̍ő啶���� */
static void
convert(unsigned _intptr_ val, unsigned int radix, const char *radchar,
		int width, int minus, int padzero, void (*putc)(char))
{
	char	buf[CONVERT_BUFLEN];
	int	i, j;

	i = 0;
	do {
		buf[i++] = radchar[val % radix];
		val /= radix;
	} while (val != 0);

	width -= minus;
	if (minus > 0 && padzero > 0) {
		(*putc)('-');
	}
	for (j = i; j < width; j++) {
		(*putc)((char)(padzero > 0 ? '0' : ' '));
	}
	if (minus > 0 && padzero <= 0) {
		(*putc)('-');
	}
	while (i > 0) {
		(*putc)(buf[--i]);
	}
}

/*
 *  ���O���̃t�H�[�}�b�g�o��
 */
static const char raddec[] = "0123456789";
static const char radhex[] = "0123456789abcdef";
static const char radHEX[] = "0123456789ABCDEF";

void
syslog_printf(const char *format, VP_INT *args, void (*putc)(char))
{
	int		c;
	int		width;
	int		padzero;
	_intptr_	val;
	const char	*str;

	while ((c = *format++) != '\0') {
		if (c != '%') {
			(*putc)((char) c);
			continue;
		}

		width = padzero = 0;
		if ((c = *format++) == '0') {
			padzero = 1;
			c = *format++;
		}
		while ('0' <= c && c <= '9') {
			width = width * 10 + c - '0';
			c = *format++;
		}
		if (c == 'l') {
			c = *format++;
		}
		switch (c) {
		case 'd':
			val = (_intptr_)(*args++);
			if (val >= 0) {
				convert((unsigned _intptr_) val, 10, raddec,
						width, 0, padzero, putc);
			}
			else {
				convert((unsigned _intptr_)(-val), 10, raddec,
						width, 1, padzero, putc);
			}
			break;
		case 'u':
			val = (_intptr_)(*args++);
			convert((unsigned _intptr_) val, 10, raddec,
						width, 0, padzero, putc);
			break;
		case 'x':
		case 'p':
			val = (_intptr_)(*args++);
			convert((unsigned _intptr_) val, 16, radhex,
						width, 0, padzero, putc);
			break;
		case 'X':
			val = (_intptr_)(*args++);
			convert((unsigned _intptr_) val, 16, radHEX,
						width, 0, padzero, putc);
			break;
		case 'c':
			(*putc)((char)(_intptr_)(*args++));
			break;
		case 's':
			str = (const char *)(*args++);
			while ((c = *str++) != '\0') {
				(*putc)((char) c);
			}
			break;
		case '%':
			(*putc)('%');
			break;
		case '\0':
			format--;
			break;
		default:
			break;
		}
	}
	(*putc)('\n');
}

void
syslog_print(SYSLOG *p_log, void (*putc)(char))
{
	switch (p_log->logtype) {
	case LOG_TYPE_COMMENT:
		syslog_printf((const char *)(p_log->loginfo[0]),
					&(p_log->loginfo[1]), putc);
		break;
	case LOG_TYPE_ASSERT:
		syslog_printf("%s:%u: Assertion `%s' failed.",
					&(p_log->loginfo[0]), putc);
		break;
	}
}

static void
syslog_lostmsg(INT lost, void (*putc)(char))
{
	VP_INT	lostinfo[1];

	lostinfo[0] = (VP_INT) lost;
	syslog_printf("%d messages are lost.", lostinfo, putc);
}

void
syslog_output(void (*putc)(char))
{
	SYSLOG	log;
	INT	lostnum, n;

	lostnum = 0;
	while ((n = vrea_log(&log)) >= 0) {
		lostnum += n;
		if (log.logtype < LOG_TYPE_COMMENT) {
			continue;
		}
		if (lostnum > 0) {
			syslog_lostmsg(lostnum, putc);
			lostnum = 0;
		}
		syslog_print(&log, putc);
	}
	if (lostnum > 0) {
		syslog_lostmsg(lostnum, putc);
	}
}
