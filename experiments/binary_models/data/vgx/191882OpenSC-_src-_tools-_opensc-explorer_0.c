static int FUN1(int argc, char **argv)
{
int VAR1, VAR2 = 1;
unsigned int VAR3 = 0;
sc_path_t VAR4;
VAR5 *VAR6 = NULL;
int VAR7 = 1;
int VAR8 = 0;

if (argc > 2)
return FUN2(VAR9);

if (argc > 1)
VAR3 = (unsigned int) FUN3(argv[1], NULL, 10);

if (!argc) {
VAR4 = VAR10;
VAR6 = VAR11;
VAR7 = 0;
} else {
const char VAR12[] = "";

if (FUN4(argv[0], VAR12, strlen(VAR12)) == 0) {
const char *VAR13 = argv[0] + strlen(VAR12);

if(!VAR11) {
fprintf(VAR14, "");
goto VAR2;
}
VAR4 = VAR10;
VAR6 = VAR11;
VAR7 = 0;
VAR8 = FUN5(VAR13);
if ((VAR8 < 1) || (VAR8 > 30)) {
fprintf(VAR14, "", VAR13);
return FUN2(VAR9);
}
} else {
if (FUN6(argv[0], &VAR4, 0) != 0)
return FUN2(VAR9);

VAR1 = FUN7(VAR15);
if (VAR1 == VAR16)
VAR1 = FUN8(VAR15, &VAR4, &VAR6);
FUN9(VAR15);
if (VAR1) {
FUN10(VAR1, VAR17, "",
VAR11);
goto VAR2;
}
}
}
if (VAR6->VAR18 != VAR19 &&
!(VAR6->VAR18 == VAR20 && VAR8)) {
fprintf(VAR14, "");
goto VAR2;
}
if (VAR6->VAR21 == VAR22 && !VAR8) {
if (argc > 1) {
fprintf(VAR14, "");
goto VAR2;
}
FUN11(VAR6);
}
else
FUN12(VAR6, VAR8, VAR3);

VAR2 = 0;
VAR2:
if (VAR7) {
FUN13(VAR6);
FUN14();
}

return -VAR2;
}