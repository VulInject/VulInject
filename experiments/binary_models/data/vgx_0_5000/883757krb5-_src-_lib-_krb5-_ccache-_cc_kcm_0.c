static krb5_error_code
kcmreq_get_uuid_list(struct kcmreq *req, struct uuid_list **uuids_out)
{
struct uuid_list *uuids;

*uuids_out = NULL;

if (req->reply.len % KCM_UUID_LEN != 0)
return KRB5_KCM_MALFORMED_REPLY;

uuids = malloc(sizeof(*uuids));
if (uuids == NULL)
return ENOMEM;
uuids->count = req->reply.len / KCM_UUID_LEN;
uuids->pos = 0;

if (req->reply.len > 0) {
uuids->uuidbytes = malloc(req->reply.len);
if (uuids->uuidbytes == NULL) {
free(uuids);
return ENOMEM;
}
memcpy(uuids->uuidbytes, req->reply.ptr, req->reply.len);
(void)k5_input_get_bytes(&req->reply, req->reply.len);
} else {
uuids->uuidbytes = NULL;
}

*uuids_out = uuids;
return 0;
}