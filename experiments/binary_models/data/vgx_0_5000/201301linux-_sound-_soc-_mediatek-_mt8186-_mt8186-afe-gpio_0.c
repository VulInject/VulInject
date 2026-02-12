int mt8186_afe_gpio_init(struct device *dev)
{
int i, j, ret;

aud_pinctrl = devm_pinctrl_get(dev);
if (IS_ERR(aud_pinctrl)) {
ret = PTR_ERR(aud_pinctrl);
dev_err(dev, "%s(), ret %d, cannot get aud_pinctrl!\n",
__func__, ret);
return ret;
}

for (i = 0; i < ARRAY_SIZE(aud_gpios); i++) {
aud_gpios[i].gpioctrl = pinctrl_lookup_state(aud_pinctrl,
aud_gpios[i].name);
if (IS_ERR(aud_gpios[i].gpioctrl)) {
ret = PTR_ERR(aud_gpios[i].gpioctrl);
dev_info(dev, "%s(), pinctrl_lookup_state %s fail, ret %d\n",
__func__, aud_gpios[i].name, ret);
} else {
aud_gpios[i].gpio_prepare = true;
}
}


for (i = MT8186_DAI_ADDA; i <= MT8186_DAI_TDM_IN; i++) {
for (j = 0; j <= 1; j++)
mt8186_afe_gpio_request(dev, false, i, j);
}

return 0;
}