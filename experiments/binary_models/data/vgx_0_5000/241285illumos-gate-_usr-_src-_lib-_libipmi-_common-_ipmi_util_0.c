void
ipmi_sensor_reading_name(uint8_t sensor_type, uint8_t reading_type,
char *buf, size_t len)
{
uint8_t val;
ipmi_name_trans_t *ntp;

if (reading_type == IPMI_RT_SPECIFIC) {
val = sensor_type;
ntp = &ipmi_sensor_type_table[0];
} else {
val = reading_type;
ntp = &ipmi_reading_type_table[0];
}

for (; ntp->int_name != NULL; ntp++) {
if (ntp->int_value == val) {
(void) strlcpy(buf, ntp->int_name, len);
return;
}
}

if (reading_type == IPMI_RT_SPECIFIC)
(void) snprintf(buf, len, "%02x/%02x", reading_type,
sensor_type);
else
(void) snprintf(buf, len, "%02x", reading_type);
}