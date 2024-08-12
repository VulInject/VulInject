static int
FUN1(int argc, char **argv)
{
char VAR1[VAR2];
char VAR3[VAR2];
char VAR4[VAR2];
char VAR5[16];
int VAR6;
smb_inaddr_t VAR7;
char VAR8[VAR9];

VAR6 = FUN2(VAR10, VAR5, sizeof (VAR5));
if (VAR6 != VAR11) {
(void) fprintf(VAR12,
FUN3(""));
return (1);
}

if (FUN4(VAR1, sizeof (VAR1)) != 0) {
(void) fprintf(VAR12, FUN3(""),
VAR5);
return (1);
}

if (strcmp(VAR5, "") == 0) {
(void) FUN5(FUN3(""), VAR1);
return (0);
}

(void) FUN5(FUN3(""), VAR1);
if ((FUN6(VAR3, sizeof (VAR3)) == 0) && (*VAR3 != ''))
(void) FUN5(FUN3(""), VAR3);

if ((FUN7(VAR4, VAR2, &VAR7)
== VAR13) && (*VAR4 != '') &&
(!FUN8(&VAR7))) {
(void) FUN9(&VAR7, VAR8,
FUN10(VAR7.VAR14));
(void) FUN5(FUN3(""),
VAR4, VAR8);
}


FUN11();
return (0);
}