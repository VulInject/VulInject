static int r8712_process_recv_indicatepkts(struct _adapter *padapter,
union recv_frame *prframe)
{
int retval = _SUCCESS;
struct mlme_priv *pmlmepriv = &padapter->mlmepriv;
struct ht_priv	*phtpriv = &pmlmepriv->htpriv;

if (phtpriv->ht_option == 1) { 
if (recv_indicatepkt_reorder(padapter, prframe)) {

if (!padapter->driver_stopped &&
!padapter->surprise_removed)
return _FAIL;
}
} else { 
retval = r8712_wlanhdr_to_ethhdr(prframe);
if (retval)
return _FAIL;
if (!padapter->driver_stopped && !padapter->surprise_removed) {

r8712_recv_indicatepkt(padapter, prframe);
} else {
return _FAIL;
}
}
return retval;
}