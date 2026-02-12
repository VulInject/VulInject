static rl_t *
zfs_range_split(avl_tree_t *tree, rl_t *rl, uint64_t off)
{
rl_t *front, *rear;

ASSERT3U(rl->r_len, >, 1);
ASSERT3U(off, >, rl->r_off);
ASSERT3U(off, <, rl->r_off + rl->r_len);
ASSERT(rl->r_write_wanted == B_FALSE);
ASSERT(rl->r_read_wanted == B_FALSE);


rear = kmem_alloc(sizeof (rl_t), KM_SLEEP);
rear->r_off = off;
rear->r_len = rl->r_off + rl->r_len - off;
rear->r_cnt = rl->r_cnt;
rear->r_type = RL_READER;
rear->r_proxy = B_TRUE;
rear->r_write_wanted = B_FALSE;
rear->r_read_wanted = B_FALSE;

front = zfs_range_proxify(tree, rl);
front->r_len = off - rl->r_off;

avl_insert_here(tree, rear, front, AVL_AFTER);
return (front);
}