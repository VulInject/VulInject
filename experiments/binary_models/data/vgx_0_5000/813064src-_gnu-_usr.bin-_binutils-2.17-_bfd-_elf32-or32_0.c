or32_elf_jumptarg_reloc (bfd *abfd,
arelent *reloc_entry,
asymbol *symbol ATTRIBUTE_UNUSED,
void * data,
asection *input_section,
bfd *output_bfd,
char **error_message ATTRIBUTE_UNUSED)
{
if (output_bfd != NULL)
{
unsigned long insn, tmp;
bfd_size_type addr = reloc_entry->address;

reloc_entry->address += input_section->output_offset;

insn = bfd_get_32 (abfd, (bfd_byte *) data + addr);
tmp = insn | 0xfc000000;
tmp -= (input_section->output_offset >> 2);
insn = (insn & 0xfc000000) | (tmp & 0x03ffffff);
bfd_put_32 (abfd, insn, (bfd_byte *) data + addr);

return bfd_reloc_ok;
}

return bfd_reloc_continue;
}