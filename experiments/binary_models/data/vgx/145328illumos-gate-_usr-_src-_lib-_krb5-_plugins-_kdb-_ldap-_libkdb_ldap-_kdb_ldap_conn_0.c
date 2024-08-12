static VAR1
FUN1(krb5_context VAR2, VAR3 *VAR4)
{
krb5_error_code             VAR5=0;
unsigned char               *VAR6=NULL;

if (VAR4->VAR7 == NULL) {
VAR5 = VAR8;

FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}

if (VAR4->VAR10 == NULL && VAR4->VAR11 == NULL) {
VAR5 = VAR8;

FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}

if (VAR4->VAR10 == NULL && VAR4->VAR11 !=
NULL && VAR4->VAR12 == NULL) {
if ((VAR5=FUN4(VAR2, VAR4, &VAR6)) != 0) {
FUN5(VAR2, FUN3(""), VAR5, VAR5);
goto VAR9;
}


if (!FUN6("", (char *)VAR6, 6)) {

VAR4->VAR12 = strdup((char *)VAR6 + strlen(""));
if (VAR4->VAR12 == NULL) {
VAR5 = VAR13;
FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}
if (VAR6[strlen((char *)VAR6) + 1] == '')
VAR4->VAR14 = NULL;
else {
VAR4->VAR14 = strdup((char *)VAR6 +
strlen((char *)VAR6) + 1);
if (VAR4->VAR14 == NULL) {
VAR5 = VAR13;
FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}
}
free(VAR6);
} else {
VAR4->VAR10 = (char *)VAR6;
if (VAR4->VAR10 == NULL) {
VAR5 = VAR8;
FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}
}
}


if (VAR4->VAR10 != NULL && strlen(VAR4->VAR10) == 0) {
VAR5 = VAR8;
FUN2(VAR2, VAR5, FUN3(""));
goto VAR9;
}

VAR9:
return VAR5;
}