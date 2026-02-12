int
leaky_subr_fill(leak_mtab_t **lmpp)
{
if (mdb_walk("vmem", (mdb_walk_cb_t)leaky_vmem, lmpp) == -1) {
mdb_warn("couldn't walk 'vmem'");
return (DCMD_ERR);
}

if (mdb_walk("kmem_cache", (mdb_walk_cb_t)leaky_cache, lmpp) == -1) {
mdb_warn("couldn't walk 'kmem_cache'");
return (DCMD_ERR);
}

if (mdb_readvar(&kmem_lite_count, "kmem_lite_count") == -1) {
mdb_warn("couldn't read 'kmem_lite_count'");
kmem_lite_count = 0;
} else if (kmem_lite_count > 16) {
mdb_warn("kmem_lite_count nonsensical, ignored\n");
kmem_lite_count = 0;
}

return (DCMD_OK);
}