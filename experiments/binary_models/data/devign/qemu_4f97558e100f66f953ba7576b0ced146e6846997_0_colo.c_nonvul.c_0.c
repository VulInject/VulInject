void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = NULL;
    FUN2(&VAR3->VAR6, VAR7, VAR8);
    VAR3->VAR9 = FUN3(VAR3->VAR10);
    if (!VAR3->VAR9)
    {
        FUN4("");
        goto VAR11;
    }
    FUN5(VAR3->VAR10, true);
    FUN6(VAR3->VAR9, VAR12, &VAR5);
    if (VAR5)
    {
        goto VAR11;
    }
    while (VAR3->VAR6 == VAR8)
    {
        int VAR13;
        FUN7(VAR3->VAR10, &VAR13, &VAR5);
        if (VAR5)
        {
            goto VAR11;
        }
        assert(VAR13);
        FUN6(VAR3->VAR9, VAR14, &VAR5);
        if (VAR5)
        {
            goto VAR11;
        }
        FUN8(VAR3->VAR10, VAR15, &VAR5);
        if (VAR5)
        {
            goto VAR11;
        }
        FUN6(VAR3->VAR9, VAR16, &VAR5);
        if (VAR5)
        {
            goto VAR11;
        }
        FUN6(VAR3->VAR9, VAR17, &VAR5);
        if (VAR5)
        {
            goto VAR11;
        }
    }
VAR11:
    if (VAR5)
    {
        FUN9(VAR5);
    }
    if (VAR3->VAR9)
    {
        FUN10(VAR3->VAR9);
    }
    FUN11();
    return NULL;
}