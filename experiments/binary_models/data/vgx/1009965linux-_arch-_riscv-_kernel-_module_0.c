static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
Elf_Addr VAR5)
{
ptrdiff_t VAR6 = (void *)VAR5 - (void *)VAR4;
u16 VAR7 = (VAR6 & 0x100) << (12 - 8);
u16 VAR8 = (VAR6 & 0xc0) >> (6 - 5);
u16 VAR9 = (VAR6 & 0x20) >> (5 - 2);
u16 VAR10 = (VAR6 & 0x18) << (12 - 5);
u16 VAR11 = (VAR6 & 0x6) << (12 - 10);

*(VAR12 *)VAR4 = (*(VAR12 *)VAR4 & 0xe383) |
VAR7 | VAR8 | VAR9 | VAR10 | VAR11;
return 0;
}