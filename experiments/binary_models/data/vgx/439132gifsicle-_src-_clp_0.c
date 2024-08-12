static int
FUN1(VAR1 *VAR2, int VAR3, int *VAR4,
const VAR5 *VAR6, const VAR7 *VAR8,
const char *VAR9, const char *VAR10, ...)
{
VAR11 *VAR12 = VAR2->VAR13;
Clp_BuildString VAR14;
int VAR15;
va_list VAR16;

FUN2(VAR16, VAR10);
FUN3(&VAR14, VAR2);
FUN4(VAR2, &VAR14, VAR10, VAR16);
FUN5(&VAR14, "", 1);

FUN6(&VAR14, VAR2);
FUN5(&VAR14, "", -1);

for (VAR15 = 0; VAR15 < VAR3 && VAR15 < VAR17; VAR15++) {
int VAR18 = VAR4[VAR15];
const char *VAR19 = "";
if (VAR18 < 0)
VAR18 = -(VAR18 + 1), VAR19 = "";
if (VAR15 == 0)
FUN5(&VAR14, "", 1);
else if (VAR15 == VAR3 - 1)
FUN5(&VAR14, (VAR15 == 1 ? "" : ""), -1);
else
FUN5(&VAR14, "", 2);
FUN5(&VAR14, (VAR12->VAR20 ? "" : ""), -1);
FUN5(&VAR14, VAR9, -1);
FUN5(&VAR14, VAR19, -1);
FUN5(&VAR14, VAR6[VAR18].VAR21 + VAR8[VAR18].VAR22, -1);
FUN5(&VAR14, (VAR12->VAR20 ? "" : ""), -1);
}

if (VAR3 > VAR17)
FUN5(&VAR14, "", -1);
FUN5(&VAR14, "", -1);
FUN7(VAR16);

FUN8(VAR2, &VAR14);
FUN9(&VAR14);
return 0;
}