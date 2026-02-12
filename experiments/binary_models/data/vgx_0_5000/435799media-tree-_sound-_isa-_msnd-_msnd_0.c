static int snd_msnd_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
{
int	i;
struct snd_msnd *chip = snd_pcm_substream_chip(substream);
void	*pDAQ =	chip->mappedbase + DAPQ_DATA_BUFF;

chip->play_sample_size = snd_pcm_format_width(params_format(params));
chip->play_channels = params_channels(params);
chip->play_sample_rate = params_rate(params);

for (i = 0; i < 3; ++i, pDAQ += DAQDS__size) {
writew(chip->play_sample_size, pDAQ + DAQDS_wSampleSize);
writew(chip->play_channels, pDAQ + DAQDS_wChannels);
writew(chip->play_sample_rate, pDAQ + DAQDS_wSampleRate);
}


return 0;
}