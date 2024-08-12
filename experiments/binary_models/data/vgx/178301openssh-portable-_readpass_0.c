struct VAR1 *
FUN1(int VAR2, const char *VAR3, ...)
{
va_list VAR4;
char *VAR5 = NULL;
pid_t VAR6 = -1;
void (*VAR7)(int) = NULL;
const char *VAR8, *VAR9;
struct VAR1 *VAR10 = NULL;

FUN2(VAR4, VAR3);
FUN3(&VAR5, VAR3, VAR4);
FUN4(VAR4);

if (FUN5(NULL) != 0)
FUN6("", strerror(VAR11));
if (!VAR2 && FUN7(VAR12)) {
FUN8(VAR5);
goto VAR13;
}
if ((VAR8 = getenv("")) == NULL)
VAR8 = VAR14;
if (*VAR8 == '') {
FUN9("");
goto VAR15;
}
if (getenv("") == NULL &&
((VAR9 = getenv(VAR16)) == NULL ||
strcmp(VAR9, "") != 0)) {
FUN9("");
goto VAR15;
}
VAR7 = FUN10(VAR17, VAR18);
if ((VAR6 = FUN11()) == -1) {
FUN6("", strerror(VAR11));
FUN10(VAR17, VAR7);
free(VAR5);
return NULL;
}
if (VAR6 == 0) {
if (FUN12(1, 1, 0) == -1)
FUN13("");
FUN14(VAR12 + 1);
setenv("", "", 1); 
execlp(VAR8, VAR8, VAR5, (char *)NULL);
FUN6("", VAR8, strerror(VAR11));
FUN15(1);

}
VAR13:
if ((VAR10 = calloc(1, sizeof(*VAR10))) == NULL) {
if (VAR6 != -1)
FUN16(VAR6, VAR19);
FUN13("");
}
VAR10->VAR6 = VAR6;
VAR10->VAR7 = VAR7;
VAR15:
free(VAR5);
return VAR10;
}