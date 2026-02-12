static void
ldapd_auth_request(struct imsgev *iev, struct imsg *imsg)
{
struct auth_req		*areq = imsg->data;
struct auth_res		 ares;

if (imsg->hdr.len != sizeof(*areq) + IMSG_HEADER_SIZE)
fatal("invalid size of auth request");


areq->name[sizeof(areq->name) - 1] = '\0';
areq->password[sizeof(areq->password) - 1] = '\0';

log_debug("authenticating [%s]", areq->name);
ares.ok = ldapd_auth_classful(areq->name, areq->password);
ares.fd = areq->fd;
ares.msgid = areq->msgid;
memset(areq, 0, sizeof(*areq));
imsgev_compose(iev, IMSG_LDAPD_AUTH_RESULT, 0, 0, -1, &ares,
sizeof(ares));
}