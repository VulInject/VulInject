}
EXPORT_SYMBOL_GPL(snd_soc_get_enum_double);


int snd_soc_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
{
struct snd_soc_component *component = snd_kcontrol_chip(kcontrol);
struct soc_enum *e = (struct soc_enum *)kcontrol->private_value;
unsigned int *item = ucontrol->value.enumerated.item;
unsigned int val;
unsigned int mask;

if (item[0] >= e->items)
return -EINVAL;
val = snd_soc_enum_item_to_val(e, item[0]) << e->shift_l;
mask = e->mask << e->shift_l;
if (e->shift_l != e->shift_r) {
if (item[1] >= e->items)
return -EINVAL;
val |= snd_soc_enum_item_to_val(e, item[1]) << e->shift_r;
mask |= e->mask << e->shift_r;
}

return snd_soc_component_update_bits(component, e->reg, mask, val);
}