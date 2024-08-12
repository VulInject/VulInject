static bool FUN1(void VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5)
{
struct VAR6 *VAR7;

if (!VAR4)
return false;

FUN2(VAR7, &VAR4->VAR8, VAR9) {
unsigned long VAR10 = VAR7->VAR11;

if (FUN3(VAR7->VAR11, VAR7->VAR12))
return false;


if (!FUN4((void VAR1 *)VAR10, VAR7->VAR12))
return false;
else if (VAR5 && !FUN5(VAR2,
VAR7->VAR13,
VAR7->VAR12))
return false;
}
return true;
}