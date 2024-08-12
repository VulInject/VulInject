FUN1 (VAR1 *VAR2, bfd_vma VAR3, bfd_vma VAR4)
{
unsigned char *VAR5;
VAR1 *VAR6;
bfd_vma VAR7, VAR8;

if (VAR9 == 0)
{
return;
}
if (VAR3 < VAR10)
{
VAR3 = VAR10;
}
if (VAR4 > VAR11)
{
VAR4 = VAR11;
}
FUN2 (VAR12, FUN3 ("",
VAR2->VAR13, (unsigned long) VAR3,
(unsigned long) VAR4));

for (VAR7 = VAR3; VAR7 < VAR4; ++VAR7)
{
VAR5 = (unsigned char *) VAR9 + VAR7 - VAR14->VAR15;
if (FUN4 (VAR5))
{
FUN2 (VAR12,
FUN3 ("", (unsigned long) VAR7));


VAR8 = FUN5 (VAR16, VAR5 + 1) + VAR7 + 5;
if (VAR8 >= VAR10 && VAR8 <= VAR11)
{
VAR6 = FUN6 (&VAR17, VAR8);
if (VAR6 && VAR6->VAR18 == VAR8)
{

FUN2 (VAR12,
FUN3 ("",
(unsigned long) VAR8, VAR6->VAR13));
FUN7 (VAR2, VAR6, (unsigned long) 0);
VAR5 += 4;	
continue;
}
}

FUN2 (VAR12, FUN3 (""));
}
}
}