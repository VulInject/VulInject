int t3_mac_set_rx_mode(struct cmac *mac, struct net_device *dev)
{
u32 val, hash_lo, hash_hi;
struct adapter *adap = mac->adapter;
unsigned int oft = mac->offset;

val = t3_read_reg(adap, A_XGM_RX_CFG + oft) & ~F_COPYALLFRAMES;
if (dev->flags & IFF_PROMISC)
val |= F_COPYALLFRAMES;
t3_write_reg(adap, A_XGM_RX_CFG + oft, val);

if (dev->flags & IFF_ALLMULTI)
hash_lo = hash_hi = 0xffffffff;
else {
struct netdev_hw_addr *ha;
int exact_addr_idx = mac->nucast;

hash_lo = hash_hi = 0;
netdev_for_each_mc_addr(ha, dev)
if (exact_addr_idx < EXACT_ADDR_FILTERS)
set_addr_filter(mac, exact_addr_idx++,
ha->addr);
else {
int hash = hash_hw_addr(ha->addr);

if (hash < 32)
hash_lo |= (1 << hash);
else
hash_hi |= (1 << (hash - 32));
}
}

t3_write_reg(adap, A_XGM_RX_HASH_LOW + oft, hash_lo);
t3_write_reg(adap, A_XGM_RX_HASH_HIGH + oft, hash_hi);
return 0;
}