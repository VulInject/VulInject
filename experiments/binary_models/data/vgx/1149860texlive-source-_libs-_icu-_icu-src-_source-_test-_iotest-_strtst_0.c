static void FUN1(const char *VAR1, const char *VAR2, ...) {
UChar VAR3[256];
UChar VAR4[256];
va_list VAR5;
int32_t VAR6;

FUN2(VAR5, VAR2);
VAR6 = FUN3(VAR3, VAR2, VAR5);
(void)VAR6;    
FUN4(VAR5);
FUN5(VAR4, VAR1);
if (FUN6(VAR3, VAR4) != 0) {
FUN7(""%VAR7\""%VAR7\"", VAR2, VAR1);
}

FUN5(VAR4, VAR2);
FUN2(VAR5, VAR2);
VAR6 = FUN8(VAR3, VAR4, VAR5);
FUN4(VAR5);
FUN5(VAR4, VAR1);
if (FUN6(VAR3, VAR4) != 0) {
FUN7(""%VAR7\""%VAR7\"", VAR2, VAR1);
}
}