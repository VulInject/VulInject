static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, VAR6 **VAR7)
{
    int VAR8, VAR9;
    unsigned VAR10, VAR11;
    enum TiffTypes VAR12;
    if (VAR5 > 2)
    {
        return 0;
    }
    FUN2(VAR3, VAR4, &VAR10, &VAR12, &VAR11, &VAR9);
    if (!FUN3(VAR3))
    {
        FUN4(VAR3, VAR9, VAR13);
        return 0;
    }
    VAR8 = FUN5(VAR10);
    if (VAR8)
    {
        VAR8 = FUN6(VAR1, VAR3, VAR4, VAR5 + 1, VAR7);
    }
    else
    {
        const char *VAR14 = FUN7(VAR10);
        char *VAR15 = (char *)VAR14;
        if (!VAR15)
        {
            VAR15 = FUN8(7);
            if (!VAR15)
            {
                return FUN9(VAR16);
            }
            snprintf(VAR15, 7, "", VAR10);
        }
        VAR8 = FUN10(VAR1, VAR11, VAR12, VAR15, NULL, VAR3, VAR4, VAR7);
        if (!VAR14)
        {
            FUN11(&VAR15);
        }
    }
    FUN4(VAR3, VAR9, VAR13);
    return VAR8;
}