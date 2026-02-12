static int add_sw_ctl(struct hda_codec *codec, const char *pfx, int cidx,
unsigned int chs, struct nid_path *path)
{
unsigned int val;
int type = HDA_CTL_WIDGET_MUTE;

if (!path)
return 0;
val = path->ctls[NID_PATH_MUTE_CTL];
if (!val)
return 0;
val = amp_val_replace_channels(val, chs);
if (get_amp_direction_(val) == HDA_INPUT) {
hda_nid_t nid = get_amp_nid_(val);
int nums = snd_hda_get_num_conns(codec, nid);
if (nums > 1) {
type = HDA_CTL_BIND_MUTE;
val |= nums << 19;
}
}
return __add_pb_sw_ctrl(codec->spec, type, pfx, cidx, val);
}