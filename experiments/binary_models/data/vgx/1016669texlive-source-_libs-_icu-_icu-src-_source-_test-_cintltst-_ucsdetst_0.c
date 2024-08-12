static void FUN1(void)
{
UErrorCode VAR1 = VAR2;
static const char VAR3[] = "";
int32_t VAR4 = 0;
UChar VAR5[sizeof(VAR3)];
int32_t VAR6 = 0;
char *VAR7;
VAR8 *VAR9 = FUN2(&VAR1);
const VAR10 *VAR11;
const char *VAR12, *VAR13;

VAR4 = FUN3(VAR3, VAR5, sizeof(VAR3));
VAR7 = FUN4(VAR5, VAR4, "", &VAR6);

FUN5(VAR9, true);

if (!FUN6(VAR9)) {
FUN7("");
}


FUN8(VAR9, VAR7, VAR6, &VAR1);
VAR11 = FUN9(VAR9, &VAR1);

if (VAR11 == NULL) {
FUN7("");
goto VAR14;
}

VAR13 = FUN10(VAR11, &VAR1);

if (VAR13 == NULL || strcmp(VAR13, "") != 0) {
FUN7("", VAR13);
} else {
VAR12 = FUN11(VAR11, &VAR1);

if (VAR12 == NULL || strcmp(VAR12, "") != 0) {
FUN7("");
}
}

VAR14:
FUN5(VAR9, false);
FUN8(VAR9, VAR7, VAR6, &VAR1);
VAR11 = FUN9(VAR9, &VAR1);

if (VAR11 == NULL) {
FUN7("");
goto VAR15;
}

VAR13 = FUN10(VAR11, &VAR1);

if (VAR13 == NULL || strcmp(VAR13, "") != 0) {
FUN7("", VAR13);
} else {
VAR12 = FUN11(VAR11, &VAR1);

if (VAR12 == NULL || strcmp(VAR12, "") != 0) {
FUN7("");
}
}

VAR15:
FUN12(VAR7);
FUN13(VAR9);
}