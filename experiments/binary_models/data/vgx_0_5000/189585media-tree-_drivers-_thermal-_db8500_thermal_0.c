static irqreturn_t prcmu_high_irq_handler(int irq, void *irq_data)
{
struct db8500_thermal_zone *pzone = irq_data;
struct db8500_thsens_platform_data *ptrips = pzone->trip_tab;
unsigned int idx = pzone->cur_index;
unsigned long next_low, next_high;

if (idx < ptrips->num_trips - 1) {
next_high = ptrips->trip_points[idx+1].temp;
next_low = ptrips->trip_points[idx].temp;
idx += 1;

db8500_thermal_update_config(pzone, idx, THERMAL_TREND_RAISING,
next_low, next_high);

dev_dbg(&pzone->therm_dev->device,
"PRCMU set max %ld, min %ld\n", next_high, next_low);
} else if (idx == ptrips->num_trips - 1)
pzone->cur_temp_pseudo = ptrips->trip_points[idx].temp + 1;

schedule_work(&pzone->therm_work);

return IRQ_HANDLED;
}