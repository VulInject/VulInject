static size_t svc_tcp_restore_pages(struct svc_sock *svsk,
struct svc_rqst *rqstp)
{
size_t len = svsk->sk_datalen;
unsigned int i, npages;

if (!len)
return 0;
npages = (len + PAGE_SIZE - 1) >> PAGE_SHIFT;
for (i = 0; i < npages; i++) {
if (rqstp->rq_pages[i] != NULL)
put_page(rqstp->rq_pages[i]);
BUG_ON(svsk->sk_pages[i] == NULL);
rqstp->rq_pages[i] = svsk->sk_pages[i];
svsk->sk_pages[i] = NULL;
}
rqstp->rq_arg.head[0].iov_base = page_address(rqstp->rq_pages[0]);
return len;
}