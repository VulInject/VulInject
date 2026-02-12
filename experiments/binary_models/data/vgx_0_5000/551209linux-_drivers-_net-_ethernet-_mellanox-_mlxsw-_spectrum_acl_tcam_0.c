int mlxsw_sp_acl_tcam_priority_get(struct mlxsw_sp *mlxsw_sp,
struct mlxsw_sp_acl_rule_info *rulei,
u32 *priority, bool fillup_priority)
{
u64 max_priority;

if (!fillup_priority) {
*priority = 0;
return 0;
}

if (!MLXSW_CORE_RES_VALID(mlxsw_sp->core, KVD_SIZE))
return -EIO;


max_priority = MLXSW_CORE_RES_GET(mlxsw_sp->core, KVD_SIZE) - 1;
if (rulei->priority >= max_priority)
return -EINVAL;


*priority = max_priority - rulei->priority;
return 0;
}