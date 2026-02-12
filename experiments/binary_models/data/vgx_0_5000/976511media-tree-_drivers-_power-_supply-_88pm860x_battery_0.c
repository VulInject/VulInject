static irqreturn_t pm860x_batt_handler(int irq, void *data)
{
struct pm860x_battery_info *info = data;
int ret;

mutex_lock(&info->lock);
ret = pm860x_reg_read(info->i2c, PM8607_STATUS_2);
if (ret & STATUS2_BAT) {
info->present = 1;
info->temp_type = PM860X_TEMP_TBAT;
} else {
info->present = 0;
info->temp_type = PM860X_TEMP_TINT;
}
mutex_unlock(&info->lock);

clear_ccnt(info, &ccnt_data);
return IRQ_HANDLED;
}