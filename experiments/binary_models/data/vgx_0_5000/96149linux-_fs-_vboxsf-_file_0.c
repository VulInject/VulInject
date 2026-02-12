struct vboxsf_handle *vboxsf_create_sf_handle(struct inode *inode,
u64 handle, u32 access_flags)
{
struct vboxsf_inode *sf_i = VBOXSF_I(inode);
struct vboxsf_handle *sf_handle;

sf_handle = kmalloc(sizeof(*sf_handle), GFP_KERNEL);
if (!sf_handle)
return ERR_PTR(-ENOMEM);


sf_i->force_restat = 1;


sf_handle->handle = handle;
sf_handle->root = VBOXSF_SBI(inode->i_sb)->root;
sf_handle->access_flags = access_flags;
kref_init(&sf_handle->refcount);

mutex_lock(&sf_i->handle_list_mutex);
list_add(&sf_handle->head, &sf_i->handle_list);
mutex_unlock(&sf_i->handle_list_mutex);

return sf_handle;
}