static int ns2_pin_set_enable(struct pinctrl_dev *pctrldev, unsigned int pin,
u16 enable)
{
struct ns2_pinctrl *pinctrl = pinctrl_dev_get_drvdata(pctrldev);
struct ns2_pin *pin_data = pctrldev->desc->pins[pin].drv_data;
unsigned long flags;
u32 val;
void __iomem *base_address;

base_address = pinctrl->pinconf_base;
spin_lock_irqsave(&pinctrl->lock, flags);
val = readl(base_address + pin_data->pin_conf.offset);
val &= ~(NS2_PIN_SRC_MASK << pin_data->pin_conf.input_en);

if (!enable)
val |= NS2_PIN_INPUT_EN_MASK << pin_data->pin_conf.input_en;

writel(val, (base_address + pin_data->pin_conf.offset));
spin_unlock_irqrestore(&pinctrl->lock, flags);

dev_dbg(pctrldev->dev, "pin:%u set enable:%d\n", pin, enable);
return 0;
}