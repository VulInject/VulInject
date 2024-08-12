static int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(&VAR2->VAR4, VAR5, VAR6,
VAR7, VAR8);
if (VAR3)
return VAR3;

if (!FUN3(&VAR2->VAR4))
return FUN4(VAR2);

VAR3 = FUN5(&VAR2->VAR9, 0, VAR10,
VAR8, 0);
if (VAR3)
return VAR3;

return FUN2(&VAR2->VAR4, VAR11, VAR12,
VAR13, VAR8);
}