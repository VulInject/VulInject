uint32_t
sip_get_dialog_remote_cseq(sip_dialog_t dialog, int *error)
{
_sip_dialog_t	*_dialog;
uint32_t	cseq;

if (error != NULL)
*error = 0;
if (!sip_manage_dialog || dialog == NULL) {
if (error != NULL)
*error = EINVAL;
return (0);
}
_dialog = (_sip_dialog_t *)dialog;
(void) pthread_mutex_lock(&_dialog->sip_dlg_mutex);
cseq = _dialog->sip_dlg_remote_cseq;
(void) pthread_mutex_unlock(&_dialog->sip_dlg_mutex);
return (cseq);
}