int FUN1(const char *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5;
    char *VAR6, *VAR7, *VAR8, *VAR9;
    int VAR10;
    if (!VAR1)
        return FUN2(VAR3);
    VAR5 = FUN3();
    if (!VAR5)
        return FUN4(VAR11);
    if (!(VAR8 = VAR7 = FUN5(VAR1)))
        return FUN4(VAR11);
    while (1)
    {
        VAR6 = FUN6(VAR7, "", &VAR9);
        if (!VAR6)
            break;
        VAR10 = FUN7(VAR6, VAR5);
        if (VAR10 < 0)
            goto VAR12;
        VAR7 = NULL;
    }
    VAR10 = FUN8(&VAR5, VAR3);
VAR12:
    if (VAR10 < 0)
        FUN9(&VAR5);
    FUN10(VAR8);
    return VAR10;
}