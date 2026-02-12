static irqreturn_t mrfld_pwrbtn_interrupt(int irq, void *dev_id)
{
struct input_dev *input = dev_id;
struct device *dev = input->dev.parent;
struct regmap *regmap = dev_get_drvdata(dev);
unsigned int state;
int ret;

ret = regmap_read(regmap, BCOVE_PBSTATUS, &state);
if (ret)
return IRQ_NONE;

dev_dbg(dev, "PBSTATUS=0x%x\n", state);
input_report_key(input, KEY_POWER, !(state & BCOVE_PBSTATUS_PBLVL));
input_sync(input);

regmap_update_bits(regmap, BCOVE_MIRQLVL1, BCOVE_LVL1_PWRBTN, 0);
return IRQ_HANDLED;
}