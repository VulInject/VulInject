int
fmd_nvl_fmri_service_state(fmd_hdl_t *hdl, nvlist_t *nvl)
{
fmd_module_t *mp = fmd_api_module_lock(hdl);
int rv;

if (nvl == NULL) {
fmd_api_error(mp, EFMD_NVL_INVAL,
"invalid nvlist %p\n", (void *)nvl);
}

rv = fmd_fmri_service_state(nvl);
if (rv < 0)
rv = fmd_fmri_unusable(nvl) ? FMD_SERVICE_STATE_UNUSABLE :
FMD_SERVICE_STATE_OK;
fmd_module_unlock(mp);

if (rv < 0) {
fmd_api_error(mp, EFMD_FMRI_OP, "invalid fmri for "
"fmd_nvl_fmri_service_state\n");
}

return (rv);
}

typedef struct {
const char	*class;
int	*rvp;
} fmd_has_fault_arg_t;