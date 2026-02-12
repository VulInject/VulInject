u8 rtw_c2h_wk_cmd(struct adapter *padapter, u8 *c2h_evt)
{
struct cmd_obj *ph2c;
struct drvextra_cmd_parm *pdrvextra_cmd_parm;
struct cmd_priv	*pcmdpriv = &padapter->cmdpriv;
u8	res = _SUCCESS;

ph2c = kzalloc(sizeof(*ph2c), GFP_ATOMIC);
if (!ph2c) {
res = _FAIL;
goto exit;
}

pdrvextra_cmd_parm = kzalloc(sizeof(*pdrvextra_cmd_parm), GFP_ATOMIC);
if (!pdrvextra_cmd_parm) {
kfree(ph2c);
res = _FAIL;
goto exit;
}

pdrvextra_cmd_parm->ec_id = C2H_WK_CID;
pdrvextra_cmd_parm->type_size = c2h_evt ? 16 : 0;
pdrvextra_cmd_parm->pbuf = c2h_evt;

init_h2fwcmd_w_parm_no_rsp(ph2c, pdrvextra_cmd_parm, GEN_CMD_CODE(_Set_Drv_Extra));

res = rtw_enqueue_cmd(pcmdpriv, ph2c);

exit:

return res;
}