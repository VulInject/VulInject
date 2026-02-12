static int __ti_thermal_get_trend(struct thermal_zone_device *tz, int trip, enum thermal_trend *trend)
{
struct ti_thermal_data *data = tz->devdata;
struct ti_bandgap *bgp;
int id, tr, ret = 0;

bgp = data->bgp;
id = data->sensor_id;

ret = ti_bandgap_get_trend(bgp, id, &tr);
if (ret)
return ret;

if (tr > 0)
*trend = THERMAL_TREND_RAISING;
else if (tr < 0)
*trend = THERMAL_TREND_DROPPING;
else
*trend = THERMAL_TREND_STABLE;

return 0;
}

static const struct thermal_zone_device_ops ti_of_thermal_ops = {
.get_temp = __ti_thermal_get_temp,
.get_trend = __ti_thermal_get_trend,
};