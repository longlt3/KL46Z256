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
 *  @(#) $Id: strerror.c,v 1.3 2003/06/04 01:47:08 hiro Exp $
 */

/*
 *	�G���[���b�Z�[�W�������Ԃ��֐�
 */

#include <include/t_services.h>

const char *
itron_strerror(ER ercd)
{
	switch (MERCD(ercd)) {
	case E_OK:
		return("E_OK");

	case E_SYS:
		return("E_SYS");
	case E_NOSPT:
		return("E_NOSPT");
	case E_RSFN:
		return("E_RSFN");
	case E_RSATR:
		return("E_RSATR");

	case E_PAR:
		return("E_PAR");
	case E_ID:
		return("E_ID");

	case E_CTX:
		return("E_CTX");
	case E_MACV:
		return("E_MACV");
	case E_OACV:
		return("E_OACV");
	case E_ILUSE:
		return("E_ILUSE");

	case E_NOMEM:
		return("E_NOMEM");
	case E_NOID:
		return("E_NOID");

	case E_OBJ:
		return("E_OBJ");
	case E_NOEXS:
		return("E_NOEXS");
	case E_QOVR:
		return("E_QOVR");

	case E_RLWAI:
		return("E_RLWAI");
	case E_TMOUT:
		return("E_TMOUT");
	case E_DLT:
		return("E_DLT");
	case E_CLS:
		return("E_CLS");

	case E_WBLK:
		return("E_WBLK");
	case E_BOVR:
		return("E_BOVR");

	default:
		return("unknown error");
	}
}
