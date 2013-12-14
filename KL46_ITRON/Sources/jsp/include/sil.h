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
 *  @(#) $Id: sil.h,v 1.9 2006/02/12 05:27:25 hiro Exp $
 */

/*
 *	�V�X�e���C���^�t�F�[�X���C���i�^�[�Q�b�g���ʕ��j
 *
 *  �A�Z���u������̃\�[�X�t�@�C����V�X�e���R���t�B�M�����[�V�����t�@
 *  �C�����炱�̃t�@�C�����C���N���[�h���鎞�́C_MACRO_ONLY ���`����
 *  �������ƂŁC�}�N����`�ȊO�̋L�q���������Ƃ��ł���D
 *
 *  ���̃C���N���[�h�t�@�C���́C�W���C���N���[�h�t�@�C���is_services.h�j
 *  �ŃC���N���[�h�����D�܂��C�J�[�l������Ă΂��f�o�C�X�h���C�o��
 *  �C���N���[�h�t�@�C���ŁC�C�����C���֐��ȂǂŃV�X�e���C���^�t�F�[�X
 *  ���C����p���Ă���ꍇ�ɂ��C���̃t�@�C�����C���N���[�h�����D����
 *  ��O�������āC���̃t�@�C�����璼�ڃC���N���[�h����邱�Ƃ͂Ȃ��D
 *
 *  ���̒��ŃC���N���[�h���Ă���t�@�C���������āC���̃C���N���[�h�t�@
 *  �C���Ɉˑ����Ă��Ȃ��D
 */

#ifndef _SIL_H_
#define _SIL_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  �J�[�l���E�A�v���P�[�V���� ���ʃC���N���[�h�t�@�C��
 */
#include <include/t_stddef.h>

/*
 *  ITRON�d�l���ʋK��̃f�[�^�^�E�萔�E�}�N��
 */
#include <include/itron.h>

/*
 *  �V�X�e����v���Z�b�T�Ɉˑ������`
 */
#include <armv6/KL46/sys_defs.h>
#include <armv6/cpu_defs.h>

/*
 *  �V�X�e�����O�T�[�r�X�̂��߂̒�`
 */
#include <include/t_syslog.h>

/*
 *  �G���f�B�A���萔�̒�`
 */
#define	SIL_ENDIAN_LITTLE	0	/* ���g���G���f�B�A�� */
#define	SIL_ENDIAN_BIG		1	/* �r�b�O�G���f�B�A�� */

#ifndef _MACRO_ONLY

/*
 *  �����݃��b�N��Ԃ̐���
 */
#ifndef SIL_PRE_LOC
#include <include/kernel.h>
#define	SIL_PRE_LOC	BOOL _sil_loc_ = sns_loc()
#define	SIL_LOC_INT()	((void)(!(_sil_loc_) \
				&& (sns_ctx() ? iloc_cpu() : loc_cpu())))
#define	SIL_UNL_INT()	((void)(!(_sil_loc_) \
				&& (sns_ctx() ? iunl_cpu() : unl_cpu())))
#endif /* SIL_PRE_LOC */

/*
 *  �������ԑ҂�
 */
extern void	sil_dly_nse(UINT dlytim) throw();

/*
 *  �G���f�B�A���̔��]
 */
#ifndef SIL_REV_ENDIAN_H
#define	SIL_REV_ENDIAN_H(data) \
	((VH)((((UH)(data) & 0xff) << 8) | (((UH)(data) >> 8) & 0xff)))
#endif /* SIL_REV_ENDIAN_H */

#ifndef SIL_REV_ENDIAN_W
#define	SIL_REV_ENDIAN_W(data) \
	((VW)((((UW)(data) & 0xff) << 24) | (((UW)(data) & 0xff00) << 8) \
		| (((UW)(data)>> 8) & 0xff00) | (((UW)(data) >> 24) & 0xff)))
#endif /* SIL_REV_ENDIAN_H */

/*
 *  ��������ԃA�N�Z�X�֐�
 */
#ifndef OMIT_SIL_ACCESS

/*
 *  8�r�b�g�P�ʂ̓Ǐo���^������
 */
#ifdef _int8_

Inline VB
sil_reb_mem(VP mem)
{
	VB	data;

	data = *((volatile VB *) mem);
	return(data);
}

Inline void
sil_wrb_mem(VP mem, VB data)
{
	*((volatile VB *) mem) = data;
}

#endif /* _int8_ */

