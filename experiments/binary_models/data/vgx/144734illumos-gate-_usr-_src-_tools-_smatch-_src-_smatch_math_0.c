static bool FUN1(struct VAR1 *VAR2, int VAR3, int *VAR4, struct VAR5 **VAR6, VAR7 *VAR8)
{
struct VAR9 *VAR10;

if (!VAR2)
return false;

VAR2 = FUN2((struct VAR11 *)VAR2->VAR12);
if (VAR2->VAR13 == VAR14) {
if (VAR2->VAR15 &&
VAR2->VAR15->VAR13 == VAR16)
VAR10 = VAR2->VAR15->VAR9;
else
return false;
} else if (VAR2->VAR13 == VAR16) {
VAR10 = VAR2->VAR9;
} else {
return false;
}
return FUN3(VAR10, VAR3, VAR4, VAR6, VAR8);
}