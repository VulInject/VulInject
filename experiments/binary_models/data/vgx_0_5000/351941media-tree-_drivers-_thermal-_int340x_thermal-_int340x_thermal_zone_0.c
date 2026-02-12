static int int340x_thermal_get_trip_type(struct thermal_zone_device *zone,
int trip,
enum thermal_trip_type *type)
{
struct int34x_thermal_zone *d = zone->devdata;
int i;

if (d->override_ops && d->override_ops->get_trip_type)
return d->override_ops->get_trip_type(zone, trip, type);

if (trip < d->aux_trip_nr)
*type = THERMAL_TRIP_PASSIVE;
else if (trip == d->crt_trip_id)
*type = THERMAL_TRIP_CRITICAL;
else if (trip == d->hot_trip_id)
*type = THERMAL_TRIP_HOT;
else if (trip == d->psv_trip_id)
*type = THERMAL_TRIP_PASSIVE;
else {
for (i = 0; i < INT340X_THERMAL_MAX_ACT_TRIP_COUNT; i++) {
if (d->act_trips[i].valid &&
d->act_trips[i].id == trip) {
*type = THERMAL_TRIP_ACTIVE;
break;
}
}
if (i == INT340X_THERMAL_MAX_ACT_TRIP_COUNT)
return -EINVAL;
}

return 0;
}