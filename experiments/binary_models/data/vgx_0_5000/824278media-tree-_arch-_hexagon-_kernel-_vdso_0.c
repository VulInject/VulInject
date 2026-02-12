}
arch_initcall(vdso_init);


int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
{
int ret;
unsigned long vdso_base;
struct mm_struct *mm = current->mm;

if (down_write_killable(&mm->mmap_sem))
return -EINTR;


vdso_base = STACK_TOP;

vdso_base = get_unmapped_area(NULL, vdso_base, PAGE_SIZE, 0, 0);
if (IS_ERR_VALUE(vdso_base)) {
ret = vdso_base;
goto up_fail;
}


ret = install_special_mapping(mm, vdso_base, PAGE_SIZE,
VM_READ|VM_EXEC|
VM_MAYREAD|VM_MAYWRITE|VM_MAYEXEC,
&vdso_page);

if (ret)
goto up_fail;

mm->context.vdso = (void *)vdso_base;

up_fail:
up_write(&mm->mmap_sem);
return ret;
}