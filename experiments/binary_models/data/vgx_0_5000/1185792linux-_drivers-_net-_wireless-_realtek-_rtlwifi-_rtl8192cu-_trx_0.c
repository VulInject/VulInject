static int configvernoutep(struct ieee80211_hw *hw)
{
u8 ep_cfg;
u8 ep_nums = 0;

struct rtl_priv *rtlpriv = rtl_priv(hw);
struct rtl_usb_priv *usb_priv = rtl_usbpriv(hw);
struct rtl_usb *rtlusb = rtl_usbdev(usb_priv);

rtlusb->out_queue_sel = 0;

ep_cfg =  rtl_read_byte(rtlpriv, (REG_NORMAL_SIE_EP + 1));
if (ep_cfg & USB_NORMAL_SIE_EP_MASK) {
rtlusb->out_queue_sel |= TX_SELE_HQ;
ep_nums++;
}
if ((ep_cfg >> USB_NORMAL_SIE_EP_SHIFT) & USB_NORMAL_SIE_EP_MASK) {
rtlusb->out_queue_sel |= TX_SELE_NQ;
ep_nums++;
}

ep_cfg =  rtl_read_byte(rtlpriv, (REG_NORMAL_SIE_EP + 2));
if (ep_cfg & USB_NORMAL_SIE_EP_MASK) {
rtlusb->out_queue_sel |= TX_SELE_LQ;
ep_nums++;
}
return (rtlusb->out_ep_nums == ep_nums) ? 0 : -EINVAL;
}