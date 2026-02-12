static int i40e_init_pin_config(struct i40e_pf *pf)
{
int i;

pf->ptp_caps.n_pins = 3;
pf->ptp_caps.n_ext_ts = 2;
pf->ptp_caps.pps = 1;
pf->ptp_caps.n_per_out = 2;

pf->ptp_caps.pin_config = kcalloc(pf->ptp_caps.n_pins,
sizeof(*pf->ptp_caps.pin_config),
GFP_KERNEL);
if (!pf->ptp_caps.pin_config)
return -ENOMEM;

for (i = 0; i < pf->ptp_caps.n_pins; i++) {
snprintf(pf->ptp_caps.pin_config[i].name,
sizeof(pf->ptp_caps.pin_config[i].name),
"%s", sdp_desc[i].name);
pf->ptp_caps.pin_config[i].index = sdp_desc[i].index;
pf->ptp_caps.pin_config[i].func = PTP_PF_NONE;
pf->ptp_caps.pin_config[i].chan = sdp_desc[i].chan;
}

pf->ptp_caps.verify = i40e_ptp_verify;
pf->ptp_caps.enable = i40e_ptp_feature_enable;

pf->ptp_caps.pps = 1;

return 0;
}