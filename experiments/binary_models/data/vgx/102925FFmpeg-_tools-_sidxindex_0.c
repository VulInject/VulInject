static int FUN1(struct VAR1 *VAR2, int VAR3,
const char *VAR4)
{
int VAR5 = 0;
VAR6 *VAR7 = NULL;
int VAR8;

if ((VAR5 = FUN2(&VAR7, VAR4, VAR9, NULL, NULL)) < 0)
goto VAR10;

while (!VAR7->VAR11) {
int64_t VAR12 = FUN3(VAR7);
int32_t VAR13, VAR14;

VAR13 = FUN4(VAR7);
VAR14  = FUN4(VAR7);
if (VAR13 < 8)
break;
if (VAR14 == FUN5('', '', '', '')) {
for (VAR8 = VAR3; VAR8 < VAR2->VAR15; VAR8++) {
struct VAR16 *VAR17 = VAR2->VAR2[VAR8];
if (!VAR17->VAR18) {
VAR17->VAR18  = VAR12;
VAR17->VAR19 = VAR13;
} else if (VAR12 == VAR17->VAR18 + VAR17->VAR19) {
VAR17->VAR19 = VAR12 + VAR13 - VAR17->VAR18;
}
}
}
if (FUN6(VAR7, VAR12 + VAR13, VAR20) != VAR12 + VAR13)
break;
}

VAR10:
if (VAR7)
FUN7(VAR7);
return VAR5;
}