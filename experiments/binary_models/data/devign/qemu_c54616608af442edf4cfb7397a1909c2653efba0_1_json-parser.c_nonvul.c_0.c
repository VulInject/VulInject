static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = NULL;
    VAR1 *VAR8, *VAR9;
    JSONParserContext VAR10 = FUN2(VAR3);
    VAR8 = FUN3(VAR3);
    if (VAR8 == NULL)
    {
        goto VAR11;
    }
    if (FUN4(VAR8) != VAR12)
    {
        goto VAR11;
    }
    VAR7 = FUN5();
    VAR9 = FUN6(VAR3);
    if (VAR9 == NULL)
    {
        FUN7(VAR3, NULL, "");
        goto VAR11;
    }
    if (FUN4(VAR9) != VAR13)
    {
        if (FUN8(VAR3, VAR7, VAR5) == -1)
        {
            goto VAR11;
        }
        VAR8 = FUN3(VAR3);
        if (VAR8 == NULL)
        {
            FUN7(VAR3, NULL, "");
            goto VAR11;
        }
        while (FUN4(VAR8) != VAR13)
        {
            if (FUN4(VAR8) != VAR14)
            {
                FUN7(VAR3, VAR8, "");
                goto VAR11;
            }
            if (FUN8(VAR3, VAR7, VAR5) == -1)
            {
                goto VAR11;
            }
            VAR8 = FUN3(VAR3);
            if (VAR8 == NULL)
            {
                FUN7(VAR3, NULL, "");
                goto VAR11;
            }
        }
    }
    else
    {
        (void)FUN3(VAR3);
    }
    return FUN9(VAR7);
VAR11:
    FUN10(VAR3, VAR10);
    FUN11(VAR7);
    return NULL;
}