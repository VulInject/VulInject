static struct VAR1 *FUN1(struct VAR2 *VAR3, u16 VAR4,
u8 VAR5, VAR6 *VAR7)
{
struct VAR1 *VAR8, *VAR9, **VAR10;
struct VAR1 *VAR11 = NULL;

for (VAR9 = &VAR3->VAR12[0], VAR8 = &VAR3->VAR12[VAR3->VAR13]; VAR9 != VAR8; ++VAR9) {
if (FUN2(&VAR9->VAR14) == 0) {
if (!VAR11)
VAR11 = VAR9;
} else {
if (VAR9->VAR15 == VAR16) {
if (FUN3(VAR9->VAR7, VAR7) &&
(VAR9->VAR4 == VAR4) && (VAR9->VAR17 == VAR5))
goto VAR18;
}
}
}

if (VAR11) {
VAR9 = VAR11;
goto VAR19;
}

return NULL;

VAR19:

if (VAR9->VAR15 < VAR16)
for (VAR10 = &VAR3->VAR12[VAR9->VAR20].VAR21; *VAR10; VAR10 = &(*VAR10)->VAR22)
if (*VAR10 == VAR9) {
*VAR10 = VAR9->VAR22;
VAR9->VAR22 = NULL;
break;
}
VAR9->VAR15 = VAR23;

VAR18:
return VAR9;
}