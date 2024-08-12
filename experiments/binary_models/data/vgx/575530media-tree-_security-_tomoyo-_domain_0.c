void FUN1(struct VAR1 *VAR2,
bool (*VAR3) (struct VAR1 *,
const struct VAR4 *))
{
const struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR4 *VAR7;
bool VAR8 = false;
const struct VAR9 *VAR10 = &VAR6->VAR11;

VAR12:
FUN2(VAR7, VAR10, VAR10) {
if (VAR7->VAR13 || VAR7->VAR14 != VAR2->VAR15)
continue;
if (!FUN3(VAR2, VAR7))
continue;
if (!FUN4(VAR2, VAR7->VAR16))
continue;
VAR2->VAR17 = VAR7;
VAR2->VAR18 = true;
return;
}
if (!VAR8) {
VAR8 = true;
VAR10 = &VAR6->VAR19->VAR20[VAR6->VAR21];
goto VAR12;
}
VAR2->VAR18 = false;
}