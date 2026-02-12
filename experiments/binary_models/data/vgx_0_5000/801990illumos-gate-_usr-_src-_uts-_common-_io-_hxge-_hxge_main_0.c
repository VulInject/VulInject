static int
hxge_mmac_set_addr(p_hxge_t hxgep, int slot, const uint8_t *addr)
{
struct ether_addr	eaddr;
hxge_status_t		status = HXGE_OK;

bcopy(addr, (uint8_t *)&eaddr, ETHERADDRL);


RW_ENTER_WRITER(&hxgep->filter_lock);
status = hxge_pfc_set_mac_address(hxgep, slot, &eaddr);
RW_EXIT(&hxgep->filter_lock);
if (status != HXGE_OK)
return (status);

hxgep->mmac.addrs[slot].set = B_TRUE;
bcopy(addr, hxgep->mmac.addrs[slot].addr, ETHERADDRL);
hxgep->mmac.available--;
if (slot == HXGE_MAC_DEFAULT_ADDR_SLOT)
hxgep->mmac.addrs[slot].primary = B_TRUE;

return (0);
}