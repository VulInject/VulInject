static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int (*VAR7)(VAR8 *VAR9, const char *VAR10, void **VAR11), const char *VAR12, VAR13 **VAR14)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR13 *VAR15 = NULL;
    void **VAR11 = FUN3(VAR9, VAR6);
    char *VAR10;
    int VAR16;
    if (VAR9->VAR17 != VAR18)
    {
        FUN4(VAR14, VAR19);
        return;
    }
    FUN5(VAR4, &VAR10, VAR12, &VAR15);
    if (VAR15)
    {
        FUN6(VAR14, VAR15);
        return;
    }
    if (!*VAR10)
    {
        FUN7(VAR10);
        *VAR11 = NULL;
        return;
    }
    VAR16 = FUN8(VAR9, VAR10, VAR11);
    FUN9(VAR14, VAR16, VAR9, VAR6, VAR10);
    FUN7(VAR10);
}