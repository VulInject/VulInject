static void vvp_page_delete(const struct lu_env *env,
const struct cl_page_slice *slice)
{
struct page       *vmpage = cl2vm_page(slice);
struct inode     *inode  = vmpage->mapping->host;
struct cl_object *obj    = slice->cpl_obj;
struct cl_page   *page   = slice->cpl_page;
int refc;

LASSERT(PageLocked(vmpage));
LASSERT((struct cl_page *)vmpage->private == page);
LASSERT(inode == vvp_object_inode(obj));


refc = atomic_dec_return(&page->cp_ref);
LASSERTF(refc >= 1, "page = %p, refc = %d\n", page, refc);

ClearPagePrivate(vmpage);
vmpage->private = 0;

}