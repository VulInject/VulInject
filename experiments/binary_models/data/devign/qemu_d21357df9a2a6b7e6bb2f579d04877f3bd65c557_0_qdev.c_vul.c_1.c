void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2->VAR5 == VAR6)
    {
        while (VAR2->VAR7)
        {
            VAR4 = FUN2(&VAR2->VAR8);
            FUN3(VAR4);
        }
        if (VAR2->VAR9->VAR10)
            FUN4(VAR2->VAR9->VAR10, VAR2);
        if (VAR2->VAR9->VAR11)
            VAR2->VAR9->FUN5(VAR2);
        if (VAR2->VAR12)
            FUN6(VAR2->VAR12);
    }
    FUN7(VAR13, VAR2);
    FUN8(VAR2, VAR14);
    for (VAR15 = VAR2->VAR9->VAR16; VAR15 && VAR15->VAR17; VAR15++)
    {
        if (VAR15->VAR9->free)
        {
            VAR15->VAR9->free(VAR2, VAR15);
        }
    }
    FUN9(VAR2);