int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
const char *VAR7, const char *VAR8,
struct VAR3 *VAR9,
bool *VAR10)
{
*VAR10 = false;
if (VAR6->VAR11 == VAR12)
return 0;

if (!FUN2())
return 0;

*VAR10 = true;
if (VAR6->VAR11 != VAR13) {
return FUN3(VAR2, VAR4, VAR6, VAR7, VAR8,
VAR9);
}

return FUN4(VAR2, VAR4, VAR6, VAR7, VAR8,
VAR9);
}