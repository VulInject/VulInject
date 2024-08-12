static int FUN1(int *VAR1, const char *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7, const char *VAR8, ...)
{
    int VAR9;
    char *VAR10;
    if (!VAR2 || !VAR2[0])
        goto VAR11;
    VAR12 = 0;
    VAR9 = FUN2(VAR2, &VAR10, 0);
    if (VAR9 < VAR4 || VAR9 > VAR5)
        goto VAR11;
    if (VAR3)
    {
        if (VAR9 == VAR13 || FUN3(VAR9) > VAR14 / FUN3(VAR3))
            goto VAR11;
        VAR9 *= VAR3;
    }
    if (VAR10[0] || VAR12)
        goto VAR11;
    if (VAR1)
        *VAR1 = VAR9;
    return 0;
VAR11:
    if (VAR7)
    {
        va_list VAR15;
        FUN4(VAR15, VAR8);
        FUN5(VAR7->VAR16, VAR7->VAR17, VAR18, &VAR7->VAR19, VAR8, VAR15);
        FUN6(VAR15);
    }
    return FUN7(VAR20);
}