static int irdma_setup_pbles(struct irdma_pci_f *rf, struct irdma_mr *iwmr,
bool use_pbles, bool lvl_1_only)
{
struct irdma_pbl *iwpbl = &iwmr->iwpbl;
struct irdma_pble_alloc *palloc = &iwpbl->pble_alloc;
struct irdma_pble_info *pinfo;
u64 *pbl;
int status;
enum irdma_pble_level level = PBLE_LEVEL_1;

if (use_pbles) {
status = irdma_get_pble(rf->pble_rsrc, palloc, iwmr->page_cnt,
lvl_1_only);
if (status)
return status;

iwpbl->pbl_allocated = true;
level = palloc->level;
pinfo = (level == PBLE_LEVEL_1) ? &palloc->level1 :
palloc->level2.leaf;
pbl = pinfo->addr;
} else {
pbl = iwmr->pgaddrmem;
}

irdma_copy_user_pgaddrs(iwmr, pbl, level);

if (use_pbles)
iwmr->pgaddrmem[0] = *pbl;

return 0;
}