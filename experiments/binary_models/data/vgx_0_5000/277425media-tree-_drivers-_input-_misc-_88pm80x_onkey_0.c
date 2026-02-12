static irqreturn_t pm80x_onkey_handler(int irq, void *data)
{
struct pm80x_onkey_info *info = data;
int ret = 0;
unsigned int val;

ret = regmap_read(info->map, PM800_STATUS_1, &val);
if (ret < 0) {
dev_err(info->idev->dev.parent, "failed to read status: %d\n", ret);
return IRQ_NONE;
}
val &= PM800_ONKEY_STS1;

input_report_key(info->idev, KEY_POWER, val);
input_sync(info->idev);

return IRQ_HANDLED;
}