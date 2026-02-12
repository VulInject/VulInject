static int cifs_calc_signature(struct smb_rqst *rqst,
struct TCP_Server_Info *server, char *signature)
{
int rc;

if (!rqst->rq_iov || !signature || !server)
return -EINVAL;

if (!server->secmech.sdescmd5) {
rc = cifs_crypto_shash_md5_allocate(server);
if (rc) {
cifs_dbg(VFS, "%s: Can't alloc md5 crypto\n", __func__);
return -1;
}
}

rc = crypto_shash_init(&server->secmech.sdescmd5->shash);
if (rc) {
cifs_dbg(VFS, "%s: Could not init md5\n", __func__);
return rc;
}

rc = crypto_shash_update(&server->secmech.sdescmd5->shash,
server->session_key.response, server->session_key.len);
if (rc) {
cifs_dbg(VFS, "%s: Could not update with response\n", __func__);
return rc;
}

return __cifs_calc_signature(rqst, server, signature,
&server->secmech.sdescmd5->shash);
}