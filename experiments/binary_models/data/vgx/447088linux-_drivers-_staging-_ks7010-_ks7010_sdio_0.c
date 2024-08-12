static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
unsigned long VAR5)
{
struct VAR6 *VAR7;
int VAR8;

VAR7 = (struct VAR6 *)VAR4;

if (FUN2(VAR7->VAR9) < VAR10 ||
FUN2(VAR7->VAR9) > VAR11) {
FUN3(VAR2->VAR12, "", VAR7->VAR9);
return 0;
}

VAR8 = FUN4(VAR2, VAR13, VAR4, VAR5);
if (VAR8) {
FUN3(VAR2->VAR12, "");
return VAR8;
}

VAR8 = FUN5(VAR2, VAR14, VAR15);
if (VAR8) {
FUN3(VAR2->VAR12, "");
return VAR8;
}

return 0;
}