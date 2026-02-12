Status_t
sm_process_vf_info(VirtualFabrics_t *VirtualFabrics)
{
if (!bitset_init(&sm_pool, &sm_linkSLsInuse, STL_MAX_SLS)) {
IB_LOG_ERROR_FMT(__func__, "Out of memory.");
return VSTATUS_NOMEM;
}





setPKey(0, STL_DEFAULT_APP_PKEY, 0);
setPKey(1, STL_DEFAULT_PKEY, 0);

if (!VirtualFabrics || (VirtualFabrics->number_of_vfs_all == 0))  {
sm_masterSmSl = 0;
return VSTATUS_OK;
}

if (sm_assign_qos_params(VirtualFabrics) != VSTATUS_OK)
return VSTATUS_BAD;

return sm_resolve_pkeys_for_vfs(VirtualFabrics);
}