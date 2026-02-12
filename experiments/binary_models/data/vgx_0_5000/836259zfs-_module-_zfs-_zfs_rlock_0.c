rl_t *
zfs_range_lock(zfs_rlock_t *zrl, uint64_t off, uint64_t len, rl_type_t type)
{
rl_t *new;

ASSERT(type == RL_READER || type == RL_WRITER || type == RL_APPEND);

new = kmem_alloc(sizeof (rl_t), KM_SLEEP);
new->r_zrl = zrl;
new->r_off = off;
if (len + off < off)	
len = UINT64_MAX - off;
new->r_len = len;
new->r_cnt = 1; 
new->r_type = type;
new->r_proxy = B_FALSE;
new->r_write_wanted = B_FALSE;
new->r_read_wanted = B_FALSE;

mutex_enter(&zrl->zr_mutex);
if (type == RL_READER) {

if (avl_numnodes(&zrl->zr_avl) == 0)
avl_add(&zrl->zr_avl, new);
else
zfs_range_lock_reader(zrl, new);
} else 
zfs_range_lock_writer(zrl, new);
mutex_exit(&zrl->zr_mutex);
return (new);
}