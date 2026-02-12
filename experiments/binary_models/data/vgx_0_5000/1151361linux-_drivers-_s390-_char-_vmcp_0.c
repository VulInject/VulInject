static void vmcp_response_free(struct vmcp_session *session)
{
int nr_pages, order;
struct page *page;

if (!session->response)
return;
order = get_order(session->bufsize);
nr_pages = ALIGN(session->bufsize, PAGE_SIZE) >> PAGE_SHIFT;
if (session->cma_alloc) {
page = virt_to_page((unsigned long)session->response);
cma_release(vmcp_cma, page, nr_pages);
session->cma_alloc = 0;
} else {
free_pages((unsigned long)session->response, order);
}
session->response = NULL;
}