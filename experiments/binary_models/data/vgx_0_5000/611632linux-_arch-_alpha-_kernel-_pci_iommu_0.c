int
iommu_reserve(struct pci_iommu_arena *arena, long pg_count, long align_mask) 
{
unsigned long flags;
unsigned long *ptes;
long i, p;

if (!arena) return -EINVAL;

spin_lock_irqsave(&arena->lock, flags);


ptes = arena->ptes;
p = iommu_arena_find_pages(NULL, arena, pg_count, align_mask);
if (p < 0) {
spin_unlock_irqrestore(&arena->lock, flags);
return -1;
}


for (i = 0; i < pg_count; ++i)
ptes[p+i] = IOMMU_RESERVED_PTE;

arena->next_entry = p + pg_count;
spin_unlock_irqrestore(&arena->lock, flags);

return p;
}