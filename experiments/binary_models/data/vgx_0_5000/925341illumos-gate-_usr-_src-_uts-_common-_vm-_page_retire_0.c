static void
page_retire_destroy(page_t *pp)
{
u_offset_t off = (u_offset_t)((uintptr_t)pp);

ASSERT(PAGE_EXCL(pp));
ASSERT(!PP_ISFREE(pp));
ASSERT(pp->p_szc == 0);
ASSERT(!hat_page_is_mapped(pp));
ASSERT(!pp->p_vnode);

page_clr_all_props(pp);
pagescrub(pp, 0, MMU_PAGESIZE);

pp->p_next = NULL;
pp->p_prev = NULL;
if (page_hashin(pp, retired_pages, off, NULL) == 0) {
cmn_err(CE_PANIC, "retired page %p hashin failed", (void *)pp);
}

page_settoxic(pp, PR_RETIRED);
PR_INCR_KSTAT(pr_retired);

if (pp->p_toxic & PR_FMA) {
PR_INCR_KSTAT(pr_fma);
} else if (pp->p_toxic & PR_UE) {
PR_INCR_KSTAT(pr_ue);
} else {
PR_INCR_KSTAT(pr_mce);
}

mutex_enter(&freemem_lock);
availrmem--;
mutex_exit(&freemem_lock);

page_unlock(pp);
}