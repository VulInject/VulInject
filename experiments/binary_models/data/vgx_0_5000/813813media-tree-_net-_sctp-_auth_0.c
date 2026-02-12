int sctp_auth_asoc_init_active_key(struct sctp_association *asoc, gfp_t gfp)
{
struct sctp_auth_bytes	*secret;
struct sctp_shared_key *ep_key;
struct sctp_chunk *chunk;


if (!asoc->ep->auth_enable || !asoc->peer.auth_capable)
return 0;


ep_key = sctp_auth_get_shkey(asoc, asoc->active_key_id);
BUG_ON(!ep_key);

secret = sctp_auth_asoc_create_secret(asoc, ep_key, gfp);
if (!secret)
return -ENOMEM;

sctp_auth_key_put(asoc->asoc_shared_key);
asoc->asoc_shared_key = secret;


list_for_each_entry(chunk, &asoc->outqueue.out_chunk_list, list) {
if (sctp_auth_send_cid(chunk->chunk_hdr->type, asoc))
chunk->auth = 1;
}

return 0;
}