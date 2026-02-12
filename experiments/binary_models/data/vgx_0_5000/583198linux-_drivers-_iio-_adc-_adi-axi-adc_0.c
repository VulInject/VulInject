static int adi_axi_adc_setup_channels(struct device *dev,
struct adi_axi_adc_state *st)
{
struct adi_axi_adc_conv *conv = &st->client->conv;
int i, ret;

if (conv->preenable_setup) {
ret = conv->preenable_setup(conv);
if (ret)
return ret;
}

for (i = 0; i < conv->chip_info->num_channels; i++) {
adi_axi_adc_write(st, ADI_AXI_REG_CHAN_CTRL(i),
ADI_AXI_REG_CHAN_CTRL_DEFAULTS);
}

return 0;
}