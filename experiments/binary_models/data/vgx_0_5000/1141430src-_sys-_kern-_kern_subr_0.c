static inline int check_copyin(struct proc *, const void *, size_t);
extern int _copyinstr(const void *, void *, size_t, size_t *);
extern int _copyin(const void *uaddr, void *kaddr, size_t len);


static inline int
check_copyin(struct proc *p, const void *vstart, size_t len)
{
struct vm_map *map = &p->p_vmspace->vm_map;
const vaddr_t start = (vaddr_t)vstart;
const vaddr_t end = start + len;
int i, max;


max = map->check_copyin_count;
membar_consumer();
for (i = 0; i < max; i++) {
vaddr_t s = map->check_copyin[i].start;
vaddr_t e = map->check_copyin[i].end;
if ((start >= s && start < e) || (end > s && end < e))
return EFAULT;
}
return (0);
}