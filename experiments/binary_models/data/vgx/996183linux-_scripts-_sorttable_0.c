typedef void (*VAR1)(char *, int);


static void *FUN1(char const *VAR2, VAR3 *VAR4)
{
int VAR5;
struct stat VAR6;
void *VAR7 = NULL;

VAR5 = open(VAR2, VAR8);
if (VAR5 < 0) {
FUN2(VAR2);
return NULL;
}
if (FUN3(VAR5, &VAR6) < 0) {
FUN2(VAR2);
goto VAR9;
}
if (!FUN4(VAR6.VAR10)) {
fprintf(VAR11, "", VAR2);
goto VAR9;
}

VAR7 = FUN5(0, VAR6.VAR12, VAR13|VAR14, VAR15, VAR5, 0);
if (VAR7 == VAR16) {
fprintf(VAR11, "", VAR2);
goto VAR9;
}

*VAR4 = VAR6.VAR12;

VAR9:
close(VAR5);
return VAR7;
}