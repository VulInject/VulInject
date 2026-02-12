static int
fab_prep_pcie_ce_erpt(fmd_hdl_t *hdl, fab_data_t *data, nvlist_t *erpt,
fab_erpt_tbl_t *tbl)
{
const char *class = tbl->err_class;
int err = fab_prep_basic_erpt(hdl, data->nvl, erpt, B_FALSE);


(void) snprintf(fab_buf, FM_MAX_CLASS, "ereport.io.%s.%s",
PCIEX_ERROR_SUBCLASS, class);
(void) nvlist_add_string(erpt, FM_CLASS, fab_buf);

(void) nvlist_add_uint16(erpt, PCIEX_DEVSTS_REG, data->pcie_err_status);
(void) nvlist_add_uint32(erpt, PCIEX_CE_STATUS_REG,
data->pcie_ce_status);

return (err);
}