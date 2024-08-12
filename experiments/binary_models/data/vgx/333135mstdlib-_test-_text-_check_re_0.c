static void FUN1(const VAR1 *VAR2, const char *VAR3, size_t VAR4, size_t VAR5, ...)
{
VAR6 *VAR7;
M_bool        VAR8;
va_list       VAR9;
size_t        VAR10;
size_t        VAR11;
size_t        VAR12;
size_t        VAR13;
size_t        VAR14;
size_t        VAR15;

VAR8 = FUN2(VAR2, VAR3, &VAR7);
FUN3(VAR8 == VAR16, "", VAR4);
FUN3(VAR7 != NULL, "", VAR4);

FUN4(VAR9, VAR5);
for (VAR15=0; VAR15<VAR5; VAR15++) {
VAR10    = (VAR17)FUN5(VAR9, int);
VAR11 = (VAR17)FUN5(VAR9, int);
VAR12    = (VAR17)FUN5(VAR9, int);

VAR8 = FUN6(VAR7, VAR10, &VAR13, &VAR14);
FUN3(VAR8 == VAR16, "", VAR4, VAR10);

FUN3(VAR13 == VAR11, "", VAR4, VAR10, VAR13, VAR11);
FUN3(VAR14 == VAR12, "", VAR4, VAR10, VAR14, VAR12);
}
FUN7(VAR9);

FUN8(VAR7);
}