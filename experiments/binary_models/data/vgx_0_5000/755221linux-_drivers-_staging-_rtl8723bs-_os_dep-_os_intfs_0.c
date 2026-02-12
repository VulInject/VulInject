void rtw_reset_drv_sw(struct adapter *padapter)
{
struct mlme_priv *pmlmepriv = &padapter->mlmepriv;
struct pwrctrl_priv *pwrctrlpriv = adapter_to_pwrctl(padapter);


if (is_primary_adapter(padapter))
rtw_hal_def_value_init(padapter);

RTW_ENABLE_FUNC(padapter, DF_RX_BIT);
RTW_ENABLE_FUNC(padapter, DF_TX_BIT);
padapter->bLinkInfoDump = 0;

padapter->xmitpriv.tx_pkts = 0;
padapter->recvpriv.rx_pkts = 0;

pmlmepriv->LinkDetectInfo.bBusyTraffic = false;


pmlmepriv->LinkDetectInfo.TrafficTransitionCount = 0;
pmlmepriv->LinkDetectInfo.LowPowerTransitionCount = 0;

_clr_fwstate_(pmlmepriv, _FW_UNDER_SURVEY | _FW_UNDER_LINKING);

pwrctrlpriv->pwr_state_check_cnts = 0;


padapter->mlmeextpriv.sitesurvey_res.state = SCAN_DISABLE;

rtw_set_signal_stat_timer(&padapter->recvpriv);

}