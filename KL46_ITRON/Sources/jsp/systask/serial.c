/*
 *  TOPPERS/JSP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Just Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2006 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 * 
 *  �ã‹L’˜�ìŒ ŽÒ‚Í�CˆÈ‰º‚Ì (1)�`(4) ‚Ì�ðŒ�‚©�CFree Software Foundation 
 *  ‚É‚æ‚Á‚ÄŒö•\‚³‚ê‚Ä‚¢‚é GNU General Public License ‚Ì Version 2 ‚É‹L
 *  �q‚³‚ê‚Ä‚¢‚é�ðŒ�‚ð–ž‚½‚·�ê�‡‚ÉŒÀ‚è�C–{ƒ\ƒtƒgƒEƒFƒA�i–{ƒ\ƒtƒgƒEƒFƒA
 *  ‚ð‰ü•Ï‚µ‚½‚à‚Ì‚ðŠÜ‚Þ�DˆÈ‰º“¯‚¶�j‚ðŽg—p�E•¡�»�E‰ü•Ï�E�Ä”z•z�iˆÈ‰º�C
 *  —˜—p‚ÆŒÄ‚Ô�j‚·‚é‚±‚Æ‚ð–³�ž‚Å‹–‘ø‚·‚é�D
 *  (1) –{ƒ\ƒtƒgƒEƒFƒA‚ðƒ\�[ƒXƒR�[ƒh‚ÌŒ`‚Å—˜—p‚·‚é�ê�‡‚É‚Í�C�ã‹L‚Ì’˜�ì
 *      Œ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L‚Ì–³•Û�Ø‹K’è‚ª�C‚»‚Ì‚Ü‚Ü‚ÌŒ`‚Åƒ\�[
 *      ƒXƒR�[ƒh’†‚ÉŠÜ‚Ü‚ê‚Ä‚¢‚é‚±‚Æ�D
 *  (2) –{ƒ\ƒtƒgƒEƒFƒA‚ð�Cƒ‰ƒCƒuƒ‰ƒŠŒ`Ž®‚È‚Ç�C‘¼‚Ìƒ\ƒtƒgƒEƒFƒAŠJ”­‚ÉŽg
 *      —p‚Å‚«‚éŒ`‚Å�Ä”z•z‚·‚é�ê�‡‚É‚Í�C�Ä”z•z‚É”º‚¤ƒhƒLƒ…ƒ�ƒ“ƒg�i—˜—p
 *      ŽÒƒ}ƒjƒ…ƒAƒ‹‚È‚Ç�j‚É�C�ã‹L‚Ì’˜�ìŒ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L
 *      ‚Ì–³•Û�Ø‹K’è‚ðŒf�Ú‚·‚é‚±‚Æ�D
 *  (3) –{ƒ\ƒtƒgƒEƒFƒA‚ð�C‹@Ší‚É‘g‚Ý�ž‚Þ‚È‚Ç�C‘¼‚Ìƒ\ƒtƒgƒEƒFƒAŠJ”­‚ÉŽg
 *      —p‚Å‚«‚È‚¢Œ`‚Å�Ä”z•z‚·‚é�ê�‡‚É‚Í�CŽŸ‚Ì‚¢‚¸‚ê‚©‚Ì�ðŒ�‚ð–ž‚½‚·‚±
 *      ‚Æ�D
 *    (a) �Ä”z•z‚É”º‚¤ƒhƒLƒ…ƒ�ƒ“ƒg�i—˜—pŽÒƒ}ƒjƒ…ƒAƒ‹‚È‚Ç�j‚É�C�ã‹L‚Ì’˜
 *        �ìŒ •\Ž¦�C‚±‚Ì—˜—p�ðŒ�‚¨‚æ‚Ñ‰º‹L‚Ì–³•Û�Ø‹K’è‚ðŒf�Ú‚·‚é‚±‚Æ�D
 *    (b) �Ä”z•z‚ÌŒ`‘Ô‚ð�C•Ê‚É’è‚ß‚é•û–@‚É‚æ‚Á‚Ä�CTOPPERSƒvƒ�ƒWƒFƒNƒg‚É
 *        •ñ��‚·‚é‚±‚Æ�D
 *  (4) –{ƒ\ƒtƒgƒEƒFƒA‚Ì—˜—p‚É‚æ‚è’¼�Ú“I‚Ü‚½‚ÍŠÔ�Ú“I‚É�¶‚¶‚é‚¢‚©‚È‚é‘¹
 *      ŠQ‚©‚ç‚à�C�ã‹L’˜�ìŒ ŽÒ‚¨‚æ‚ÑTOPPERSƒvƒ�ƒWƒFƒNƒg‚ð–Æ�Ó‚·‚é‚±‚Æ�D
 * 
 *  –{ƒ\ƒtƒgƒEƒFƒA‚Í�C–³•Û�Ø‚Å’ñ‹Ÿ‚³‚ê‚Ä‚¢‚é‚à‚Ì‚Å‚ ‚é�D�ã‹L’˜�ìŒ ŽÒ‚¨
 *  ‚æ‚ÑTOPPERSƒvƒ�ƒWƒFƒNƒg‚Í�C–{ƒ\ƒtƒgƒEƒFƒA‚ÉŠÖ‚µ‚Ä�C‚»‚Ì“K—p‰Â”\�«‚à
 *  ŠÜ‚ß‚Ä�C‚¢‚©‚È‚é•Û�Ø‚à�s‚í‚È‚¢�D‚Ü‚½�C–{ƒ\ƒtƒgƒEƒFƒA‚Ì—˜—p‚É‚æ‚è’¼
 *  �Ú“I‚Ü‚½‚ÍŠÔ�Ú“I‚É�¶‚¶‚½‚¢‚©‚È‚é‘¹ŠQ‚ÉŠÖ‚µ‚Ä‚à�C‚»‚Ì�Ó”C‚ð•‰‚í‚È‚¢�D
 * 
 *  @(#) $Id: serial.c,v 1.16 2006/02/12 05:26:42 hiro Exp $
 */

