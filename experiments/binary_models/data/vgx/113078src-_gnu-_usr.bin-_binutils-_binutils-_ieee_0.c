FUN1 (struct VAR1 *VAR2, const VAR3 **VAR4)
{
const VAR3 *VAR5;
bfd_vma VAR6;
const char *VAR7;
unsigned long VAR8;

VAR5 = *VAR4;

if (! FUN2 (VAR2, VAR4, &VAR6)
|| ! FUN3 (VAR2, VAR4, &VAR7, &VAR8))
return VAR9;

if (VAR6 < 32)
{
FUN4 (VAR2, VAR5, FUN5(""));
return VAR9;
}
VAR6 -= 32;

if (VAR6 >= VAR2->VAR10.VAR11)
{
unsigned int VAR11;

VAR11 = VAR2->VAR10.VAR11;
if (VAR11 == 0)
VAR11 = 4;
while (VAR6 >= VAR11)
VAR11 *= 2;
VAR2->VAR10.VAR10 = ((struct VAR12 *)
xrealloc (VAR2->VAR10.VAR10,
VAR11 * sizeof *VAR2->VAR10.VAR10));
memset (VAR2->VAR10.VAR10 + VAR2->VAR10.VAR11, 0,
(VAR11 - VAR2->VAR10.VAR11) * sizeof *VAR2->VAR10.VAR10);
VAR2->VAR10.VAR11 = VAR11;
}

VAR2->VAR10.VAR10[VAR6].VAR7 = VAR7;
VAR2->VAR10.VAR10[VAR6].VAR8 = VAR8;

return VAR13;
}