void
dsl_deadlist_space(dsl_deadlist_t *dl,
uint64_t *usedp, uint64_t *compp, uint64_t *uncompp)
{
ASSERT(dsl_deadlist_is_open(dl));
if (dl->dl_oldfmt) {
VERIFY3U(0, ==, bpobj_space(&dl->dl_bpobj,
usedp, compp, uncompp));
return;
}

mutex_enter(&dl->dl_lock);
*usedp = dl->dl_phys->dl_used;
*compp = dl->dl_phys->dl_comp;
*uncompp = dl->dl_phys->dl_uncomp;
mutex_exit(&dl->dl_lock);
}