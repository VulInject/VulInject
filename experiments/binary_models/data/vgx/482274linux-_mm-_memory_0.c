int FUN1(struct VAR1 *VAR2, phys_addr_t VAR3, unsigned long VAR4)
{
unsigned long VAR5, VAR6, VAR7;


if (VAR3 + VAR4 < VAR3)
return -VAR8;

VAR4 += VAR3 & ~VAR9;
VAR6 = VAR3 >> VAR10;
VAR7 = (VAR4 + ~VAR9) >> VAR10;
if (VAR6 + VAR7 < VAR6)
return -VAR8;


if (VAR2->VAR11 > VAR7)
return -VAR8;
VAR6 += VAR2->VAR11;
VAR7 -= VAR2->VAR11;


VAR5 = VAR2->VAR12 - VAR2->VAR13;
if (VAR5 >> VAR10 > VAR7)
return -VAR8;


return FUN2(VAR2, VAR2->VAR13, VAR6, VAR5, VAR2->VAR14);
}