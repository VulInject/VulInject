static void *revalidate(void *);

static nss_status_t
dup_packed_buffer(void *src, void *dst)
{
nsc_lookup_args_t	*s = (nsc_lookup_args_t *)src;
nsc_entry_t		*d = (nsc_entry_t *)dst;
nss_pheader_t		*sphdr = (nss_pheader_t *)s->buffer;
nss_pheader_t		*dphdr = (nss_pheader_t *)d->buffer;
int			slen, new_pbufsiz = 0;

if (NSCD_GET_STATUS(sphdr) != NSS_SUCCESS) {


slen = sphdr->data_off;
} else {

slen = sphdr->data_off + sphdr->data_len + 1;
}


if (dphdr != NULL && d->bufsize <= slen && d->bufsize != 0) {

free(dphdr);
d->buffer = NULL;
d->bufsize = 0;
dphdr = NULL;
}
if (dphdr == NULL) {

dphdr = calloc(1, slen + 1);
if (dphdr == NULL)
return (NSS_ERROR);
d->buffer = dphdr;
d->bufsize = slen + 1;
new_pbufsiz = slen + 1;
}

(void) memcpy(dphdr, sphdr, slen);
if (new_pbufsiz != 0)
dphdr->pbufsiz = new_pbufsiz;

return (NSS_SUCCESS);
}