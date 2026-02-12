static enum _ecore_status_t __ecore_spq_block(struct ecore_hwfn *p_hwfn,
struct ecore_spq_entry *p_ent,
u8 *p_fw_ret,
bool sleep_between_iter)
{
struct ecore_spq_comp_done *comp_done;
u32 iter_cnt;

comp_done = (struct ecore_spq_comp_done *)p_ent->comp_cb.cookie;
iter_cnt = sleep_between_iter ? SPQ_BLOCK_SLEEP_MAX_ITER
: SPQ_BLOCK_DELAY_MAX_ITER;

while (iter_cnt--) {
OSAL_POLL_MODE_DPC(p_hwfn);
OSAL_SMP_RMB(p_hwfn->p_dev);
if (comp_done->done == 1) {
if (p_fw_ret)
*p_fw_ret = comp_done->fw_return_code;
return ECORE_SUCCESS;
}

if (sleep_between_iter)
OSAL_MSLEEP(SPQ_BLOCK_SLEEP_MS);
else
OSAL_UDELAY(SPQ_BLOCK_DELAY_US);
}

return ECORE_TIMEOUT;
}