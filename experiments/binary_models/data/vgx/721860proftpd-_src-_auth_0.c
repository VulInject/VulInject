const char *FUN1(VAR1 *VAR2, const char *VAR3) {
VAR4 *VAR5;
const char *VAR6;

if (VAR2 == NULL ||
VAR3 == NULL) {
VAR7 = VAR8;
return NULL;
}

VAR6 = VAR3;

VAR5 = FUN2(VAR9->VAR10, VAR11, "", VAR12);
if (VAR5 == NULL) {
return VAR6;
}

if (*((int *) VAR5->argv[0]) == VAR12) {
return VAR6;
}



(void) FUN3(VAR13.VAR14, "", NULL);
if (FUN4(VAR13.VAR14, "",
FUN5(VAR2, VAR3), 0) < 0) {
FUN6(VAR15, 3,
"", strerror(VAR7));
return VAR6;
}

FUN7("", NULL);

VAR6 = FUN8(VAR13.VAR14, "", NULL);
if (VAR6 == NULL) {
FUN6(VAR15, 3,
"", strerror(VAR7));
return VAR3;
}

(void) FUN3(VAR13.VAR14, "", NULL);

FUN9(VAR16, ""
"", VAR6, VAR3);
FUN6(VAR15, 9, ""
"", VAR6, VAR3);

return VAR6;
}