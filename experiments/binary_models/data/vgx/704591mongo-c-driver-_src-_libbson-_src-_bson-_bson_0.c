FUN1 (const VAR1 *VAR2,
const char *VAR3,
size_t VAR4,
const char *VAR5,
void *VAR6)
{
VAR7 *VAR8 = VAR6;
char *VAR9;

FUN2 (VAR2);
FUN2 (VAR3);

VAR9 = FUN3 (VAR5, VAR4);

if (VAR9) {
FUN4 (VAR8->VAR10, """);
FUN4 (VAR8->VAR10, VAR9);
FUN4 (VAR8->VAR10, """);
FUN5 (VAR9);
return false;
}

return true;
}