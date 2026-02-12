static int swsmi_rfkill_set(void *priv, bool blocked)
{
struct samsung_rfkill *srfkill = priv;
struct samsung_laptop *samsung = srfkill->samsung;
const struct sabi_commands *commands = &samsung->config->commands;
struct sabi_data data;
int ret, i;

ret = swsmi_wireless_status(samsung, &data);
if (ret)
return ret;


for (i = 0; i < 4; i++)
if (data.data[i] == 0x02)
data.data[1] = 0;

if (srfkill->type == RFKILL_TYPE_WLAN)
data.data[WL_STATUS_WLAN] = !blocked;
else if (srfkill->type == RFKILL_TYPE_BLUETOOTH)
data.data[WL_STATUS_BT] = !blocked;

return sabi_command(samsung, commands->set_wireless_status,
&data, &data);
}