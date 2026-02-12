static int imx8mp_tmu_get_temp(void *data, int *temp)
{
struct tmu_sensor *sensor = data;
struct imx8mm_tmu *tmu = sensor->priv;
unsigned long val;
bool ready;

val = readl_relaxed(tmu->base + TRITSR);
ready = test_bit(probe_status_offset(sensor->hw_id), &val);
if (!ready)
return -EAGAIN;

val = sensor->hw_id ? FIELD_GET(TRITSR_TEMP1_VAL_MASK, val) :
FIELD_GET(TRITSR_TEMP0_VAL_MASK, val);
if (val & SIGN_BIT) 
val = (~(val & TEMP_VAL_MASK) + 1);

*temp = val * 1000;
if (*temp < VER2_TEMP_LOW_LIMIT || *temp > VER2_TEMP_HIGH_LIMIT)
return -EAGAIN;

return 0;
}