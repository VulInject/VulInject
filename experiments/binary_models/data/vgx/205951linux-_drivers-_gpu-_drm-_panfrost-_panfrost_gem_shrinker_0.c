static unsigned long
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5 =
FUN2(VAR1, struct VAR4, VAR1);
struct VAR6 *VAR7;
unsigned long VAR8 = 0;

if (!FUN3(&VAR5->VAR9))
return 0;

FUN4(VAR7, &VAR5->VAR10, VAR11) {
if (FUN5(VAR7))
VAR8 += VAR7->VAR12.VAR13 >> VAR14;
}

FUN6(&VAR5->VAR9);

return VAR8;
}