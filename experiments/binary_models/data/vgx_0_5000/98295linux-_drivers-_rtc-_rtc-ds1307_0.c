};
MODULE_DEVICE_TABLE(of, ds1307_of_match);


static irqreturn_t ds1307_irq(int irq, void *dev_id)
{
struct ds1307		*ds1307 = dev_id;
struct mutex		*lock = &ds1307->rtc->ops_lock;
int			stat, ret;

mutex_lock(lock);
ret = regmap_read(ds1307->regmap, DS1337_REG_STATUS, &stat);
if (ret)
goto out;

if (stat & DS1337_BIT_A1I) {
stat &= ~DS1337_BIT_A1I;
regmap_write(ds1307->regmap, DS1337_REG_STATUS, stat);

ret = regmap_update_bits(ds1307->regmap, DS1337_REG_CONTROL,
DS1337_BIT_A1IE, 0);
if (ret)
goto out;

rtc_update_irq(ds1307->rtc, 1, RTC_AF | RTC_IRQF);
}

out:
mutex_unlock(lock);

return IRQ_HANDLED;
}