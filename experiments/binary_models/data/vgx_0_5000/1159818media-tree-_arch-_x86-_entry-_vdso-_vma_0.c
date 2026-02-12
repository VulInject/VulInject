int map_vdso_once(const struct vdso_image *image, unsigned long addr)
{
struct mm_struct *mm = current->mm;
struct vm_area_struct *vma;

down_write(&mm->mmap_sem);

for (vma = mm->mmap; vma; vma = vma->vm_next) {
if (vma_is_special_mapping(vma, &vdso_mapping) ||
vma_is_special_mapping(vma, &vvar_mapping)) {
up_write(&mm->mmap_sem);
return -EEXIST;
}
}
up_write(&mm->mmap_sem);

return map_vdso(image, addr);
}