enum _ecore_status_t ecore_init_alloc(struct ecore_hwfn *p_hwfn)
{
struct ecore_rt_data *rt_data = &p_hwfn->rt_data;

if (IS_VF(p_hwfn->p_dev))
return ECORE_SUCCESS;

rt_data->b_valid = OSAL_ZALLOC(p_hwfn->p_dev, GFP_KERNEL,
sizeof(bool) * RUNTIME_ARRAY_SIZE);
if (!rt_data->b_valid)
return ECORE_NOMEM;

rt_data->init_val = OSAL_ZALLOC(p_hwfn->p_dev, GFP_KERNEL,
sizeof(u32) * RUNTIME_ARRAY_SIZE);
if (!rt_data->init_val) {
OSAL_FREE(p_hwfn->p_dev, rt_data->b_valid);
rt_data->b_valid = OSAL_NULL;
return ECORE_NOMEM;
}

return ECORE_SUCCESS;
}