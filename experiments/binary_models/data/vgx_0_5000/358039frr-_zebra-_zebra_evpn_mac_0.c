uint32_t num_valid_macs(struct zebra_evpn *zevpn)
{
unsigned int i;
uint32_t num_macs = 0;
struct hash *hash;
struct hash_bucket *hb;
struct zebra_mac *mac;

hash = zevpn->mac_table;
if (!hash)
return num_macs;
for (i = 0; i < hash->size; i++) {
for (hb = hash->index[i]; hb; hb = hb->next) {
mac = (struct zebra_mac *)hb->data;
if (CHECK_FLAG(mac->flags, ZEBRA_MAC_REMOTE)
|| CHECK_FLAG(mac->flags, ZEBRA_MAC_LOCAL)
|| !CHECK_FLAG(mac->flags, ZEBRA_MAC_AUTO))
num_macs++;
}
}

return num_macs;
}