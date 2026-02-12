static int write_reg(struct hfcsusb *hw, __u8 reg, __u8 val)
{
struct ctrl_buf *buf;

if (debug & DBG_HFC_CALL_TRACE)
printk(KERN_DEBUG "%s: %s reg(0x%02x) val(0x%02x)\n",
hw->name, __func__, reg, val);

spin_lock(&hw->ctrl_lock);
if (hw->ctrl_cnt >= HFC_CTRL_BUFSIZE) {
spin_unlock(&hw->ctrl_lock);
return 1;
}
buf = &hw->ctrl_buff[hw->ctrl_in_idx];
buf->hfcs_reg = reg;
buf->reg_val = val;
if (++hw->ctrl_in_idx >= HFC_CTRL_BUFSIZE)
hw->ctrl_in_idx = 0;
if (++hw->ctrl_cnt == 1)
ctrl_start_transfer(hw);
spin_unlock(&hw->ctrl_lock);

return 0;
}