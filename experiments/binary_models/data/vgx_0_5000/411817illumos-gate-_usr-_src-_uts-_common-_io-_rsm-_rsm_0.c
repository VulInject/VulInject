static void
rsmhash_rm(rsmhash_table_t *rhash, rsmresource_t *rcelm)
{
rsmresource_t		*p, **back;
uint_t			hashval;
DBG_DEFINE(category, RSM_KERNEL_AGENT | RSM_FUNC_ALL);

DBG_PRINTF((category, RSM_DEBUG_VERBOSE, "rsmhash_rm enter\n"));

hashval = rsmhash(rcelm->rsmrc_key);

DBG_PRINTF((category, RSM_DEBUG_LVL2, "rsmhash_rm %u=%d\n",
rcelm->rsmrc_key, hashval));


rw_enter(&rhash->rsmhash_rw, RW_WRITER);

back = (rsmresource_t **)rsmhash_bktaddr(rhash, hashval);

for (; (p = *back) != NULL;  back = &p->rsmrc_next) {
if (p == rcelm) {
*back = rcelm->rsmrc_next;
break;
}
}

DBG_PRINTF((category, RSM_DEBUG_VERBOSE, "rsmhash_rm done\n"));

rw_exit(&rhash->rsmhash_rw);
}