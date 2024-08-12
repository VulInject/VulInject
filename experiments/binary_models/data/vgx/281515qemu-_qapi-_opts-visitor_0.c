static bool
FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
GHashTableIter VAR7;
VAR8 *VAR9;

if (VAR6->VAR10 > 1) {
return true;
}


FUN3(&VAR7, VAR6->VAR11);
if (FUN4(&VAR7, NULL, (void **)&VAR9)) {
const VAR12 *VAR13;

VAR13 = FUN5(VAR9);
FUN6(VAR4, VAR14, VAR13->VAR15);
return false;
}
return true;
}