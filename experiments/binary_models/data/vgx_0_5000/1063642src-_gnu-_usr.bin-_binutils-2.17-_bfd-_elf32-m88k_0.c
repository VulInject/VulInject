elf32_m88k_print_private_bfd_data (abfd, ptr)
bfd *abfd;
PTR ptr;
{
FILE *file = (FILE *) ptr;
flagword eflags;

BFD_ASSERT (abfd != NULL && ptr != NULL);


_bfd_elf_print_private_bfd_data (abfd, ptr);

eflags = elf_elfheader (abfd)->e_flags;


fprintf (file, _("private flags = %lx:"), (long) eflags);

if (eflags & EF_NABI)
fprintf (file, _(" [not ABI]"));

if (eflags & EF_M88110)
fprintf (file, _(" [m88110]"));

fputc ('\n', file);

return TRUE;
}