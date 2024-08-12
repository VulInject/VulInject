void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, void *VAR7)
{
    VAR8 *VAR9;
    FUN2(VAR9, &VAR2->VAR10, VAR9)
    {
        if (VAR9->VAR11.VAR3 == VAR3 && !VAR9->VAR12)
        {
            break;
        }
    }
    if (!VAR5 && !VAR6)
    {
        if (VAR9)
        {
            if (VAR2->VAR13)
            {
                VAR9->VAR12 = 1;
                VAR9->VAR11.VAR14 = 0;
            }
            else
            {
                FUN3(VAR9, VAR9);
                FUN4(VAR9);
            }
        }
    }
    else
    {
        HANDLE VAR15;
        if (VAR9 == NULL)
        {
            VAR9 = FUN5(VAR8, 1);
            VAR9->VAR11.VAR3 = VAR3;
            FUN6(&VAR2->VAR10, VAR9, VAR9);
        }
        VAR9->VAR11.VAR16 = 0;
        if (VAR9->VAR5)
        {
            VAR9->VAR11.VAR16 |= VAR17;
        }
        if (VAR9->VAR6)
        {
            VAR9->VAR11.VAR16 |= VAR18;
        }
        VAR9->VAR19 = &VAR2->VAR20;
        VAR9->VAR7 = VAR7;
        VAR9->VAR5 = VAR5;
        VAR9->VAR6 = VAR6;
        VAR15 = FUN7(&VAR2->VAR20);
        FUN8(VAR9->VAR11.VAR3, VAR15, VAR21 | VAR22 | VAR23 | VAR24 | VAR25 | VAR26);
    }
    FUN9(VAR2);
}