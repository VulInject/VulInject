static bool dwb2_update(struct dwbc *dwbc, struct dc_dwb_params *params)
{
struct dcn20_dwbc *dwbc20 = TO_DCN20_DWBC(dwbc);
unsigned int pre_locked;


if ((params->cnv_params.src_width != params->dest_width) ||
(params->cnv_params.src_height != params->dest_height)) {
DC_LOG_DWB("%s inst = %d, FAILED!LUMA SCALING NOT SUPPORTED", __func__, dwbc20->base.inst);
return false;
}
DC_LOG_DWB("%s inst = %d, scaling", __func__, dwbc20->base.inst);


REG_GET(CNV_UPDATE, CNV_UPDATE_LOCK, &pre_locked);

if (pre_locked == 0) {

REG_UPDATE(CNV_UPDATE, CNV_UPDATE_LOCK, 1);
}


dwb2_config_dwb_cnv(dwbc, params);


dwb2_set_scaler(dwbc, params);

if (pre_locked == 0) {

REG_UPDATE(CNV_UPDATE, CNV_UPDATE_LOCK, 0);
}

return true;
}