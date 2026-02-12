int drm_gem_mmap_obj(struct drm_gem_object *obj, unsigned long obj_size,
struct vm_area_struct *vma)
{
int ret;


if (obj_size < vma->vm_end - vma->vm_start)
return -EINVAL;


drm_gem_object_get(obj);

vma->vm_private_data = obj;
vma->vm_ops = obj->funcs->vm_ops;

if (obj->funcs->mmap) {
ret = obj->funcs->mmap(obj, vma);
if (ret)
goto err_drm_gem_object_put;
WARN_ON(!(vma->vm_flags & VM_DONTEXPAND));
} else {
if (!vma->vm_ops) {
ret = -EINVAL;
goto err_drm_gem_object_put;
}

vm_flags_set(vma, VM_IO | VM_PFNMAP | VM_DONTEXPAND | VM_DONTDUMP);
vma->vm_page_prot = pgprot_writecombine(vm_get_page_prot(vma->vm_flags));
vma->vm_page_prot = pgprot_decrypted(vma->vm_page_prot);
}

return 0;

err_drm_gem_object_put:
drm_gem_object_put(obj);
return ret;
}