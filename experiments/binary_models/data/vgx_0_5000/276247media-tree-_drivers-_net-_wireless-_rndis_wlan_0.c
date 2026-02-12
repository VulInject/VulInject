static int rndis_reset(struct usbnet *usbdev)
{
struct rndis_wlan_private *priv = get_rndis_wlan_priv(usbdev);
struct rndis_reset *reset;
int ret;

mutex_lock(&priv->command_lock);

reset = (void *)priv->command_buffer;
memset(reset, 0, sizeof(*reset));
reset->msg_type = cpu_to_le32(RNDIS_MSG_RESET);
reset->msg_len = cpu_to_le32(sizeof(*reset));
priv->current_command_oid = 0;
ret = rndis_command(usbdev, (void *)reset, CONTROL_BUFFER_SIZE);

mutex_unlock(&priv->command_lock);

if (ret < 0)
return ret;
return 0;
}