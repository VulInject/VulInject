static void vvp_page_completion_read(const struct lu_env *env,
const struct cl_page_slice *slice,
int ioret)
{
struct vvp_page *vpg    = cl2vvp_page(slice);
struct page     *vmpage = vpg->vpg_page;
struct cl_page  *page   = slice->cpl_page;
struct inode    *inode  = vvp_object_inode(page->cp_obj);

LASSERT(PageLocked(vmpage));
CL_PAGE_HEADER(D_PAGE, env, page, "completing READ with %d\n", ioret);

if (vpg->vpg_defer_uptodate)
ll_ra_count_put(ll_i2sbi(inode), 1);

if (ioret == 0)  {
if (!vpg->vpg_defer_uptodate)
cl_page_export(env, page, 1);
} else {
vpg->vpg_defer_uptodate = 0;
}

if (!page->cp_sync_io)
unlock_page(vmpage);
}