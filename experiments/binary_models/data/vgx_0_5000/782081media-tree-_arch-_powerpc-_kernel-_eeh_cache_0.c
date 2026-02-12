static void eeh_addr_cache_print(struct pci_io_addr_cache *cache)
{
struct rb_node *n;
int cnt = 0;

n = rb_first(&cache->rb_root);
while (n) {
struct pci_io_addr_range *piar;
piar = rb_entry(n, struct pci_io_addr_range, rb_node);
pr_debug("PCI: %s addr range %d [%pap-%pap]: %s\n",
(piar->flags & IORESOURCE_IO) ? "i/o" : "mem", cnt,
&piar->addr_lo, &piar->addr_hi, pci_name(piar->pcidev));
cnt++;
n = rb_next(n);
}
}