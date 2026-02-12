static int tps23861_port_status_show(struct seq_file *s, void *data)
{
struct tps23861_data *priv = s->private;
unsigned int i, mode, poe_plus, status;

regmap_read(priv->regmap, OPERATING_MODE, &mode);
regmap_read(priv->regmap, POE_PLUS, &poe_plus);

for (i = 0; i < TPS23861_NUM_PORTS; i++) {
regmap_read(priv->regmap, PORT_1_STATUS + i, &status);

seq_printf(s, "Port: \t\t%d\n", i + 1);
seq_printf(s, "Operating mode: %s\n", port_operating_mode_string(mode, i));
seq_printf(s, "Detected: \t%s\n", port_detect_status_string(status));
seq_printf(s, "Class: \t\t%s\n", port_class_status_string(status));
seq_printf(s, "PoE Plus: \t%s\n", port_poe_plus_status_string(poe_plus, i));
seq_printf(s, "Resistance: \t%d\n", tps23861_port_resistance(priv, i));
seq_putc(s, '\n');
}

return 0;
}