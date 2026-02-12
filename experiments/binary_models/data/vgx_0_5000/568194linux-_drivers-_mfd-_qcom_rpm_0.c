}
EXPORT_SYMBOL(qcom_rpm_write);

static irqreturn_t qcom_rpm_ack_interrupt(int irq, void *dev)
{
struct qcom_rpm *rpm = dev;
u32 ack;
int i;

ack = readl_relaxed(RPM_CTRL_REG(rpm, rpm->data->ack_ctx_off));
for (i = 0; i < rpm->data->ack_sel_size; i++)
writel_relaxed(0,
RPM_CTRL_REG(rpm, rpm->data->ack_sel_off + i));
writel(0, RPM_CTRL_REG(rpm, rpm->data->ack_ctx_off));

if (ack & RPM_NOTIFICATION) {
dev_warn(rpm->dev, "ignoring notification!\n");
} else {
rpm->ack_status = ack;
complete(&rpm->ack);
}

return IRQ_HANDLED;
}