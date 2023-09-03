/* SPDX-License-Identifier: GPL-2.0 */
/*
* Copyright (C) 2021 MediaTek Inc.
*/

#include <linux/kernel.h>
#include <linux/err.h>
#include <linux/device.h>

#include "../inc/mt6360_pmic.h"

#ifdef CONFIG_RT_REGMAP
RT_REG_DECL(MT6360_PMIC_RST_PMIC_PAS_CODE1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_RST_PMIC_PAS_CODE2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_RST_PMIC, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_RESV1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_SYSUV_CTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_SYSUV_CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_HW_TRAPPING, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_SEQOFFDLY, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_SEQOFFDLY, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_SEQOFFDLY, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_SEQOFFDLY, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_RESV2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_VOSEL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_LP_VOSEL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_OC, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_SFCHG_R, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_SFCHG_F, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_DVS, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_EN_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_EN_CTRL2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden3, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden4, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden5, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK1_Hidden6, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_VOSEL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_LP_VOSEL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_OC, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_SFCHG_R, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_SFCHG_F, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_DVS, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_EN_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_EN_CTRL2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden3, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden4, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden5, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_BUCK2_Hidden6, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_EN_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_EN_CTRL2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_CTRL0, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO7_CTRL3, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_EN_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_EN_CTRL2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_CTRL0, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_CTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_LDO6_CTRL3, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6360_PMIC_RESV3, 1, RT_VOLATILE, {});

static const rt_register_map_t mt6360_pmic_regmap[] = {
	RT_REG(MT6360_PMIC_RST_PMIC_PAS_CODE1),
	RT_REG(MT6360_PMIC_RST_PMIC_PAS_CODE2),
	RT_REG(MT6360_PMIC_RST_PMIC),
	RT_REG(MT6360_PMIC_RESV1),
	RT_REG(MT6360_PMIC_SYSUV_CTRL1),
	RT_REG(MT6360_PMIC_SYSUV_CTRL2),
	RT_REG(MT6360_PMIC_HW_TRAPPING),
	RT_REG(MT6360_PMIC_BUCK1_SEQOFFDLY),
	RT_REG(MT6360_PMIC_BUCK2_SEQOFFDLY),
	RT_REG(MT6360_PMIC_LDO7_SEQOFFDLY),
	RT_REG(MT6360_PMIC_LDO6_SEQOFFDLY),
	RT_REG(MT6360_PMIC_RESV2),
	RT_REG(MT6360_PMIC_BUCK1_VOSEL),
	RT_REG(MT6360_PMIC_BUCK1_LP_VOSEL),
	RT_REG(MT6360_PMIC_BUCK1_OC),
	RT_REG(MT6360_PMIC_BUCK1_SFCHG_R),
	RT_REG(MT6360_PMIC_BUCK1_SFCHG_F),
	RT_REG(MT6360_PMIC_BUCK1_DVS),
	RT_REG(MT6360_PMIC_BUCK1_EN_CTRL1),
	RT_REG(MT6360_PMIC_BUCK1_EN_CTRL2),
	RT_REG(MT6360_PMIC_BUCK1_CTRL1),
	RT_REG(MT6360_PMIC_BUCK1_CTRL2),
	RT_REG(MT6360_PMIC_BUCK1_Hidden1),
	RT_REG(MT6360_PMIC_BUCK1_Hidden2),
	RT_REG(MT6360_PMIC_BUCK1_Hidden3),
	RT_REG(MT6360_PMIC_BUCK1_Hidden4),
	RT_REG(MT6360_PMIC_BUCK1_Hidden5),
	RT_REG(MT6360_PMIC_BUCK1_Hidden6),
	RT_REG(MT6360_PMIC_BUCK2_VOSEL),
	RT_REG(MT6360_PMIC_BUCK2_LP_VOSEL),
	RT_REG(MT6360_PMIC_BUCK2_OC),
	RT_REG(MT6360_PMIC_BUCK2_SFCHG_R),
	RT_REG(MT6360_PMIC_BUCK2_SFCHG_F),
	RT_REG(MT6360_PMIC_BUCK2_DVS),
	RT_REG(MT6360_PMIC_BUCK2_EN_CTRL1),
	RT_REG(MT6360_PMIC_BUCK2_EN_CTRL2),
	RT_REG(MT6360_PMIC_BUCK2_CTRL1),
	RT_REG(MT6360_PMIC_BUCK2_CTRL2),
	RT_REG(MT6360_PMIC_BUCK2_Hidden1),
	RT_REG(MT6360_PMIC_BUCK2_Hidden2),
	RT_REG(MT6360_PMIC_BUCK2_Hidden3),
	RT_REG(MT6360_PMIC_BUCK2_Hidden4),
	RT_REG(MT6360_PMIC_BUCK2_Hidden5),
	RT_REG(MT6360_PMIC_BUCK2_Hidden6),
	RT_REG(MT6360_PMIC_LDO7_EN_CTRL1),
	RT_REG(MT6360_PMIC_LDO7_EN_CTRL2),
	RT_REG(MT6360_PMIC_LDO7_CTRL0),
	RT_REG(MT6360_PMIC_LDO7_CTRL1),
	RT_REG(MT6360_PMIC_LDO7_CTRL2),
	RT_REG(MT6360_PMIC_LDO7_CTRL3),
	RT_REG(MT6360_PMIC_LDO6_EN_CTRL1),
	RT_REG(MT6360_PMIC_LDO6_EN_CTRL2),
	RT_REG(MT6360_PMIC_LDO6_CTRL0),
	RT_REG(MT6360_PMIC_LDO6_CTRL1),
	RT_REG(MT6360_PMIC_LDO6_CTRL2),
	RT_REG(MT6360_PMIC_LDO6_CTRL3),
	RT_REG(MT6360_PMIC_RESV3),
};

static struct rt_regmap_properties mt6360_pmic_regmap_props = {
	.register_num = ARRAY_SIZE(mt6360_pmic_regmap),
	.rm = mt6360_pmic_regmap,
	.rt_regmap_mode = RT_MULTI_BYTE | RT_DBG_SPECIAL,
	.aliases = "mt6360_pmic",
};

int mt6360_pmic_regmap_register(struct mt6360_pmic_info *mpi,
				struct rt_regmap_fops *fops)
{
	mt6360_pmic_regmap_props.name = devm_kasprintf(mpi->dev, GFP_KERNEL,
						       "mt6360_pmic.%s",
						       dev_name(mpi->dev));
	mpi->regmap = rt_regmap_device_register(&mt6360_pmic_regmap_props, fops,
						mpi->dev, mpi->i2c, mpi);
	return mpi->regmap ? 0 : -EINVAL;
}
EXPORT_SYMBOL_GPL(mt6360_pmic_regmap_register);

void mt6360_pmic_regmap_unregister(struct mt6360_pmic_info *mpi)
{
	rt_regmap_device_unregister(mpi->regmap);
}
EXPORT_SYMBOL_GPL(mt6360_pmic_regmap_unregister);
#else
int mt6360_pmic_regmap_register(struct mt6360_pmic_info *mpi,
				struct rt_regmap_fops *fops)
{
	return 0;
}
EXPORT_SYMBOL_GPL(mt6360_pmic_regmap_register);

void mt6360_pmic_regmap_unregister(struct mt6360_pmic_info *mpi)
{
}
EXPORT_SYMBOL_GPL(mt6360_pmic_regmap_unregister);
#endif /* CONFIG_RT_REGMAP */
