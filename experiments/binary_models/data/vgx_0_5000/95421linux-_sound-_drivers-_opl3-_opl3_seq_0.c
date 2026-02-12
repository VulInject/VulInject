static int snd_opl3_synth_use(void *private_data, struct snd_seq_port_subscribe * info)
{
struct snd_opl3 *opl3 = private_data;
int err;

err = snd_opl3_synth_setup(opl3);
if (err < 0)
return err;

if (use_internal_drums) {

opl3->voices[6].state = opl3->voices[7].state = 
opl3->voices[8].state = SNDRV_OPL3_ST_NOT_AVAIL;
snd_opl3_load_drums(opl3);
opl3->drum_reg = OPL3_PERCUSSION_ENABLE;
opl3->command(opl3, OPL3_LEFT | OPL3_REG_PERCUSSION, opl3->drum_reg);
} else {
opl3->drum_reg = 0x00;
}

if (info->sender.client != SNDRV_SEQ_CLIENT_SYSTEM) {
err = snd_opl3_synth_use_inc(opl3);
if (err < 0)
return err;
}
opl3->synth_mode = SNDRV_OPL3_MODE_SEQ;
return 0;
}