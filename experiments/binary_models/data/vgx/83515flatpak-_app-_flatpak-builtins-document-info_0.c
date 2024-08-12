FUN1 (int argc, char **argv,
VAR1 *VAR2,
VAR3 **VAR4)
{
FUN2(VAR5) VAR6 = NULL;
FUN2(VAR7) VAR8 = NULL;
const char *VAR9;
VAR10 *VAR11;
g_autofree char *VAR12 = NULL;
g_autofree char *VAR13 = NULL;
g_autofree char *VAR14 = NULL;
g_autofree char *VAR15 = NULL;
g_autofree char *VAR16 = NULL;
const char *VAR17;
const char **VAR18;
FUN2(VAR19) VAR20 = NULL;
FUN2(VAR21) VAR22 = NULL;

VAR6 = FUN3 (FUN4(""));
FUN5 (VAR6, VAR23);

if (!FUN6 (VAR6, VAR24, &argc, &argv,
VAR25,
NULL, VAR2, VAR4))
return VAR26;

if (argc < 2)
return FUN7 (VAR6, FUN4(""), VAR4);

if (argc > 2)
return FUN7 (VAR6, FUN4(""), VAR4);

VAR9 = argv[1];
VAR13 = FUN8 (VAR9);

VAR8 = FUN9 (VAR27, NULL, VAR4);
if (VAR8 == NULL)
return VAR26;

VAR11 = FUN10 (VAR8, 0,
"",
"",
NULL, VAR4);
if (VAR11 == NULL)
return VAR26;

if (!FUN11 (VAR11, &VAR12,
NULL, VAR4))
return VAR26;

if (!FUN12 (VAR11, VAR9, &VAR14, NULL, VAR4))
return VAR26;

if (strcmp (VAR14, "") == 0)
{
FUN13 (FUN4(""));
return VAR28;
}

VAR15 = FUN14 (VAR12, VAR14, VAR13, NULL);

if (!FUN15 (VAR11, VAR14, &VAR16, &VAR20,
NULL, VAR4))
return VAR26;

VAR22 = FUN16 (VAR20);

FUN13 ("", VAR14);
FUN13 ("", VAR15);
FUN13 ("", VAR16);
if (FUN17 (VAR22) > 0)
FUN13 ("");
while (FUN18 (VAR22, "", &VAR17, &VAR18))
{
int VAR29;
FUN13 ("", VAR17);
for (VAR29 = 0; VAR18[VAR29]; VAR29++)
{
if (VAR29 > 0)
FUN13 ("");
FUN13 ("", VAR18[VAR29]);
}
FUN13 ("");
}

return VAR28;
}