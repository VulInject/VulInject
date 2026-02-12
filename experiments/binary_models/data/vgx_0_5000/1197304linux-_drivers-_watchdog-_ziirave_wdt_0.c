static int ziirave_firm_write_pkt(struct watchdog_device *wdd,
u32 addr, const u8 *data, u8 len)
{
const u8 max_write_len = ZIIRAVE_FIRM_PAGE_SIZE -
(addr - ALIGN_DOWN(addr, ZIIRAVE_FIRM_PAGE_SIZE));
int ret;

if (len > max_write_len) {

ret = __ziirave_firm_write_pkt(wdd, addr, data, max_write_len);
if (ret)
return ret;

addr += max_write_len;
data += max_write_len;
len  -= max_write_len;
}

return __ziirave_firm_write_pkt(wdd, addr, data, len);
}