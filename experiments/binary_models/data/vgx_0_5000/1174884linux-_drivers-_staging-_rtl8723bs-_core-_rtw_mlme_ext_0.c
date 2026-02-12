void link_timer_hdl(struct timer_list *t)
{
struct adapter *padapter =
from_timer(padapter, t, mlmeextpriv.link_timer);



struct mlme_ext_priv *pmlmeext = &padapter->mlmeextpriv;
struct mlme_ext_info *pmlmeinfo = &(pmlmeext->mlmext_info);



if (pmlmeinfo->state & WIFI_FW_AUTH_NULL) {
pmlmeinfo->state = WIFI_FW_NULL_STATE;
report_join_res(padapter, -3);
} else if (pmlmeinfo->state & WIFI_FW_AUTH_STATE) {

if (++pmlmeinfo->reauth_count > REAUTH_LIMIT) {
pmlmeinfo->state = 0;
report_join_res(padapter, -1);
return;
}

pmlmeinfo->auth_seq = 1;
issue_auth(padapter, NULL, 0);
set_link_timer(pmlmeext, REAUTH_TO);
} else if (pmlmeinfo->state & WIFI_FW_ASSOC_STATE) {

if (++pmlmeinfo->reassoc_count > REASSOC_LIMIT) {
pmlmeinfo->state = WIFI_FW_NULL_STATE;
report_join_res(padapter, -2);
return;
}

issue_assocreq(padapter);
set_link_timer(pmlmeext, REASSOC_TO);
}
}