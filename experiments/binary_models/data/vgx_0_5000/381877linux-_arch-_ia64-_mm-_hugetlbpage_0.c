pte_t *
huge_pte_alloc(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, unsigned long sz)
{
unsigned long taddr = htlbpage_to_page(addr);
pgd_t *pgd;
p4d_t *p4d;
pud_t *pud;
pmd_t *pmd;
pte_t *pte = NULL;

pgd = pgd_offset(mm, taddr);
p4d = p4d_offset(pgd, taddr);
pud = pud_alloc(mm, p4d, taddr);
if (pud) {
pmd = pmd_alloc(mm, pud, taddr);
if (pmd)
pte = pte_alloc_map(mm, pmd, taddr);
}
return pte;
}