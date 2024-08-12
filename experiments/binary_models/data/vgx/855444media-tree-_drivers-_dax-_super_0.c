int FUN1(struct VAR1 *VAR2, sector_t VAR3, size_t VAR4,
VAR5 *VAR6)
{
phys_addr_t VAR7 = (FUN2(VAR2) + VAR3) * 512;

if (VAR6)
*VAR6 = FUN3(VAR7);
if (VAR7 % VAR8 || VAR4 % VAR8)
return -VAR9;
return 0;
}