/*
 *  16�r�b�g�P�ʂ̓Ǐo���^������
 */
#ifdef _int16_

Inline VH
sil_reh_mem(VP mem)
{
	VH	data;

	data = *((volatile VH *) mem);
	return(data);
}

Inline void
sil_wrh_mem(VP mem, VH data)
{
	*((volatile VH *) mem) = data;
}

#if SIL_ENDIAN == SIL_ENDIAN_BIG	/* �r�b�O�G���f�B�A���v���Z�b�T */

#define	sil_reh_bem(mem)	sil_reh_mem(mem)
#define	sil_wrh_bem(mem, data)	sil_wrh_mem(mem, data)

#ifndef OMIT_SIL_REH_LEM

Inline VH
sil_reh_lem(VP mem)
{
	VH	data;

	data = *((volatile VH *) mem);
	return(SIL_REV_ENDIAN_H(data));
}

#endif /* OMIT_SIL_REH_LEM */
#ifndef OMIT_SIL_WRH_LEM

Inline void
sil_wrh_lem(VP mem, VH data)
{
	*((volatile VH *) mem) = SIL_REV_ENDIAN_H(data);
}

#endif /* OMIT_SIL_WRH_LEM */
#else /* SIL_ENDIAN == SIL_ENDIAN_BIG *//* ���g���G���f�B�A���v���Z�b�T */

#define	sil_reh_lem(mem)	sil_reh_mem(mem)
#define	sil_wrh_lem(mem, data)	sil_wrh_mem(mem, data)

#ifndef OMIT_SIL_REH_BEM

Inline VH
sil_reh_bem(VP mem)
{
	VH	data;

	data = *((volatile VH *) mem);
	return(SIL_REV_ENDIAN_H(data));
}

#endif /* OMIT_SIL_REH_BEM */
#ifndef OMIT_SIL_WRH_BEM

Inline void
sil_wrh_bem(VP mem, VH data)
{
	*((volatile VH *) mem) = SIL_REV_ENDIAN_H(data);
}

#endif /* OMIT_SIL_WRH_BEM */
#endif /* SIL_ENDIAN == SIL_ENDIAN_BIG */
#endif /* _int16_ */

/*
 *  32�r�b�g�P�ʂ̓Ǐo���^������
 */

Inline VW
sil_rew_mem(VP mem)
{
	VW	data;

	data = *((volatile VW *) mem);
	return(data);
}

Inline void
sil_wrw_mem(VP mem, VW data)
{
	*((volatile VW *) mem) = data;
}

#if SIL_ENDIAN == SIL_ENDIAN_BIG	/* �r�b�O�G���f�B�A���v���Z�b�T */

#define	sil_rew_bem(mem)	sil_rew_mem(mem)
#define	sil_wrw_bem(mem, data)	sil_wrw_mem(mem, data)

#ifndef OMIT_SIL_REW_LEM

Inline VW
sil_rew_lem(VP mem)
{
	VW	data;

	data = *((volatile VW *) mem);
	return(SIL_REV_ENDIAN_W(data));
}

#endif /* OMIT_SIL_REW_LEM */
#ifndef OMIT_SIL_WRW_LEM

Inline void
sil_wrw_lem(VP mem, VW data)
{
	*((volatile VW *) mem) = SIL_REV_ENDIAN_W(data);
}

#endif /* OMIT_SIL_WRW_LEM */
#else /* SIL_ENDIAN == SIL_ENDIAN_BIG *//* ���g���G���f�B�A���v���Z�b�T */

#define	sil_rew_lem(mem)	sil_rew_mem(mem)
#define	sil_wrw_lem(mem, data)	sil_wrw_mem(mem, data)

#ifndef OMIT_SIL_REW_BEM

Inline VW
sil_rew_bem(VP mem)
{
	VW	data;

	data = *((volatile VW *) mem);
	return(SIL_REV_ENDIAN_W(data));
}

#endif /* OMIT_SIL_REW_BEM */
#ifndef OMIT_SIL_WRW_BEM

Inline void
sil_wrw_bem(VP mem, VW data)
{
	*((volatile VW *) mem) = SIL_REV_ENDIAN_W(data);
}

#endif /* OMIT_SIL_WRW_BEM */
#endif /* SIL_ENDIAN == SIL_ENDIAN_BIG */
#endif /* OMIT_SIL_ACCESS */

#endif /* _MACRO_ONLY */

#ifdef __cplusplus
}
#endif

#endif /* _SIL_H_ */
