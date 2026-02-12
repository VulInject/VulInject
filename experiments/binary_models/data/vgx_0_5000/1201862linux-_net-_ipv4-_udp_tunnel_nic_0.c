static size_t
__udp_tunnel_nic_dump_size(struct net_device *dev, unsigned int table)
{
const struct udp_tunnel_nic_info *info = dev->udp_tunnel_nic_info;
struct udp_tunnel_nic *utn;
unsigned int j;
size_t size;

utn = dev->udp_tunnel_nic;
if (!utn)
return 0;

size = 0;
for (j = 0; j < info->tables[table].n_entries; j++) {
if (!udp_tunnel_nic_entry_is_present(&utn->entries[table][j]))
continue;

size += nla_total_size(0) +		 
nla_total_size(sizeof(__be16)) + 
nla_total_size(sizeof(u32));	 
}

return size;
}