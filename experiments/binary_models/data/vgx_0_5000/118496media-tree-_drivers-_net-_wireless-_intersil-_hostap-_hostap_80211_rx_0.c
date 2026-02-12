static struct prism2_frag_entry *
prism2_frag_cache_find(local_info_t *local, unsigned int seq,
unsigned int frag, u8 *src, u8 *dst)
{
struct prism2_frag_entry *entry;
int i;

for (i = 0; i < PRISM2_FRAG_CACHE_LEN; i++) {
entry = &local->frag_cache[i];
if (entry->skb != NULL &&
time_after(jiffies, entry->first_frag_time + 2 * HZ)) {
printk(KERN_DEBUG "%s: expiring fragment cache entry "
"seq=%u last_frag=%u\n",
local->dev->name, entry->seq, entry->last_frag);
dev_kfree_skb(entry->skb);
entry->skb = NULL;
}

if (entry->skb != NULL && entry->seq == seq &&
(entry->last_frag + 1 == frag || frag == -1) &&
memcmp(entry->src_addr, src, ETH_ALEN) == 0 &&
memcmp(entry->dst_addr, dst, ETH_ALEN) == 0)
return entry;
}

return NULL;
}