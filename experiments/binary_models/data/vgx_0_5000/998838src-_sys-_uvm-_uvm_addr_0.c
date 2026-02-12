int
uaddr_stack_brk_select(struct vm_map *map, struct uvm_addr_state *uaddr,
struct vm_map_entry **entry_out, vaddr_t *addr_out,
vsize_t sz, vaddr_t align, vaddr_t offset,
vm_prot_t prot, vaddr_t hint)
{
vaddr_t			start;
vaddr_t			end;
vsize_t			before_gap;
vsize_t			after_gap;
int			dir;


start = MAX(map->b_start, uaddr->uaddr_minaddr);
end = MIN(map->b_end, uaddr->uaddr_maxaddr);
before_gap = 0;
after_gap = 0;
dir = -1;	

if (end - start >= sz) {
if (uvm_addr_linsearch(map, uaddr, entry_out, addr_out,
0, sz, align, offset, dir, start, end - sz,
before_gap, after_gap) == 0)
return 0;
}


start = MAX(map->s_start, uaddr->uaddr_minaddr);
end = MIN(map->s_end, uaddr->uaddr_maxaddr);
before_gap = ((arc4random() & 0x3) + 1) << PAGE_SHIFT;
after_gap = ((arc4random() & 0x3) + 1) << PAGE_SHIFT;
dir = -1;
dir =  1;
if (end - start >= before_gap + after_gap &&
end - start - before_gap - after_gap >= sz) {
if (uvm_addr_linsearch(map, uaddr, entry_out, addr_out,
0, sz, align, offset, dir, start, end - sz,
before_gap, after_gap) == 0)
return 0;
}

return ENOMEM;
}