/*
 *	ƒVƒŠƒAƒ‹ƒCƒ“ƒ^ƒtƒF�[ƒXƒhƒ‰ƒCƒo
 */

#include <include/t_services.h>
#include <include/serial.h>
#include <armv6/KL46/hw_serial.h>
#include <kernel_id.h>

/*
 *  ƒoƒbƒtƒ@ƒTƒCƒY‚Æƒtƒ��[�§Œä‚ÉŠÖ˜A‚·‚é’è�”
 */

#define	SERIAL_BUFSZ	256		/* ƒhƒ‰ƒCƒo‚Ìƒoƒbƒtƒ@ƒTƒCƒY */

#define	FC_STOP		'\023'		/* ƒRƒ“ƒgƒ��[ƒ‹-S */
#define	FC_START	'\021'		/* ƒRƒ“ƒgƒ��[ƒ‹-Q */

#define	BUFCNT_STOP	(SERIAL_BUFSZ - 64)	/* STOP‚ð‘—‚éŠî�€•¶Žš�” */
#define	BUFCNT_START	(SERIAL_BUFSZ - 128)	/* START‚ð‘—‚éŠî�€•¶Žš�” */

/*
 *  ƒNƒ��[ƒY‚Ì�Û‚É‘—�M‚ð‘Ò‚Â�Å‘åŽžŠÔ�imsec’PˆÊ�j
 */
#define	MAX_FLUSH_WAIT	1000

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg�‰Šú‰»ƒuƒ�ƒbƒN
 */
typedef struct serial_port_initialization_block {
	ID	rcv_semid;	/* Žó�Mƒoƒbƒtƒ@ŠÇ—�—pƒZƒ}ƒtƒH‚ÌID */
	ID	snd_semid;	/* ‘—�Mƒoƒbƒtƒ@ŠÇ—�—pƒZƒ}ƒtƒH‚ÌID */
} SPINIB;

static const SPINIB spinib_table[TNUM_PORT] = {
	{ SERIAL_RCV_SEM1, SERIAL_SND_SEM1 }
#if TNUM_PORT >= 2
	,{ SERIAL_RCV_SEM2, SERIAL_SND_SEM2 }
#endif
#if TNUM_PORT >= 3
	,{ SERIAL_RCV_SEM3, SERIAL_SND_SEM3 }
#endif
#if TNUM_PORT >= 4
        ,{ SERIAL_RCV_SEM4, SERIAL_SND_SEM4 }
#endif
#if TNUM_PORT >= 5
        ,{ SERIAL_RCV_SEM5, SERIAL_SND_SEM5 }
#endif
};

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒgŠÇ—�ƒuƒ�ƒbƒN
 */
