void *jabber_buddy_action(struct bee_user *bu, const char *action, char * const args[], void *data)
{
if (g_strcasecmp(action, "VERSION") == 0) {
struct jabber_buddy *bud;

if ((bud = jabber_buddy_by_ext_jid(bu->ic, bu->handle, 0)) == NULL) {
bud = jabber_buddy_by_jid(bu->ic, bu->handle, GET_BUDDY_FIRST);
}
for (; bud; bud = bud->next) {
jabber_iq_version_send(bu->ic, bud, data);
}
}

return NULL;
}