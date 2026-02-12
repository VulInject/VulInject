ssize_t proc_set_rx_signal(struct file *file, const char __user *buffer, size_t count, loff_t *pos, void *data)
{
struct net_device *dev = data;
struct adapter *padapter = (struct adapter *)rtw_netdev_priv(dev);
char tmp[32];
u32 is_signal_dbg, signal_strength;

if (count < 1)
return -EFAULT;

if (buffer && !copy_from_user(tmp, buffer, sizeof(tmp))) {

int num = sscanf(tmp, "%u %u", &is_signal_dbg, &signal_strength);

is_signal_dbg = is_signal_dbg == 0?0:1;

if (is_signal_dbg && num != 2)
return count;

signal_strength = signal_strength > 100?100:signal_strength;

padapter->recvpriv.is_signal_dbg = is_signal_dbg;
padapter->recvpriv.signal_strength_dbg =  signal_strength;

if (is_signal_dbg)
DBG_871X("set %s %u\n", "DBG_SIGNAL_STRENGTH", signal_strength);
else
DBG_871X("set %s\n", "HW_SIGNAL_STRENGTH");

}

return count;

}