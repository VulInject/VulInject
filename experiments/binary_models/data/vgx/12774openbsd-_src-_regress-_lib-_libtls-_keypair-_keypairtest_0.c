static int
FUN1(void)
{
size_t VAR1, VAR2, VAR3;
const VAR4 *VAR5, *VAR6, *VAR7;
VAR8 *VAR9 = NULL;
struct VAR10 *VAR11;
struct tls_error VAR12;
int VAR13 = 1;

FUN2(VAR14, &VAR5, &VAR1);
FUN2(VAR15, &VAR6, &VAR2);
FUN2(VAR16, &VAR7, &VAR3);

if ((VAR11 = FUN3()) == NULL) {
fprintf(VAR17, "");
goto VAR18;
}

if (FUN4(VAR11, &VAR12, VAR14) == -1) {
fprintf(VAR17, "",
VAR12.VAR19);
goto VAR18;
}
if (FUN5(VAR11, &VAR12, VAR15) == -1) {
fprintf(VAR17, "", VAR12.VAR19);
goto VAR18;
}
if (FUN6(VAR11, &VAR12, VAR16) == -1) {
fprintf(VAR17, "",
VAR12.VAR19);
goto VAR18;
}

if (FUN7("", VAR5, VAR1, VAR11->VAR20,
VAR11->VAR1) == -1)
goto VAR18;
if (FUN7("", VAR6, VAR2, VAR11->VAR21, VAR11->VAR1) == -1)
goto VAR18;
if (FUN7("", VAR7, VAR3,
VAR11->VAR7, VAR11->VAR3) == -1)
goto VAR18;
if (strcmp(VAR11->VAR22, VAR23) != 0) {
fprintf(VAR17, "",
VAR11->VAR22, VAR23);
goto VAR18;
}

FUN8(VAR11);

if (VAR11->VAR21 != NULL || VAR11->VAR2 != 0) {
fprintf(VAR17, "",
VAR11->VAR21, VAR11->VAR2);
goto VAR18;
}

if (FUN9(VAR11, &VAR12, VAR5, VAR1) == -1) {
fprintf(VAR17, "", VAR12.VAR19);
goto VAR18;
}
if (FUN10(VAR11, &VAR12, VAR6, VAR2) == -1) {
fprintf(VAR17, "", VAR12.VAR19);
goto VAR18;
}
if (FUN11(VAR11, &VAR12, VAR7,
VAR3) == -1) {
fprintf(VAR17, "", VAR12.VAR19);
goto VAR18;
}
if (FUN7("", VAR5, VAR1, VAR11->VAR20,
VAR11->VAR1) == -1)
goto VAR18;
if (FUN7("", VAR6, VAR2, VAR11->VAR21, VAR11->VAR1) == -1)
goto VAR18;
if (FUN7("", VAR7, VAR3,
VAR11->VAR7, VAR11->VAR3) == -1)
goto VAR18;
if (strcmp(VAR11->VAR22, VAR23) != 0) {
fprintf(VAR17, "",
VAR11->VAR22, VAR23);
goto VAR18;
}

if (FUN12(VAR11, &VAR12, &VAR9) == -1) {
fprintf(VAR17, "",
VAR12.VAR19);
goto VAR18;
}

FUN8(VAR11);

if (VAR11->VAR21 != NULL || VAR11->VAR2 != 0) {
fprintf(VAR17, "",
VAR11->VAR21, VAR11->VAR2);
goto VAR18;
}

VAR13 = 0;

VAR18:
FUN13(VAR11);
FUN14(VAR9);
free((VAR4 *)VAR5);
free((VAR4 *)VAR6);
free((VAR4 *)VAR7);

return (VAR13);
}