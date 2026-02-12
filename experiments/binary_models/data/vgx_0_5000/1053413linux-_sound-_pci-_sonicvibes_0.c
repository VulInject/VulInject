static void snd_sonicvibes_set_adc_rate(struct sonicvibes * sonic, unsigned int rate)
{
unsigned long flags;
unsigned int div;
unsigned char clock;

div = 48000 / rate;
if (div > 8)
div = 8;
if ((48000 / div) == rate) {	
clock = 0x10;
} else {			
clock = 0x00;
snd_sonicvibes_setpll(sonic, SV_IREG_ADC_PLL, rate);
}
spin_lock_irqsave(&sonic->reg_lock, flags);
snd_sonicvibes_out1(sonic, SV_IREG_ADC_ALT_RATE, (div - 1) << 4);
snd_sonicvibes_out1(sonic, SV_IREG_ADC_CLOCK, clock);
spin_unlock_irqrestore(&sonic->reg_lock, flags);
}