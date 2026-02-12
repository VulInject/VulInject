int get_temp_common(struct tsens_device *tmdev, int id, int *temp)
{
struct tsens_sensor *s = &tmdev->sensor[id];
u32 code;
unsigned int sensor_addr;
int last_temp = 0, ret;

sensor_addr = S0_ST_ADDR + s->hw_id * SN_ADDR_OFFSET;
ret = regmap_read(tmdev->map, sensor_addr, &code);
if (ret)
return ret;
last_temp = code & SN_ST_TEMP_MASK;

*temp = code_to_degc(last_temp, s) * 1000;

return 0;
}