static int olpc_bat_get_status(union power_supply_propval *val, uint8_t ec_byte)
{
if (olpc_platform_info.ecver > 0x44) {
if (ec_byte & (BAT_STAT_CHARGING | BAT_STAT_TRICKLE))
val->intval = POWER_SUPPLY_STATUS_CHARGING;
else if (ec_byte & BAT_STAT_DISCHARGING)
val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
else if (ec_byte & BAT_STAT_FULL)
val->intval = POWER_SUPPLY_STATUS_FULL;
else 
val->intval = POWER_SUPPLY_STATUS_NOT_CHARGING;
} else {

if (!(ec_byte & BAT_STAT_AC)) 
val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
else if (ec_byte & BAT_STAT_FULL)
val->intval = POWER_SUPPLY_STATUS_FULL;
else 
val->intval = POWER_SUPPLY_STATUS_CHARGING;
}

return 0;
}