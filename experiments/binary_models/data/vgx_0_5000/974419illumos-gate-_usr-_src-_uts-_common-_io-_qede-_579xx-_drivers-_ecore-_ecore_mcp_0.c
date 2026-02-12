static void ecore_read_pf_bandwidth(struct ecore_hwfn *p_hwfn,
struct public_func *p_shmem_info)
{
struct ecore_mcp_function_info *p_info;

p_info = &p_hwfn->mcp_info->func_info;


p_info->bandwidth_min = (p_shmem_info->config &
FUNC_MF_CFG_MIN_BW_MASK) >>
FUNC_MF_CFG_MIN_BW_SHIFT;
if (p_info->bandwidth_min < 1 || p_info->bandwidth_min > 100) {
DP_INFO(p_hwfn,
"bandwidth minimum out of bounds [%02x]. Set to 1\n",
p_info->bandwidth_min);
p_info->bandwidth_min = 1;
}

p_info->bandwidth_max = (p_shmem_info->config &
FUNC_MF_CFG_MAX_BW_MASK) >>
FUNC_MF_CFG_MAX_BW_SHIFT;
if (p_info->bandwidth_max < 1 || p_info->bandwidth_max > 100) {
DP_INFO(p_hwfn,
"bandwidth maximum out of bounds [%02x]. Set to 100\n",
p_info->bandwidth_max);
p_info->bandwidth_max = 100;
}
}