static int wdrtas_get_interval(int fallback_value)
{
long result;
char value[WDRTAS_SP_SPI_LEN];

spin_lock(&rtas_data_buf_lock);
memset(rtas_data_buf, 0, WDRTAS_SP_SPI_LEN);
result = rtas_call(wdrtas_token_get_sp, 3, 1, NULL,
WDRTAS_SP_SPI, __pa(rtas_data_buf),
WDRTAS_SP_SPI_LEN);

memcpy(value, rtas_data_buf, WDRTAS_SP_SPI_LEN);
spin_unlock(&rtas_data_buf_lock);

if (value[0] != 0 || value[1] != 2 || value[3] != 0 || result < 0) {
pr_warn("could not get sp_spi watchdog timeout (%li). Continuing\n",
result);
return fallback_value;
}


return ((int)value[2]) * 60;
}