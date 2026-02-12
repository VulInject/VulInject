void arch_pick_mmap_layout(struct mm_struct *mm)
{
unsigned long random_factor = 0UL;

if (current->flags & PF_RANDOMIZE)
random_factor = arch_mmap_rnd();

if (radix_enabled())
return radix__arch_pick_mmap_layout(mm, random_factor);

if (mmap_is_legacy()) {
mm->mmap_base = TASK_UNMAPPED_BASE;
mm->get_unmapped_area = arch_get_unmapped_area;
} else {
mm->mmap_base = mmap_base(random_factor);
mm->get_unmapped_area = arch_get_unmapped_area_topdown;
}
}