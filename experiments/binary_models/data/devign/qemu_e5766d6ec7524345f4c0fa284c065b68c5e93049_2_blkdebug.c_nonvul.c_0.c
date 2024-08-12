static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = NULL;
    int VAR10;
    struct add_rule_data VAR11;
    VAR6 *VAR12 = NULL;
    if (VAR3)
    {
        VAR9 = fopen(VAR3, "");
        if (VAR9 == NULL)
        {
            FUN2(VAR7, VAR13, "");
            return -VAR13;
        }
        VAR10 = FUN3(VAR9, VAR14, VAR3);
        if (VAR10 < 0)
        {
            FUN4(VAR7, "");
            goto VAR15;
        }
    }
    FUN5(VAR5, VAR14, &VAR12);
    if (VAR12)
    {
        FUN6(VAR7, VAR12);
        VAR10 = -VAR16;
        goto VAR15;
    }
    VAR11.VAR2 = VAR2;
    VAR11.VAR17 = VAR18;
    FUN7(&VAR19, VAR20, &VAR11, &VAR12);
    if (VAR12)
    {
        FUN6(VAR7, VAR12);
        VAR10 = -VAR16;
        goto VAR15;
    }
    VAR11.VAR17 = VAR21;
    FUN7(&VAR22, VAR20, &VAR11, &VAR12);
    if (VAR12)
    {
        FUN6(VAR7, VAR12);
        VAR10 = -VAR16;
        goto VAR15;
    }
    VAR10 = 0;
VAR15:
    FUN8(&VAR19);
    FUN8(&VAR22);
    if (VAR9)
    {
        fclose(VAR9);
    }
    return VAR10;
}