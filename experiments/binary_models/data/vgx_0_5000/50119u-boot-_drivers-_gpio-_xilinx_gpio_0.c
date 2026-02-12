static int xilinx_gpio_get_value(struct udevice *dev, unsigned offset)
{
struct xilinx_gpio_plat *plat = dev_get_plat(dev);
struct xilinx_gpio_privdata *priv = dev_get_priv(dev);
int val, ret;
u32 bank, pin;

ret = xilinx_gpio_get_bank_pin(offset, &bank, &pin, dev);
if (ret)
return ret;

debug("%s: regs: %lx, gpio: %x, bank %x, pin %x\n", __func__,
(ulong)plat->regs, offset, bank, pin);

if (plat->bank_output[bank]) {
debug("%s: Read saved output value\n", __func__);
val = priv->output_val[bank];
} else {
debug("%s: Read input value from reg\n", __func__);
val = readl(&plat->regs->gpiodata + bank * 2);
}

val = !!(val & (1 << pin));

return val;
};