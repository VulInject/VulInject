static void
FUN1()
{
int VAR1;
int VAR2;
int VAR3 = sizeof (VAR4) / sizeof (VAR4[0]);


for (VAR2 = 0; VAR2 < VAR3; VAR2++) {
if (VAR4[VAR2].VAR5 != NULL)
free(VAR4[VAR2].VAR5);
}

VAR4[VAR6].VAR5 = strdup(FUN2(""));
VAR4[VAR7].VAR5 =
strdup(FUN2(""));
VAR4[VAR8].VAR5 = strdup(FUN2(""));
VAR4[VAR9].VAR5 =
strdup(FUN2(""));
VAR4[VAR10].VAR5 =
strdup(FUN2(""));
VAR4[VAR11].VAR5 =
strdup(FUN2(""));

for (VAR2 = 0; VAR2 < VAR3; VAR2++) {
if (VAR4[VAR2].VAR5 != NULL)
VAR4[VAR2].VAR12 =
1 + strlen(VAR4[VAR2].VAR5);
}


VAR1 = 0;
VAR13 = strdup(FUN2(""));
if (strlen(VAR13) >= VAR1)
VAR1 = 1 + strlen(VAR13);
VAR14 = strdup(FUN2(""));
if (strlen(VAR14) >= VAR1)
VAR1 = 1 + strlen(VAR14);

for (VAR2 = 0; VAR2 < sizeof (VAR15) / sizeof (VAR15[0]); VAR2++)
if (VAR15[VAR2] == -1)
VAR15[VAR2] = VAR1;


VAR1 = 0;
FUN3(VAR16, FUN2(""), &VAR1);
FUN3(VAR17, FUN2(""), &VAR1);
FUN3(VAR18, FUN2(""), &VAR1);
FUN3(VAR19, FUN2(""), &VAR1);
VAR15[VAR20] = VAR1;


VAR1 = 0;
FUN4(VAR21, FUN2(""), &VAR1);
FUN4(VAR22, FUN2(""), &VAR1);
FUN4(VAR23, FUN2(""), &VAR1);
FUN4(VAR24, FUN2(""), &VAR1);
FUN4(VAR25, FUN2(""), &VAR1);
VAR15[VAR26] = VAR1;


VAR15[VAR27] = VAR28;
}