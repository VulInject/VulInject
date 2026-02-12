static void madera_pin_dbg_show_fn(struct madera_pin_private *priv,
struct seq_file *s,
unsigned int pin, unsigned int fn)
{
const struct madera_pin_chip *chip = priv->chip;
int i, g_pin;

if (fn != 0) {
for (i = 0; i < ARRAY_SIZE(madera_mux_funcs); ++i) {
if (madera_mux_funcs[i].func == fn) {
seq_printf(s, " FN=%s",
madera_mux_funcs[i].name);
return;
}
}
return;	
}


for (i = 0; i < chip->n_pin_groups; ++i) {
for (g_pin = 0; g_pin < chip->pin_groups[i].n_pins; ++g_pin) {
if (chip->pin_groups[i].pins[g_pin] == pin) {
seq_printf(s, " FN=%s",
chip->pin_groups[i].name);
return;
}
}
}
}