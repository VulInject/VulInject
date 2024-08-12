static VAR1
FUN1(krb5_context VAR2)
{
const char *VAR3 = NULL;
char *VAR4 = NULL;

FUN2(&VAR5);
if (VAR6) {
FUN3(&VAR5);
if (VAR2)
FUN4(VAR2);
return 0;
}

if (VAR2)
VAR3 = FUN5(VAR2, NULL,
"", "",
NULL);
if (VAR3 == NULL) {
VAR3 = "";
VAR3 = "";
VAR3 = "";
}


if (FUN6(VAR2, VAR3, 0, &VAR4) == 0) {
VAR7 = dlopen(VAR4, VAR8|VAR9|VAR10);
free(VAR4);
}

if (VAR7 == NULL) {
FUN3(&VAR5);
FUN7(VAR2, VAR11,
FUN8("", ""),
VAR3);
return VAR11;
}

VAR6 = (VAR12)FUN9(VAR7, "");
VAR13 = (void (VAR14 *)(VAR15))
FUN9(VAR7, "");
VAR16 = (void (VAR14 *)(void))
FUN9(VAR7, "");
FUN3(&VAR5);
if (VAR6 == NULL) {
FUN7(VAR2, VAR11,
FUN8(""
"", ""), VAR3, FUN10());
FUN11(VAR7);
return VAR11;
}

return 0;
FUN3(&VAR5);
FUN7(VAR2, VAR11,
FUN8("", ""));
return VAR11;
}