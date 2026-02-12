static int
leaky_cache(uintptr_t addr, const kmem_cache_t *c, leak_mtab_t **lmp)
{
leak_mtab_t *lm = *lmp;
mdb_walk_cb_t cb;
const char *walk;
int audit = (c->cache_flags & KMF_AUDIT);

if (!leaky_interested(c))
return (WALK_NEXT);

if (audit) {
walk = "bufctl";
cb = (mdb_walk_cb_t)leaky_mtab;
} else {
walk = "kmem";
cb = (mdb_walk_cb_t)leaky_mtab_addr;
}
if (mdb_pwalk(walk, cb, lmp, addr) == -1) {
mdb_warn("can't walk kmem for cache %p (%s)", addr,
c->cache_name);
return (WALK_DONE);
}

for (; lm < *lmp; lm++) {
lm->lkm_limit = lm->lkm_base + c->cache_bufsize;
if (!audit)
lm->lkm_bufctl = LKM_CTL(addr, LKM_CTL_CACHE);
}

return (WALK_NEXT);
}