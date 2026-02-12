static int adc_tm5_init(struct adc_tm5_chip *chip)
{
u8 buf[4], channels_available;
int ret;
unsigned int i;

ret = adc_tm5_read(chip, ADC_TM5_NUM_BTM,
&channels_available, sizeof(channels_available));
if (ret) {
dev_err(chip->dev, "read failed for BTM channels\n");
return ret;
}

for (i = 0; i < chip->nchannels; i++) {
if (chip->channels[i].channel >= channels_available) {
dev_err(chip->dev, "Invalid channel %d\n", chip->channels[i].channel);
return -EINVAL;
}
}

buf[0] = chip->decimation;
buf[1] = chip->avg_samples | ADC_TM5_FAST_AVG_EN;
buf[2] = ADC_TM5_TIMER1;
buf[3] = FIELD_PREP(ADC_TM5_MEAS_INTERVAL_CTL2_MASK, ADC_TM5_TIMER2) |
FIELD_PREP(ADC_TM5_MEAS_INTERVAL_CTL3_MASK, ADC_TM5_TIMER3);

ret = adc_tm5_write(chip, ADC_TM5_ADC_DIG_PARAM, buf, sizeof(buf));
if (ret) {
dev_err(chip->dev, "block write failed: %d\n", ret);
return ret;
}

return ret;
}