typedef struct serial_port_control_block {
	const SPINIB *spinib;	/* ƒVƒŠƒAƒ‹ƒ|�[ƒg�‰Šú‰»ƒuƒ�ƒbƒN */
	SIOPCB	*siopcb;	/* ƒVƒŠƒAƒ‹I/Oƒ|�[ƒgŠÇ—�ƒuƒ�ƒbƒN */
	BOOL	openflag;	/* ƒI�[ƒvƒ“�Ï‚Ýƒtƒ‰ƒO */
	UINT	ioctl;		/* “®�ì�§Œä‚Ì�Ý’è’l */

	UINT	rcv_read_ptr;	/* Žó�Mƒoƒbƒtƒ@“Ç�o‚µƒ|ƒCƒ“ƒ^ */
	UINT	rcv_write_ptr;	/* Žó�Mƒoƒbƒtƒ@�‘�ž‚Ýƒ|ƒCƒ“ƒ^ */
	UINT	rcv_count;	/* Žó�Mƒoƒbƒtƒ@’†‚Ì•¶Žš�” */
	char	rcv_fc_chr;	/* ‘—‚é‚×‚« START/STOP */
	BOOL	rcv_stopped;	/* STOP ‚ð‘—‚Á‚½�ó‘Ô‚©�H */

	UINT	snd_read_ptr;	/* ‘—�Mƒoƒbƒtƒ@“Ç�o‚µƒ|ƒCƒ“ƒ^ */
	UINT	snd_write_ptr;	/* ‘—�Mƒoƒbƒtƒ@�‘�ž‚Ýƒ|ƒCƒ“ƒ^ */
	UINT	snd_count;	/* ‘—�Mƒoƒbƒtƒ@’†‚Ì•¶Žš�” */
	BOOL	snd_stopped;	/* STOP ‚ðŽó‚¯Žæ‚Á‚½�ó‘Ô‚©�H */

	char	rcv_buffer[SERIAL_BUFSZ];	/* Žó�Mƒoƒbƒtƒ@ */
	char	snd_buffer[SERIAL_BUFSZ];	/* ‘—�Mƒoƒbƒtƒ@ */
} SPCB;

static SPCB	spcb_table[TNUM_PORT];

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒgID‚©‚çƒVƒŠƒAƒ‹ƒ|�[ƒgŠÇ—�ƒuƒ�ƒbƒN‚ðŽæ‚è�o‚·‚½‚ß‚Ìƒ}ƒNƒ�
 */
#define INDEX_PORT(portid)	((UINT)((portid) - 1))
#define get_spcb(portid)	(&(spcb_table[INDEX_PORT(portid)]))

/*
 *  ƒ|ƒCƒ“ƒ^‚ÌƒCƒ“ƒNƒŠƒ�ƒ“ƒg
 */
#define INC_PTR(ptr)		{ if (++ptr == SERIAL_BUFSZ) ptr = 0; }

/*
 *  ƒVƒŠƒAƒ‹ƒCƒ“ƒ^ƒtƒF�[ƒXƒhƒ‰ƒCƒo‚Ì�‰Šú‰»ƒ‹�[ƒ`ƒ“
 */
