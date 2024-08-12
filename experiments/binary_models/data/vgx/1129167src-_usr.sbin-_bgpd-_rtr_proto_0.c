void
FUN1(struct VAR1 *VAR2, size_t VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
time_t VAR8;
size_t VAR9 = 0;

for (VAR9 = 0; VAR9 < VAR3; VAR9++) {
if (VAR2[VAR9].VAR10 == 0)
continue;
FUN2(VAR5, &VAR11, VAR12)
if (VAR5->VAR13 == VAR2[VAR9].VAR13) {
FUN3(&VAR2[VAR9], VAR5);
break;
}
if (VAR5 == NULL)
FUN4("", VAR14);
}


VAR8 = FUN5();
FUN2(VAR5, &VAR11, VAR12)
if ((VAR7 = FUN6(&VAR5->VAR15, VAR8)) != NULL) {
FUN7("", FUN8(VAR5),
VAR16[VAR7->VAR17]);

FUN9(&VAR5->VAR15, VAR7->VAR17);
switch (VAR7->VAR17) {
case VAR18:
FUN10(VAR5, VAR19);
break;
case VAR20:
FUN10(VAR5, VAR21);
break;
case VAR22:
FUN10(VAR5, VAR23);
break;
default:
FUN11("");
}
}
}