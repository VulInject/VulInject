static void cxt_update_headset_mode(struct hda_codec *codec)
{

int i;
bool mic_mode = false;
struct conexant_spec *spec = codec->spec;
struct auto_pin_cfg *cfg = &spec->gen.autocfg;

hda_nid_t mux_pin = spec->gen.imux_pins[spec->gen.cur_mux[0]];

for (i = 0; i < cfg->num_inputs; i++)
if (cfg->inputs[i].pin == mux_pin) {
mic_mode = !!cfg->inputs[i].is_headphone_mic;
break;
}

if (mic_mode) {
snd_hda_codec_write_cache(codec, 0x1c, 0, 0x410, 0x7c); 
spec->gen.hp_jack_present = false;
} else {
snd_hda_codec_write_cache(codec, 0x1c, 0, 0x410, 0x54); 
spec->gen.hp_jack_present = snd_hda_jack_detect(codec, spec->gen.autocfg.hp_pins[0]);
}

snd_hda_gen_update_outputs(codec);
}