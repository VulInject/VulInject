void
ecc_page_zero(void *arg)
{
uint64_t pa = (uint64_t)arg;
int ret, success_flag;
page_t *pp = page_numtopp_nolock(mmu_btop(pa));

if (page_retire_check(pa, NULL) != 0)
return;


ret = page_lock_es(pp, SE_SHARED, (kmutex_t *)NULL,
P_NO_RECLAIM, SE_RETIRED);

if (ret > 0) {
on_trap_data_t otd;


if (!on_trap(&otd, OT_DATA_EC)) {
pagezero(pp, 0, PAGESIZE);
success_flag = PAGE_ZERO_SUCCESS;
} else {
success_flag = PAGE_ZERO_FAIL_ONTRAP;
}
no_trap();
page_unlock(pp);
} else {
success_flag = PAGE_ZERO_FAIL_NOLOCK;
}
DTRACE_PROBE2(page_zero_result, int, success_flag, uint64_t, pa);
}