int
FUN1(const char *VAR1, const VAR2 *VAR3, void *VAR4,
VAR5 *VAR6)
{
VAR7 *VAR8;
VAR9 *VAR10, *VAR11;
int VAR12;

*VAR6 = VAR13;


if (VAR1 == NULL) {
FUN2(VAR14, ""
"");
return (VAR15);
}

if (VAR3 == NULL ||
VAR3->VAR16 == NULL ||
VAR3->VAR17 == NULL ||
VAR3->VAR18 == NULL) {
FUN2(VAR14, ""
"", VAR1);
return (VAR15);
}

VAR8 = FUN3(sizeof (VAR7), VAR19);
VAR8->VAR20 = *VAR3;
VAR8->VAR21 = FUN4(strlen(VAR1) + 1, VAR19);
(void) strcpy(VAR8->VAR21, VAR1);
VAR8->VAR22 = VAR4;

FUN5(&VAR23);
FUN5(&VAR24);

if (VAR25 != NULL) {
FUN6(&VAR24);
FUN6(&VAR23);
FUN2(VAR14, ""
"", VAR1);
FUN7(VAR8->VAR21, strlen(VAR8->VAR21) + 1);
FUN7(VAR8, sizeof (VAR7));
return (VAR15);
}

VAR25 = VAR8;
*VAR6 = (VAR5)VAR8;



VAR10 = VAR26;
VAR26 = NULL;

FUN6(&VAR24);

while (VAR10 != NULL) {
for (VAR12 = 0; VAR12 < VAR10->VAR27; VAR12++) {
FUN8(&VAR10->VAR28[VAR12]->VAR29,
VAR10->VAR30);
}

VAR11 = VAR10->VAR31;
VAR10->VAR31 = NULL;
VAR10->VAR32 = NULL;
VAR10->VAR33 = 0;
VAR10 = VAR11;
}

FUN6(&VAR23);

return (0);
}