int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    const char *VAR5;
    VAR6 *VAR7;
    VAR6 *VAR8;
    VAR5 = FUN2(VAR2, "");
    if (VAR5 && FUN3(VAR5))
    {
        FUN4(false);
        return 1;
    }
    if (!VAR5 || !FUN5(VAR2))
    {
        return 0;
    }
    FUN6(&VAR5, &VAR4);
    if (VAR4)
    {
        goto VAR9;
    }
    VAR7 = FUN7(VAR5, &VAR4);
    if (VAR4)
    {
        goto VAR9;
    }
    for (VAR8 = VAR7; VAR8; VAR8 = VAR8->VAR10)
    {
        FUN8("", VAR5, VAR8->VAR11->VAR12, VAR8->VAR11->VAR13);
        if (VAR8->VAR11->VAR14)
        {
            FUN8("", VAR8->VAR11->VAR15);
        }
        else
        {
            FUN8("");
        }
    }
    FUN9(VAR7);
    return 1;
VAR9:
    FUN8("", FUN10(VAR4));
    FUN11(VAR4);
    return 1;
}