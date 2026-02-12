LIST_HEAD(, acpi_memblock)	acpi_memhead;
int				acpi_memsig;

int
acpi_walkmem(int sig, const char *lbl)
{
struct acpi_memblock *sptr;

printf("--- walkmem:%s %x --- %lx bytes alloced\n", lbl, sig,
acpi_nalloc);
LIST_FOREACH(sptr, &acpi_memhead, link) {
if (sptr->sig < sig)
break;
printf("%.4x Alloc %.8lx bytes @ %s:%d\n",
sptr->sig, sptr->size, sptr->fn, sptr->line);
}
return acpi_memsig;
}