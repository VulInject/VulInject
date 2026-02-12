lm_status_t
lm_fc_comp_request(
IN    lm_device_t       *pdev,
IN    lm_eq_chain_t     *eq_chain,
INOUT struct fcoe_kcqe  **fcoe_kcqe_start,
INOUT u16_t             *fcoe_kcqe_num)
{
lm_status_t lm_status;

if (CHK_NULL(pdev) || CHK_NULL(eq_chain) || CHK_NULL(fcoe_kcqe_start) || CHK_NULL(fcoe_kcqe_num))
{
return LM_STATUS_INVALID_PARAMETER;
}

lm_status = mm_fc_comp_request(pdev, *fcoe_kcqe_start, *fcoe_kcqe_num);
if (lm_status != LM_STATUS_SUCCESS)
{
DbgMessage(pdev, WARN, "lm_fc_service_eq_intr: lm_fc_comp_request failed.\n");
}

lm_bd_chain_bds_produced(&eq_chain->bd_chain, *fcoe_kcqe_num);
*fcoe_kcqe_num = 0;
*fcoe_kcqe_start = NULL;

return lm_status;
}