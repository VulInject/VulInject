static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9, *VAR10;
    VAR9 = FUN2(VAR3);
    assert(VAR9 && VAR9->VAR11 == VAR12);
    VAR7 = FUN3();
    VAR10 = FUN4(VAR3);
    if (VAR10 == NULL)
    {
        FUN5(VAR3, NULL, "");
        goto VAR13;
    }
    if (VAR10->VAR11 != VAR14)
    {
        VAR1 *VAR15;
        VAR15 = FUN6(VAR3, VAR5);
        if (VAR15 == NULL)
        {
            FUN5(VAR3, VAR9, "");
            goto VAR13;
        }
        FUN7(VAR7, VAR15);
        VAR9 = FUN2(VAR3);
        if (VAR9 == NULL)
        {
            FUN5(VAR3, NULL, "");
            goto VAR13;
        }
        while (VAR9->VAR11 != VAR14)
        {
            if (VAR9->VAR11 != VAR16)
            {
                FUN5(VAR3, VAR9, "");
                goto VAR13;
            }
            VAR15 = FUN6(VAR3, VAR5);
            if (VAR15 == NULL)
            {
                FUN5(VAR3, VAR9, "");
                goto VAR13;
            }
            FUN7(VAR7, VAR15);
            VAR9 = FUN2(VAR3);
            if (VAR9 == NULL)
            {
                FUN5(VAR3, NULL, "");
                goto VAR13;
            }
        }
    }
    else
    {
        (void)FUN2(VAR3);
    }
    return FUN8(VAR7);
VAR13:
    FUN9(VAR7);
    return NULL;
}