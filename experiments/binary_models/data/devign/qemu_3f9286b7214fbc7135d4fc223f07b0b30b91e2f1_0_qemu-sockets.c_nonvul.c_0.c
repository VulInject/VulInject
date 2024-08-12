int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR3 *VAR8 = NULL;
    struct VAR9 *VAR10, *VAR11;
    int VAR12 = -1;
    bool VAR13;
    VAR14 *VAR15 = NULL;
    VAR10 = FUN2(VAR2, VAR4);
    if (!VAR10)
    {
        return -1;
    }
    if (VAR6 != NULL)
    {
        VAR15 = FUN3(sizeof(*VAR15));
        VAR15->VAR16 = VAR10;
        VAR15->VAR6 = VAR6;
        VAR15->VAR7 = VAR7;
    }
    for (VAR11 = VAR10; VAR11 != NULL; VAR11 = VAR11->VAR17)
    {
        FUN4(VAR8);
        VAR8 = NULL;
        if (VAR15 != NULL)
        {
            VAR15->VAR18 = VAR11;
        }
        VAR12 = FUN5(VAR11, &VAR13, VAR15, &VAR8);
        if (VAR12 >= 0)
        {
            break;
        }
    }
    if (VAR12 < 0)
    {
        FUN6(VAR4, VAR8);
    }
    else if (VAR13)
    {
        return VAR12;
    }
    else
    {
        if (VAR6)
        {
            FUN7(VAR12, VAR7);
        }
    }
    FUN8(VAR15);
    FUN9(VAR10);
    return VAR12;
}