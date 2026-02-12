static struct samsung_retention_ctrl *
s5pv210_retention_init(struct samsung_pinctrl_drv_data *drvdata,
const struct samsung_retention_data *data)
{
struct samsung_retention_ctrl *ctrl;
struct device_node *np;
void __iomem *clk_base;

ctrl = devm_kzalloc(drvdata->dev, sizeof(*ctrl), GFP_KERNEL);
if (!ctrl)
return ERR_PTR(-ENOMEM);

np = of_find_compatible_node(NULL, NULL, "samsung,s5pv210-clock");
if (!np) {
pr_err("%s: failed to find clock controller DT node\n",
__func__);
return ERR_PTR(-ENODEV);
}

clk_base = of_iomap(np, 0);
of_node_put(np);
if (!clk_base) {
pr_err("%s: failed to map clock registers\n", __func__);
return ERR_PTR(-EINVAL);
}

ctrl->priv = (void __force *)clk_base;
ctrl->disable = s5pv210_retention_disable;

return ctrl;
}