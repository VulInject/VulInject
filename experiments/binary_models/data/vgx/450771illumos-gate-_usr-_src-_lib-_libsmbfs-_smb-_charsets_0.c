char *
FUN1(const char *VAR1)
{
CFStringRef VAR2;
CFIndex VAR3;
char *VAR4;

VAR2 = FUN2(NULL, VAR1,
VAR5);
if (VAR2 == NULL) {
FUN3(""%VAR2\"", -1,
VAR1);
return NULL;
}

VAR3 = FUN4(FUN5(VAR2),
FUN6()) + 1;
VAR4 = malloc(VAR3);
if (VAR4 == NULL) {
FUN3(""%VAR2\"", -1,
VAR1);
FUN7(VAR2);
return NULL;
}
if (!FUN8(VAR2, VAR4, VAR3,
FUN6())) {
FUN3(""%VAR2\"",
-1, VAR1);
FUN7(VAR2);
return NULL;
}
FUN7(VAR2);
return VAR4;
return (strdup((char*)VAR1));
}