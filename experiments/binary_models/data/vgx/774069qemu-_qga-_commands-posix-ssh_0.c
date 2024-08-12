static bool
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
size_t VAR7 = 0;
VAR1 *VAR8;

for (VAR8 = VAR2; VAR8 != NULL; VAR8 = VAR8->VAR9) {
if (!FUN2(VAR8->VAR10, VAR6)) {
return false;
}
VAR7++;
}

if (VAR4) {
*VAR4 = VAR7;
}
return true;
}