void
serial_initialize(VP_INT exinf)
{
	SPCB	*spcb;
	UINT	i;

	sio_initialize();
	for (spcb = spcb_table, i = 0; i < TNUM_PORT; spcb++, i++) {
		spcb->spinib = &(spinib_table[i]);
		spcb->openflag = FALSE;
	}
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚ÌƒI�[ƒvƒ“
 */
ER
serial_opn_por(ID portid)
{
	SPCB	*spcb;
	ER	ercd;

	if (sns_ctx()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}
	spcb = get_spcb(portid);

	_syscall(loc_cpu());
	if (spcb->openflag) {		/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		ercd = E_OBJ;
	}
	else {
		/*
		 *  •Ï�”‚Ì�‰Šú‰»
		 */
		spcb->ioctl = (IOCTL_ECHO | IOCTL_CRLF
					| IOCTL_FCSND | IOCTL_FCRCV);


		spcb->rcv_read_ptr = spcb->rcv_write_ptr = 0;
		spcb->rcv_count = 0;
		spcb->rcv_fc_chr = '\0';
		spcb->rcv_stopped = FALSE;

		spcb->snd_read_ptr = spcb->snd_write_ptr = 0;
		spcb->snd_count = 0;
		spcb->snd_stopped = FALSE;

		/*
		 *  ƒn�[ƒhƒEƒFƒAˆË‘¶‚ÌƒI�[ƒvƒ“�ˆ—�
		 */
		spcb->siopcb = sio_opn_por(portid, (VP_INT) spcb);

		/*
		 *  Žó�M’Ê’mƒR�[ƒ‹ƒoƒbƒN‚ð‹–‰Â‚·‚é�D
		 */
		sio_ena_cbr(spcb->siopcb, SIO_ERDY_RCV);
		spcb->openflag = TRUE;
		ercd = E_OK;
	}
	_syscall(unl_cpu());
	return(ercd);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚ÌƒNƒ��[ƒY
 */
ER
serial_cls_por(ID portid)
{
	SPCB	*spcb;
	ER	ercd;

	if (sns_ctx()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}
	spcb = get_spcb(portid);

	_syscall(loc_cpu());
	if (!(spcb->openflag)) {	/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		ercd = E_OBJ;
	}
	else {
		/*
		 *  ƒn�[ƒhƒEƒFƒAˆË‘¶‚ÌƒNƒ��[ƒY�ˆ—�
		 */
		sio_cls_por(spcb->siopcb);
		spcb->openflag = FALSE;
		ercd = E_OK;
	}
	_syscall(unl_cpu());
	return(ercd);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚Ö‚Ì•¶Žš‘—�M
 */
Inline BOOL
serial_snd_chr(SPCB *spcb, char c)
{
	if (sio_snd_chr(spcb->siopcb, c)) {
		return(TRUE);
	}
	else {
		sio_ena_cbr(spcb->siopcb, SIO_ERDY_SND);
		return(FALSE);
	}
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚Ö‚Ì‘—�M
 */
static BOOL
serial_wri_chr(SPCB *spcb, char c)
{
	BOOL	buffer_full;

	/*
	 *  LF ‚Ì‘O‚É CR ‚ð‘—�M‚·‚é�D
	 */
	if (c == '\n' && (spcb->ioctl & IOCTL_CRLF) != 0) {
		if (serial_wri_chr(spcb, '\r')) {
			_syscall(wai_sem(spcb->spinib->snd_semid));
		}
	}

	_syscall(loc_cpu());
	if (spcb->snd_count == 0 && !(spcb->snd_stopped)
				&& serial_snd_chr(spcb, c)) {
		/*
		 *  ƒVƒŠƒAƒ‹I/OƒfƒoƒCƒX‚Ì‘—�MƒŒƒWƒXƒ^‚É•¶Žš‚ð“ü‚ê‚é‚±
		 *  ‚Æ‚É�¬Œ÷‚µ‚½�ê�‡�D
		 */
		buffer_full = FALSE;
	}
	else {
		/*
		 *  ‘—�Mƒoƒbƒtƒ@‚É•¶Žš‚ð“ü‚ê‚é�D
		 */
		spcb->snd_buffer[spcb->snd_write_ptr] = c;
		INC_PTR(spcb->snd_write_ptr);
		spcb->snd_count++;
		buffer_full = (spcb->snd_count == SERIAL_BUFSZ);
	}
	_syscall(unl_cpu());
	return(buffer_full);
}

ER_UINT
serial_wri_dat(ID portid, char *buf, UINT len)
{
	SPCB	*spcb;
	BOOL	buffer_full;
	UINT	i;

	if (sns_dpn()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}

	spcb = get_spcb(portid);
	if (!(spcb->openflag)) {	/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		return(E_OBJ);
	}

	buffer_full = TRUE;		/* ƒ‹�[ƒv‚Ì1‰ñ‚ß‚Í wai_sem ‚·‚é */
	for (i = 0; i < len; i++) {
		if (buffer_full) {
			_syscall(wai_sem(spcb->spinib->snd_semid));
		}
		buffer_full = serial_wri_chr(spcb, *buf++);
	}
	if (!buffer_full) {
		_syscall(sig_sem(spcb->spinib->snd_semid));
	}
	return((ER_UINT) len);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚©‚ç‚ÌŽó�M
 */
static BOOL
serial_rea_chr(SPCB *spcb, char *c)
{
	BOOL	buffer_empty;

	_syscall(loc_cpu());

	/*
	 *  Žó�Mƒoƒbƒtƒ@‚©‚ç•¶Žš‚ðŽæ‚è�o‚·�D
	 */
	*c = spcb->rcv_buffer[spcb->rcv_read_ptr];
	INC_PTR(spcb->rcv_read_ptr);
	spcb->rcv_count--;
	buffer_empty = (spcb->rcv_count == 0);

	/*
	 *  START ‚ð‘—�M‚·‚é�D
	 */
	if (spcb->rcv_stopped && spcb->rcv_count <= BUFCNT_START) {
		if (!serial_snd_chr(spcb, FC_START)) {
			spcb->rcv_fc_chr = FC_START;
		}
		spcb->rcv_stopped = FALSE;
	}
	_syscall(unl_cpu());

	/*
	 *  ƒGƒR�[ƒoƒbƒN�ˆ—��D
	 */
	if ((spcb->ioctl & IOCTL_ECHO) != 0) {
		_syscall(wai_sem(spcb->spinib->snd_semid));
		if (!serial_wri_chr(spcb, *c)) {
			_syscall(sig_sem(spcb->spinib->snd_semid));
		}
	}
	return(buffer_empty);
}

ER_UINT
serial_rea_dat(ID portid, char *buf, UINT len)
{
	SPCB	*spcb;
	BOOL	buffer_empty;
	UINT	i;

	if (sns_dpn()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}

	spcb = get_spcb(portid);
	if (!(spcb->openflag)) {	/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		return(E_OBJ);
	}

	buffer_empty = TRUE;		/* ƒ‹�[ƒv‚Ì1‰ñ‚ß‚Í wai_sem ‚·‚é */
	for (i = 0; i < len; i++) {
		if (buffer_empty) {
			_syscall(wai_sem(spcb->spinib->rcv_semid));
		}
		buffer_empty = serial_rea_chr(spcb, buf++);
	}
	if (!buffer_empty) {
		_syscall(sig_sem(spcb->spinib->rcv_semid));
	}
	return((ER_UINT) len);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚Ì�§Œä
 */
ER
serial_ctl_por(ID portid, UINT ioctl)
{
	SPCB	*spcb;

	if (sns_ctx()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}

	spcb = get_spcb(portid);
	if (!(spcb->openflag)) {	/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		return(E_OBJ);
	}

	spcb->ioctl = ioctl;
	return(E_OK);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg�ó‘Ô‚ÌŽQ�Æ
 */
ER
serial_ref_por(ID portid, T_SERIAL_RPOR *pk_rpor)
{
	SPCB	*spcb;

	if (sns_ctx()) {		/* ƒRƒ“ƒeƒLƒXƒg‚Ìƒ`ƒFƒbƒN */
		return(E_CTX);
	}
	if (!(1 <= portid && portid <= TNUM_PORT)) {
		return(E_ID);		/* ƒ|�[ƒg”Ô�†‚Ìƒ`ƒFƒbƒN */
	}

	spcb = get_spcb(portid);
	if (!(spcb->openflag)) {	/* ƒI�[ƒvƒ“�Ï‚Ý‚©‚Ìƒ`ƒFƒbƒN */
		return(E_OBJ);
	}

	pk_rpor->reacnt = spcb->rcv_count;
	pk_rpor->wricnt = spcb->snd_count;
	return(E_OK);
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚©‚ç‚Ì‘—�M‰Â”\ƒR�[ƒ‹ƒoƒbƒN
 */
void
sio_ierdy_snd(VP_INT exinf)
{
	SPCB	*spcb;

	spcb = (SPCB *) exinf;
	if (spcb->rcv_fc_chr != '\0') {
		/*
		 *  START/STOP ‚ð‘—�M‚·‚é�D
		 */
		(void) sio_snd_chr(spcb->siopcb, spcb->rcv_fc_chr);
		spcb->rcv_fc_chr = '\0';
	}
	else if (!(spcb->snd_stopped) && spcb->snd_count > 0) {
		/*
		 *  ‘—�Mƒoƒbƒtƒ@’†‚©‚ç•¶Žš‚ðŽæ‚è�o‚µ‚Ä‘—�M‚·‚é�D
		 */
		(void) sio_snd_chr(spcb->siopcb,
				spcb->snd_buffer[spcb->snd_read_ptr]);
		INC_PTR(spcb->snd_read_ptr);
		if (spcb->snd_count == SERIAL_BUFSZ) {
			_syscall(isig_sem(spcb->spinib->snd_semid));
		}
		spcb->snd_count--;
	}
	else {
		/*
		 *  ‘—�M‚·‚×‚«•¶Žš‚ª‚È‚¢�ê�‡‚Í�C‘—�M‰Â”\ƒR�[ƒ‹ƒoƒbƒN‚ð
		 *  ‹ÖŽ~‚·‚é�D
		 */
		sio_dis_cbr(spcb->siopcb, SIO_ERDY_SND);
	}
}

/*
 *  ƒVƒŠƒAƒ‹ƒ|�[ƒg‚©‚ç‚ÌŽó�M’Ê’mƒR�[ƒ‹ƒoƒbƒN
 */
void
sio_ierdy_rcv(VP_INT exinf)
{
	SPCB	*spcb;
	char	c;

	spcb = (SPCB *) exinf;
	c = (char) sio_rcv_chr(spcb->siopcb);
	if ((spcb->ioctl & IOCTL_FCSND) != 0 && c == FC_STOP) {
		/*
		 *  ‘—�M‚ðˆêŽž’âŽ~‚·‚é�D‘—�M’†‚Ì•¶Žš‚Í‚»‚Ì‚Ü‚Ü‘—�M‚·‚é�D
		 */
		spcb->snd_stopped = TRUE;
	}
	else if (spcb->snd_stopped && (c == FC_START
				|| (spcb->ioctl & IOCTL_FCANY) != 0)) {
		/*
		 *  ‘—�M‚ð�ÄŠJ‚·‚é�D
		 */
		spcb->snd_stopped = FALSE;
		if (spcb->snd_count > 0) {
			c = spcb->snd_buffer[spcb->snd_read_ptr];
			if (serial_snd_chr(spcb, c)) {
				INC_PTR(spcb->snd_read_ptr);
				if (spcb->snd_count == SERIAL_BUFSZ) {
					_syscall(isig_sem(spcb->spinib
								->snd_semid));
				}
				spcb->snd_count--;
			}
		}
	}
	else if ((spcb->ioctl & IOCTL_FCSND) != 0 && c == FC_START) {
		/*
		 *  ‘—�M‚É‘Î‚µ‚Äƒtƒ��[�§Œä‚µ‚Ä‚¢‚é�ê�‡�CSTART ‚ÍŽÌ‚Ä‚é�D
		 */
	}
	else if (spcb->rcv_count == SERIAL_BUFSZ) {
		/*
		 *  ƒoƒbƒtƒ@ƒtƒ‹‚Ì�ê�‡�CŽó�M‚µ‚½•¶Žš‚ðŽÌ‚Ä‚é�D
		 */
	}
	else {
		/*
		 *  Žó�M‚µ‚½•¶Žš‚ðŽó�Mƒoƒbƒtƒ@‚É“ü‚ê‚é�D
		 */
		spcb->rcv_buffer[spcb->rcv_write_ptr] = c;
		INC_PTR(spcb->rcv_write_ptr);
		if (spcb->rcv_count == 0) {
			_syscall(isig_sem(spcb->spinib->rcv_semid));
		}
		spcb->rcv_count++;

		/*
		 *  STOP ‚ð‘—�M‚·‚é�D
		 */
		if ((spcb->ioctl & IOCTL_FCRCV) != 0 && !(spcb->rcv_stopped)
					&& (spcb->rcv_count >= BUFCNT_STOP)) {
			if (!serial_snd_chr(spcb, FC_STOP)) {
				spcb->rcv_fc_chr = FC_STOP;
			}
			spcb->rcv_stopped = TRUE;
		}
	}
}
