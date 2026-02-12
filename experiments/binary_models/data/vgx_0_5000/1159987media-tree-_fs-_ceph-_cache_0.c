static uint16_t ceph_fscache_session_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t maxbuf)
{
const struct ceph_fs_client* fsc = cookie_netfs_data;
uint16_t klen;

klen = sizeof(fsc->client->fsid);
if (klen > maxbuf)
return 0;

memcpy(buffer, &fsc->client->fsid, klen);
return klen;
}

static const struct fscache_cookie_def ceph_fscache_fsid_object_def = {
.name		= "CEPH.fsid",
.type		= FSCACHE_COOKIE_TYPE_INDEX,
.get_key	= ceph_fscache_session_get_key,
};