static int FUN1(VAR1 *VAR2, int VAR3);


void
FUN2(VAR4 *VAR5)
{
VAR6	*VAR7 = &VAR5->VAR8;
int		VAR9;
int		VAR10;

FUN3(FUN4(&VAR5->VAR11));
FUN5(VAR5, "", VAR12);
if (VAR13 == VAR14) {
return;
}

VAR5->VAR15 = VAR14;
VAR9 = FUN6(VAR5->VAR16);
if (VAR9 == 0) {
FUN7(VAR5, "", VAR12,
VAR5->VAR17);
return;
}
VAR7->VAR18 = VAR9;
VAR7->VAR19 = FUN8((sizeof (VAR20) *
VAR7->VAR18), VAR21);
for (VAR10 = 0; VAR10 < VAR7->VAR18; VAR10++) {
VAR7->VAR19[VAR10].VAR22 = VAR23;
VAR7->VAR19[VAR10].VAR24 = VAR10;
VAR7->VAR19[VAR10].VAR25 = VAR5;
}
VAR5->VAR15 = VAR26;


VAR5->VAR27 = FUN9(VAR28,
(void *)VAR5, VAR29, "");

VAR5->VAR30 = FUN9(VAR31,
(void *)VAR5, VAR32, "");


VAR7->VAR33 = FUN10(VAR34, "", VAR5);
if (VAR7->VAR33 == NULL) {
FUN11(VAR5, "", VAR12);
}

FUN7(VAR5, "", VAR12,
VAR5->VAR17, VAR7->VAR18);
FUN5(VAR5, "", VAR12);
}