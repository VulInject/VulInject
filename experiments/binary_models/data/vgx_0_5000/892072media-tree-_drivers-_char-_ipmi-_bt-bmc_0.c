static irqreturn_t bt_bmc_irq(int irq, void *arg)
{
struct bt_bmc *bt_bmc = arg;
u32 reg;
int rc;

rc = regmap_read(bt_bmc->map, bt_bmc->offset + BT_CR2, &reg);
if (rc)
return IRQ_NONE;

reg &= BT_CR2_IRQ_H2B | BT_CR2_IRQ_HBUSY;
if (!reg)
return IRQ_NONE;


regmap_write(bt_bmc->map, bt_bmc->offset + BT_CR2, reg);

wake_up(&bt_bmc->queue);
return IRQ_HANDLED;
}