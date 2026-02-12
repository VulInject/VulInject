static struct sparx5_mact_entry *find_mact_entry(struct sparx5 *sparx5,
const unsigned char *mac,
u16 vid, u16 port_index)
{
struct sparx5_mact_entry *mact_entry;
struct sparx5_mact_entry *res = NULL;

mutex_lock(&sparx5->mact_lock);
list_for_each_entry(mact_entry, &sparx5->mact_entries, list) {
if (mact_entry->vid == vid &&
ether_addr_equal(mac, mact_entry->mac) &&
mact_entry->port == port_index) {
res = mact_entry;
break;
}
}
mutex_unlock(&sparx5->mact_lock);

return res;
}