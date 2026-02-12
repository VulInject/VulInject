static void wm97xx_bat_update(struct power_supply *bat_ps)
{
int old_status = bat_status;

mutex_lock(&work_lock);

bat_status = (charge_gpiod) ?
(gpiod_get_value(charge_gpiod) ?
POWER_SUPPLY_STATUS_DISCHARGING :
POWER_SUPPLY_STATUS_CHARGING) :
POWER_SUPPLY_STATUS_UNKNOWN;

if (old_status != bat_status) {
pr_debug("%s: %i -> %i\n", bat_ps->desc->name, old_status,
bat_status);
power_supply_changed(bat_ps);
}

mutex_unlock(&work_lock);
}

static struct power_supply *bat_psy;
static struct power_supply_desc bat_psy_desc = {
.type			= POWER_SUPPLY_TYPE_BATTERY,
.get_property		= wm97xx_bat_get_property,
.external_power_changed = wm97xx_bat_external_power_changed,
.use_for_apm		= 1,
};