static int
snd_azf3328_info_mixer_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
{
static const char * const texts1[] = {
"Mic1", "Mic2"
};
static const char * const texts2[] = {
"Mix", "Mic"
};
static const char * const texts3[] = {
"Mic", "CD", "Video", "Aux",
"Line", "Mix", "Mix Mono", "Phone"
};
static const char * const texts4[] = {
"pre 3D", "post 3D"
};
struct azf3328_mixer_reg reg;
const char * const *p = NULL;

snd_azf3328_mixer_reg_decode(&reg, kcontrol->private_value);
if (reg.reg == IDX_MIXER_ADVCTL2) {
switch(reg.lchan_shift) {
case 8: 
p = texts1;
break;
case 9: 
p = texts2;
break;
case 15: 
p = texts4;
break;
}
} else if (reg.reg == IDX_MIXER_REC_SELECT)
p = texts3;

return snd_ctl_enum_info(uinfo,
(reg.reg == IDX_MIXER_REC_SELECT) ? 2 : 1,
reg.enum_c, p);
}