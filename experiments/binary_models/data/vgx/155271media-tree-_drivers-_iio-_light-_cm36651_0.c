static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
struct VAR6 *VAR7 = FUN2(VAR5);
struct VAR8 *VAR9 = VAR7->VAR9;
int VAR10, VAR11;
u64 VAR12;


VAR11 = FUN3(VAR7->VAR13);
if (VAR11 < 0) {
FUN4(&VAR9->VAR14,
"", VAR15, VAR11);
return VAR16;
}
switch (VAR11) {
case VAR17:
VAR10 = VAR18;
break;
case VAR19:
VAR10 = VAR20;
break;
default:
FUN4(&VAR9->VAR14,
"", VAR15, VAR11);
return VAR16;
}

VAR12 = FUN5(VAR21,
VAR22,
VAR23, VAR10);

FUN6(VAR5, VAR12, FUN7(VAR5));

return VAR16;
}