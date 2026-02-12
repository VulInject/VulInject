static int wm8974_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
{
struct snd_soc_codec *codec = codec_dai->codec;
struct pll_ pll_div;
u16 reg;

if (freq_in == 0 || freq_out == 0) {

reg = snd_soc_read(codec, WM8974_CLOCK);
snd_soc_write(codec, WM8974_CLOCK, reg & 0x0ff);


reg = snd_soc_read(codec, WM8974_POWER1);
snd_soc_write(codec, WM8974_POWER1, reg & 0x1df);
return 0;
}

pll_factors(&pll_div, freq_out, freq_in);

snd_soc_write(codec, WM8974_PLLN, (pll_div.pre_div << 4) | pll_div.n);
snd_soc_write(codec, WM8974_PLLK1, pll_div.k >> 18);
snd_soc_write(codec, WM8974_PLLK2, (pll_div.k >> 9) & 0x1ff);
snd_soc_write(codec, WM8974_PLLK3, pll_div.k & 0x1ff);
reg = snd_soc_read(codec, WM8974_POWER1);
snd_soc_write(codec, WM8974_POWER1, reg | 0x020);


reg = snd_soc_read(codec, WM8974_CLOCK);
snd_soc_write(codec, WM8974_CLOCK, reg | 0x100);

return 0;
}