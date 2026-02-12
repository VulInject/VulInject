static int __hw_addr_create_ex(struct netdev_hw_addr_list *list,
const unsigned char *addr, int addr_len,
unsigned char addr_type, bool global,
bool sync)
{
struct netdev_hw_addr *ha;
int alloc_size;

alloc_size = sizeof(*ha);
if (alloc_size < L1_CACHE_BYTES)
alloc_size = L1_CACHE_BYTES;
ha = kmalloc(alloc_size, GFP_ATOMIC);
if (!ha)
return -ENOMEM;
memcpy(ha->addr, addr, addr_len);
ha->type = addr_type;
ha->refcount = 1;
ha->global_use = global;
ha->synced = sync ? 1 : 0;
ha->sync_cnt = 0;
list_add_tail_rcu(&ha->list, &list->list);
list->count++;

return 0;
}