static void FUN1(const char *VAR1, ...)
{
    va_list VAR2;
    char *VAR3;
    FUN2(VAR2, VAR1);
    VAR3 = FUN3(VAR1, VAR2);
    FUN4(VAR2);
    FUN5(VAR3);
    FUN6(VAR4, "");
    VAR5 = FUN7();