EXPORTED int quota_read_withconversations(struct quota *quota)
{
int r = quota_read(quota, NULL, 0);
if (r) return r;

if (config_getswitch(IMAPOPT_QUOTA_USE_CONVERSATIONS)) {
struct conversations_state *local_cstate = NULL;
struct conversations_state *cstate = conversations_get_mbox(quota->root);
if (!cstate) {
conversations_open_mbox(quota->root, 1, &local_cstate);
cstate = local_cstate;
}
if (cstate) {
struct conv_quota q = CONV_QUOTA_INIT;
conversations_read_quota(cstate, &q);
quota->useds[QUOTA_STORAGE] = q.storage;
quota->useds[QUOTA_MESSAGE] = q.emails;
}
if (local_cstate) conversations_commit(&local_cstate);
}

return 0;
}