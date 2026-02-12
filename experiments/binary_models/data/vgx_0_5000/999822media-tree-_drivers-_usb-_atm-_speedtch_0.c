static void speedtch_resubmit_int(unsigned long data)
{
struct speedtch_instance_data *instance = (void *)data;
struct urb *int_urb = instance->int_urb;
int ret;

atm_dbg(instance->usbatm, "%s entered\n", __func__);

if (int_urb) {
ret = usb_submit_urb(int_urb, GFP_ATOMIC);
if (!ret)
schedule_work(&instance->status_check_work);
else {
atm_dbg(instance->usbatm, "%s: usb_submit_urb failed with result %d\n", __func__, ret);
mod_timer(&instance->resubmit_timer, jiffies + msecs_to_jiffies(RESUBMIT_DELAY));
}
}
}