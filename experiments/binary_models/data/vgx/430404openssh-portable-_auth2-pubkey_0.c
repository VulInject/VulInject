static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const char *VAR5, const char *VAR6,
struct VAR7 **VAR8)
{
struct VAR1 *VAR9 = NULL;
VAR10 *VAR11 = NULL;
int VAR12, VAR13, VAR14 = 0;
int VAR15, VAR16 = 0, VAR17 = 0;
pid_t VAR18;
char *VAR19 = NULL, *VAR20 = NULL, *VAR21 = NULL;
char VAR22[32], *VAR23, *VAR24 = NULL, **VAR25 = NULL;
void (*VAR26)(int);

if (VAR8 != NULL)
*VAR8 = NULL;
if (VAR27.VAR28 == NULL)
return 0;
if (VAR27.VAR29 == NULL) {
FUN2("");
return 0;
}


VAR26 = FUN3(VAR30, VAR31);


VAR19 = FUN4(VAR27.VAR29,
"", VAR2->VAR32, (char *)NULL);
VAR9 = FUN5(VAR19);
if (VAR9 == NULL) {
FUN2(""%VAR33\"",
VAR19, strerror(VAR34));
goto VAR35;
}


if ((VAR20 = FUN6(VAR4, VAR27.VAR36,
VAR37)) == NULL) {
FUN7("");
goto VAR35;
}
if ((VAR12 = FUN8(VAR4, &VAR21)) != 0) {
FUN9(VAR12, "");
goto VAR35;
}


if (FUN10(VAR27.VAR28, &VAR17, &VAR25, 0) != 0) {
FUN2(""%VAR33\"",
VAR27.VAR28);
goto VAR35;
}
if (VAR17 == 0) {
FUN2(""%VAR33\"",
VAR27.VAR28);
goto VAR35;
}
snprintf(VAR22, sizeof(VAR22), "",
(unsigned long long)VAR2->VAR38);
for (VAR15 = 1; VAR15 < VAR17; VAR15++) {
VAR23 = FUN4(VAR25[VAR15],
"", VAR22,
"", VAR2->VAR32,
"", VAR2->VAR39,
"", FUN11(VAR4),
"", VAR20,
"", VAR21,
(char *)NULL);
if (VAR23 == NULL)
FUN12("");
free(VAR25[VAR15]);
VAR25[VAR15] = VAR23;
}

VAR24 = FUN13(VAR17, VAR25);


if (VAR17 == 1) {
VAR25 = FUN14(VAR25, VAR17 + 2, sizeof(*VAR25));
VAR25[1] = xstrdup(VAR2->VAR32);
VAR25[2] = NULL;

free(VAR24);
FUN15(&VAR24, "", VAR25[0], VAR25[1]);
}

if ((VAR18 = FUN16("", VAR24,
VAR17, VAR25, &VAR11,
VAR40|VAR41,
VAR9, VAR42, VAR43)) == 0)
goto VAR35;

VAR16 = 1;
FUN17(VAR9);

VAR13 = FUN18(VAR2, VAR11,
VAR27.VAR28, VAR4, VAR5,
VAR6, VAR8);

fclose(VAR11);
VAR11 = NULL;

if (FUN19(VAR18, "", VAR24, 0) != 0)
goto VAR35;


VAR14 = VAR13;
VAR35:
if (VAR11 != NULL)
fclose(VAR11);
FUN3(VAR30, VAR26);
for (VAR15 = 0; VAR15 < VAR17; VAR15++)
free(VAR25[VAR15]);
free(VAR25);
if (VAR16)
FUN20();
free(VAR24);
free(VAR19);
free(VAR20);
free(VAR21);
return VAR14;
}