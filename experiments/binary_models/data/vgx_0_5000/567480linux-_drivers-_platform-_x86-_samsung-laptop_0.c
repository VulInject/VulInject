static DEVICE_ATTR(performance_level, 0644,
get_performance_level, set_performance_level);

static int read_battery_life_extender(struct samsung_laptop *samsung)
{
const struct sabi_commands *commands = &samsung->config->commands;
struct sabi_data data;
int retval;

if (commands->get_battery_life_extender == 0xFFFF)
return -ENODEV;

memset(&data, 0, sizeof(data));
data.data[0] = 0x80;
retval = sabi_command(samsung, commands->get_battery_life_extender,
&data, &data);

if (retval)
return retval;

if (data.data[0] != 0 && data.data[0] != 1)
return -ENODEV;

return data.data[0];
}