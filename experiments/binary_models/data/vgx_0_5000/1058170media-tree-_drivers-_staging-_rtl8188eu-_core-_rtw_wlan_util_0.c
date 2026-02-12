int update_sta_support_rate(struct adapter *padapter, u8 *pvar_ie, uint var_ie_len, int cam_idx)
{
unsigned int	ie_len;
struct ndis_802_11_var_ie *pIE;
int	supportRateNum = 0;
struct mlme_ext_priv	*pmlmeext = &(padapter->mlmeextpriv);
struct mlme_ext_info	*pmlmeinfo = &(pmlmeext->mlmext_info);

pIE = (struct ndis_802_11_var_ie *)rtw_get_ie(pvar_ie, _SUPPORTEDRATES_IE_, &ie_len, var_ie_len);
if (pIE == NULL)
return _FAIL;
if (ie_len > NDIS_802_11_LENGTH_RATES_EX)
return _FAIL;

memcpy(pmlmeinfo->FW_sta_info[cam_idx].SupportedRates, pIE->data, ie_len);
supportRateNum = ie_len;

pIE = (struct ndis_802_11_var_ie *)rtw_get_ie(pvar_ie, _EXT_SUPPORTEDRATES_IE_, &ie_len, var_ie_len);
if (pIE) {
if (supportRateNum + ie_len > NDIS_802_11_LENGTH_RATES_EX)
return _FAIL;
memcpy((pmlmeinfo->FW_sta_info[cam_idx].SupportedRates + supportRateNum), pIE->data, ie_len);
}

return _SUCCESS;
}