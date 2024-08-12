void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, void *VAR7)
{
    VAR8 *VAR9;
    VAR9 = FUN2(VAR2, VAR3);
    if (!VAR5 && !VAR6)
    {
        if (VAR9)
        {
            FUN3(&VAR2->VAR10, &VAR9->VAR11);
            if (VAR2->VAR12)
            {
                VAR9->VAR13 = 1;
                VAR9->VAR11.VAR14 = 0;
            }
            else
            {
                FUN4(VAR9, VAR9);
                FUN5(VAR9);
            }
        }
    }
    else
    {
        if (VAR9 == NULL)
        {
            VAR9 = FUN6(VAR8, 1);
            VAR9->VAR11.VAR3 = VAR3;
            FUN7(&VAR2->VAR15, VAR9, VAR9);
            FUN8(&VAR2->VAR10, &VAR9->VAR11);
        }
        VAR9->VAR5 = VAR5;
        VAR9->VAR6 = VAR6;
        VAR9->VAR7 = VAR7;
        VAR9->VAR16 = -1;
        VAR9->VAR11.VAR17 = (VAR5 ? VAR18 | VAR19 | VAR20 : 0);
        VAR9->VAR11.VAR17 |= (VAR6 ? VAR21 | VAR20 : 0);
    }
    FUN9(VAR2);
}