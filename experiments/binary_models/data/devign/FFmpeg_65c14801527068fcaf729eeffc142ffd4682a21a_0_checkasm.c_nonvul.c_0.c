void FUN1(const char *VAR1, ...)
{
    static int VAR2, VAR3, VAR4;
    if (VAR5.VAR6 > VAR2)
    {
        int VAR7 = VAR4 + 4;
        va_list VAR8;
        FUN2();
        VAR7 -= fprintf(VAR9, "", VAR5.VAR10);
        FUN3(VAR8, VAR1);
        VAR7 -= FUN4(VAR9, VAR1, VAR8);
        FUN5(VAR8);
        fprintf(VAR9, "", FUN6(VAR7, 0) + 2, '');
        if (VAR5.VAR11 == VAR3)
            FUN7(VAR12, "");
        else
            FUN7(VAR13, "");
        fprintf(VAR9, "");
        VAR2 = VAR5.VAR6;
        VAR3 = VAR5.VAR11;
    }
    else if (!VAR5.VAR14)
    {
        int VAR15 = strlen(VAR5.VAR10);
        va_list VAR8;
        FUN3(VAR8, VAR1);
        VAR15 += vsnprintf(NULL, 0, VAR1, VAR8);
        FUN5(VAR8);
        if (VAR15 > VAR4)
            VAR4 = VAR15;
    }
}