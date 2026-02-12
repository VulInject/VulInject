static int
nvkm_therm_update_trip(struct nvkm_therm *therm)
{
struct nvbios_therm_trip_point *trip = therm->fan->bios.trip,
*cur_trip = NULL,
*last_trip = therm->last_trip;
u8  temp = therm->func->temp_get(therm);
u16 duty, i;


cur_trip = NULL;
for (i = 0; i < therm->fan->bios.nr_fan_trip; i++) {
if (temp >= trip[i].temp)
cur_trip = &trip[i];
}


if (last_trip && temp <= (last_trip->temp) &&
temp > (last_trip->temp - last_trip->hysteresis))
cur_trip = last_trip;

if (cur_trip) {
duty = cur_trip->fan_duty;
therm->last_trip = cur_trip;
} else {
duty = 0;
therm->last_trip = NULL;
}

return duty;
}