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
 *  @(#) $Id: itron.h,v 1.16 2004/12/22 03:38:00 hiro Exp $
 */

/*
 *	ITRON�d�l���ʋK��̃f�[�^�^�E�萔�E�}�N��
 *
 *  ���̃t�@�C���ɂ́C�X�^���_�[�h�v���t�@�C���ɂ͕K�v�Ȃ���`���܂��
 *  ����D�f�[�^�^�̒�`�́C�X�^���_�[�h�v���t�@�C���𖞂������傤�ǂ�
 *  �����ɂ͂��Ă��Ȃ��D
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 *
 *  ���̃C���N���[�h�t�@�C���́Ckernel.h �� sil.h �ŃC���N���[�h�����D
 *  �܂��CITRON�d�l���ʋK��ɏ�������\�t�g�E�F�A���i�̃C���N���[�h�t�@
 *  �C���́C���̃t�@�C���𒼐ڃC���N���[�h���Ă��悢�D���̗�O�������āC
 *  ���̃t�@�C�����璼�ڃC���N���[�h����邱�Ƃ͂Ȃ��D
 *
 *  ���̃t�@�C�����C���N���[�h����O�ɁCt_stddef.h ���C���N���[�h����
 *  �������Ƃ��K�v�ł���D
 */

#ifndef _ITRON_H_
#define _ITRON_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  �J�����Ɉˑ������`
 */
#include <armv6/tool_defs.h>
//#include <assert.h>
/*
 *  �J�����̕W���C���N���[�h�t�@�C���iNULL �� size_t �̒�`���K�v�j
 *
 *  C++/EC++ �ł́C�W���d�l��� stddef.h ���T�|�[�g����Ă���Ƃ͌����
 *  �����C�قƂ�ǂ̏����n�ŃT�|�[�g����Ă���D
 */
#ifndef _MACRO_ONLY
#include <stddef.h>
#endif /* _MACRO_ONLY */

/*
 *  �R���p�C���ˑ��̃f�[�^�^�̃f�t�H���g��`
 */
#ifndef _bool_
#define	_bool_		int		/* �u�[���^ */
#endif /* _bool_ */

/*
 *  ITRON�d�l���ʃf�[�^�^
 */
#ifndef _MACRO_ONLY

#ifdef _int8_
typedef	signed _int8_		B;	/* �����t��8�r�b�g���� */
typedef	unsigned _int8_		UB;	/* ��������8�r�b�g���� */
typedef	_int8_			VB;	/* �^����܂�Ȃ�8�r�b�g�̒l */
#endif /* _int8_ */

#ifdef _int16_
typedef	signed _int16_		H;	/* �����t��16�r�b�g���� */
typedef	unsigned _int16_ 	UH;	/* ��������16�r�b�g���� */
typedef	_int16_			VH;	/* �^����܂�Ȃ�16�r�b�g�̒l */
#endif /* _int16_ */

typedef	signed _int32_		W;	/* �����t��32�r�b�g���� */
typedef	unsigned _int32_	UW;	/* ��������32�r�b�g���� */
typedef	_int32_			VW;	/* �^����܂�Ȃ�32�r�b�g�̒l */

#ifdef _int64_
typedef	signed _int64_		D;	/* �����t��64�r�b�g���� */
typedef	unsigned _int64_	UD;	/* ��������64�r�b�g���� */
typedef	_int64_			VD;	/* �^����܂�Ȃ�64�r�b�g�̒l */
#endif /* _int64_ */

typedef	void		*VP;		/* �^����܂�Ȃ����̂ւ̃|�C���^ */
typedef	void		(*FP)();	/* �v���O�����̋N���Ԓn�i�|�C���^�j */

typedef signed int	INT;		/* ���R�ȃT�C�Y�̕����t������ */
typedef unsigned int	UINT;		/* ���R�ȃT�C�Y�̕����������� */

typedef _bool_		BOOL;		/* �^�U�l */

typedef INT		FN;		/* �@�\�R�[�h */
typedef	INT		ER;		/* �G���[�R�[�h */
typedef	INT		ID;		/* �I�u�W�F�N�g��ID�ԍ� */
typedef	UINT		ATR;		/* �I�u�W�F�N�g�̑��� */
typedef	UINT		STAT;		/* �I�u�W�F�N�g�̏�� */
typedef	UINT		MODE;		/* �T�[�r�X�R�[���̓��샂�[�h */
typedef	INT		PRI;		/* �D��x */
typedef	size_t		SIZE;		/* �������̈�̃T�C�Y */

typedef	INT		TMO;		/* �^�C���A�E�g�w�� */
typedef	UINT	RELTIM;		/* ���Ύ��� */
typedef	UW		SYSTIM;		/* �V�X�e������ */

#ifdef _vp_int_
typedef	_vp_int_	VP_INT;		/* VP �܂��� INT */
#else /* _vp_int_ */
typedef	VP		VP_INT;		/* VP �܂��� INT */
#endif /* _vp_int_ */

typedef	INT		ER_BOOL;	/* ER �܂��� BOOL */
typedef	INT		ER_ID;		/* ER �܂��� ID */
typedef	INT		ER_UINT;	/* ER �܂��� UINT */

#endif /* _MACRO_ONLY */

/*
 *  ITRON�d�l���ʒ萔
 */

/*
 *  ���
 *
 *  _MACRO_ONLY �̎��ɂ́CNULL ���`���Ȃ��D����́C_MACRO_ONLY �̎�
 *  ��stddef.h ���C���N���[�h���Ȃ����߁C�����łȂ����� NULL �̒�`��
 *  �H���Ⴄ�\�������邽�߂ł���D�܂��C�V�X�e���R���t�B�M�����[�V��
 *  ���t�@�C������������ꍇ�ɂ� NULL ���`���Ă͂Ȃ�Ȃ����߁C���̓_
 *  �������`���Ȃ���s�����悢�D
 */
#ifndef _MACRO_ONLY
#ifndef NULL				/* stddef.h �Ɋ܂܂�Ă���͂� */
#define	NULL		0		/* ����|�C���^ */
#endif /* NULL */
#endif /* _MACRO_ONLY */

#define	TRUE		1		/* �^ */
#define	FALSE		0		/* �U */
#define	E_OK		0		/* ����I�� */

/*
 *  �G���[�R�[�h
 */
#define	E_SYS		(-5)		/* �V�X�e���G���[ */
#define	E_NOSPT		(-9)		/* ���T�|�[�g�@�\ */
#define	E_RSFN		(-10)		/* �\��@�\�R�[�h */
#define	E_RSATR		(-11)		/* �\�񑮐� */
#define	E_PAR		(-17)		/* �p�����[�^�G���[ */
#define	E_ID		(-18)		/* �s��ID�ԍ� */
#define	E_CTX		(-25)		/* �R���e�L�X�g�G���[ */
#define	E_MACV		(-26)		/* �������A�N�Z�X�ᔽ */
#define	E_OACV		(-27)		/* �I�u�W�F�N�g�A�N�Z�X�ᔽ */
#define	E_ILUSE		(-28)		/* �T�[�r�X�R�[���s���g�p */
#define	E_NOMEM		(-33)		/* �������s�� */
#define	E_NOID		(-34)		/* ID�ԍ��s�� */
#define	E_OBJ		(-41)		/* �I�u�W�F�N�g��ԃG���[ */
#define	E_NOEXS		(-42)		/* �I�u�W�F�N�g������ */
#define	E_QOVR		(-43)		/* �L���[�C���O�I�[�o�[�t���[ */
#define	E_RLWAI		(-49)		/* �҂���Ԃ̋������� */
#define	E_TMOUT		(-50)		/* �|�[�����O���s�܂��̓^�C���A�E�g */
#define	E_DLT		(-51)		/* �҂��I�u�W�F�N�g�̍폜 */
#define	E_CLS		(-52)		/* �҂��I�u�W�F�N�g�̏�ԕω� */
#define	E_WBLK		(-57)		/* �m���u���b�L���O��t�� */
#define	E_BOVR		(-58)		/* �o�b�t�@�I�[�o�[�t���[ */

/*
 *  �I�u�W�F�N�g����
 */
#define	TA_NULL		0u		/* �I�u�W�F�N�g�������w�肵�Ȃ� */

/*
 *  �^�C���A�E�g�w��
 */
#define TMO_POL		0		/* �|�[�����O */
#define TMO_FEVR	(-1)		/* �i�v�҂� */
#define TMO_NBLK	(-2)		/* �m���u���b�L���O */

/*
 *  ITRON�d�l���ʃ}�N��
 */

/*
 *  �G���[�R�[�h�����E�����}�N��
 *
 *  ANSI C����̋K�i�ł́C�E�V�t�g���Z�q�i>>�j�������g������邱�Ƃ��
 *  �؂��Ă��Ȃ����߁CSERCD�}�N���̒�`��P�� ((ercd) >> 8) �Ƃ���ƁC
 *  �E�V�t�g���Z�q�𕄍��g�����Ȃ��R���p�C���ł́CSERCD �̕Ԓl�����̒l
 *  �ɂȂ��Ă��܂��D
 */
#define	ERCD(mercd,sercd)	(((sercd) << 8) | ((mercd) & 0xff))

#ifdef _int8_
#define	MERCD(ercd)		((ER)((B)(ercd)))
#define	SERCD(ercd)		((ER)((B)((ercd) >> 8)))
#else /* _int8_ */
#define	MERCD(ercd)		(((ercd) & 0x80) == 0 ? ((ercd) & 0xff) \
							: ((ercd) | ~0xff))
#define	SERCD(ercd)		((~((~0) >> 8)) | ((ercd) >> 8))
#endif /* _int8_ */

#ifdef __cplusplus
}
#endif

#endif /* _ITRON_H_ */
