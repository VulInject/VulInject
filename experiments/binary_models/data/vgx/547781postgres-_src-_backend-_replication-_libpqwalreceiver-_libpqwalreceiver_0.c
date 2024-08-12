static char *
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;
VAR3 *VAR5;
PQExpBufferData VAR6;
char	   *VAR7;

FUN2(VAR2->VAR8 != NULL);

FUN3(&VAR6);
VAR4 = FUN4(VAR2->VAR8);

if (VAR4 == NULL)
FUN5(VAR9,
(FUN6(VAR10),
FUN7("",
FUN8(""))));


for (VAR5 = VAR4; VAR5->VAR11 != NULL; VAR5++)
{
bool		VAR12;


if (strchr(VAR5->VAR13, '') ||
VAR5->VAR14 == NULL ||
VAR5->VAR14[0] == '')
continue;


VAR12 = strchr(VAR5->VAR13, '') != NULL;

FUN9(&VAR6, "",
VAR6.VAR15 == 0 ? "" : "",
VAR5->VAR11,
VAR12 ? "" : VAR5->VAR14);
}

FUN10(VAR4);

VAR7 = FUN11(VAR6) ? NULL : FUN12(VAR6.VAR16);
FUN13(&VAR6);
return VAR7;
}