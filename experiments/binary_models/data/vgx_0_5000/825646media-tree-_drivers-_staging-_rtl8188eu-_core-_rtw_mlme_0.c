static u8 search_max_mac_id(struct adapter *padapter)
{
u8 mac_id;
u8 aid;
struct mlme_priv *pmlmepriv = &(padapter->mlmepriv);
struct sta_priv *pstapriv = &padapter->stapriv;
struct mlme_ext_priv *pmlmeext = &(padapter->mlmeextpriv);
struct mlme_ext_info	*pmlmeinfo = &(pmlmeext->mlmext_info);

if (check_fwstate(pmlmepriv, WIFI_AP_STATE)) {
for (aid = (pstapriv->max_num_sta); aid > 0; aid--) {
if (pstapriv->sta_aid[aid-1])
break;
}
mac_id = aid + 1;
} else
{
for (mac_id = (NUM_STA-1); mac_id >= IBSS_START_MAC_ID; mac_id--) {
if (pmlmeinfo->FW_sta_info[mac_id].status == 1)
break;
}
}
return mac_id;
}