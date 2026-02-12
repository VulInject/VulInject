int ffurl_get_multi_file_handle(URLContext *h, int **handles, int *numhandles)
{
if (!h || !h->prot)
return AVERROR(ENOSYS);
if (!h->prot->url_get_multi_file_handle) {
if (!h->prot->url_get_file_handle)
return AVERROR(ENOSYS);
*handles = av_malloc(sizeof(**handles));
if (!*handles)
return AVERROR(ENOMEM);
*numhandles = 1;
*handles[0] = h->prot->url_get_file_handle(h);
return 0;
}
return h->prot->url_get_multi_file_handle(h, handles, numhandles);
}