static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);
u32 VAR8;

if (VAR5->VAR9 < 1) {
FUN3(VAR3, "");
return FUN4(-VAR10);
}

VAR8 = VAR5->VAR5[0];
if (VAR8 >= VAR11) {
FUN3(VAR3, "", VAR8);
return FUN4(-VAR10);
}

if (VAR7->VAR12 == VAR13 && VAR8 == VAR14) {
FUN3(VAR3, "", VAR8);
return FUN4(-VAR10);
}

return VAR7->VAR15[VAR8].VAR1;
}