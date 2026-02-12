u8 r8712_wdg_wk_cmd(struct _adapter *padapter)
{
struct cmd_obj *ph2c;
struct drvint_cmd_parm  *pdrvintcmd_param;
struct cmd_priv	*pcmdpriv = &padapter->cmdpriv;

ph2c = kmalloc(sizeof(*ph2c), GFP_ATOMIC);
if (!ph2c)
return _FAIL;
pdrvintcmd_param = kmalloc(sizeof(*pdrvintcmd_param), GFP_ATOMIC);
if (!pdrvintcmd_param) {
kfree(ph2c);
return _FAIL;
}
pdrvintcmd_param->i_cid = WDG_WK_CID;
pdrvintcmd_param->sz = 0;
pdrvintcmd_param->pbuf = NULL;
init_h2fwcmd_w_parm_no_rsp(ph2c, pdrvintcmd_param, _DRV_INT_CMD_);
r8712_enqueue_cmd_ex(pcmdpriv, ph2c);
return _SUCCESS;
}