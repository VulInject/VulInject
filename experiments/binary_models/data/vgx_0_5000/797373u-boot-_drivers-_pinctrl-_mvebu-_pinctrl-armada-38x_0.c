static int armada_38x_pinctrl_get_pin_muxing(struct udevice *dev, unsigned int selector,
char *buf, int size)
{
struct armada_38x_pinctrl *info = dev_get_priv(dev);
unsigned int off = (selector / MVEBU_MPPS_PER_REG) * MVEBU_MPP_BITS;
unsigned int shift = (selector % MVEBU_MPPS_PER_REG) * MVEBU_MPP_BITS;
const char *func_name = NULL;
const char *sub_name = NULL;
unsigned long config;
int i;

config = (readl(info->base + off) >> shift) & MVEBU_MPP_MASK;

for (i = 0; i < armada_38x_mpp_modes[selector].nsettings; i++) {
if (armada_38x_mpp_modes[selector].settings[i].val == config)
break;
}

if (i < armada_38x_mpp_modes[selector].nsettings) {
func_name = armada_38x_mpp_modes[selector].settings[i].name;
sub_name = armada_38x_mpp_modes[selector].settings[i].subname;
}

snprintf(buf, size, "%s%s%s",
func_name ? func_name : "unknown",
sub_name ? "_" : "",
sub_name ? sub_name : "");
return 0;
}