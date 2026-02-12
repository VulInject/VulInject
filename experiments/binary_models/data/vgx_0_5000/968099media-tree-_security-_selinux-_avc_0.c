int avc_ss_reset(u32 seqno)
{
struct avc_callback_node *c;
int rc = 0, tmprc;

avc_flush();

for (c = avc_callbacks; c; c = c->next) {
if (c->events & AVC_CALLBACK_RESET) {
tmprc = c->callback(AVC_CALLBACK_RESET);

if (!rc)
rc = tmprc;
}
}

avc_latest_notif_update(seqno, 0);
return rc;
}