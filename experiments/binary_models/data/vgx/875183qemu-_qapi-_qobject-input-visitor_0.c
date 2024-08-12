static const char *FUN1(VAR1 *VAR2,
const char *VAR3,
VAR4 **VAR5)
{
VAR6 *VAR7;
VAR8 *VAR9;

VAR7 = FUN2(VAR2, VAR3, true, VAR5);
if (!VAR7) {
return NULL;
}

VAR9 = FUN3(VAR8, VAR7);
if (!VAR9) {
switch (FUN4(VAR7)) {
case VAR10:
case VAR11:
FUN5(VAR5, "",
FUN6(VAR2, VAR3));
return NULL;
default:

FUN5(VAR5, "",
FUN6(VAR2, VAR3));
return NULL;
}
}

return FUN7(VAR9);
}