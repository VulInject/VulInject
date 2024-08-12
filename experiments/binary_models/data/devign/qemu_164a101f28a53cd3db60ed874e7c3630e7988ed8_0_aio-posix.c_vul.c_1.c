void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 *VAR8, void *VAR9)
{
    VAR10 *VAR11;
    VAR11 = FUN2(VAR2, VAR3);
    if (!VAR5 && !VAR6)
    {
        if (VAR11)
        {
            FUN3(&VAR2->VAR12, &VAR11->VAR13);
            if (VAR2->VAR14)
            {
                VAR11->VAR15 = 1;
                VAR11->VAR13.VAR16 = 0;
            }
            else
            {
                FUN4(VAR11, VAR11);
                FUN5(VAR11);
            }
        }
    }
    else
    {
        if (VAR11 == NULL)
        {
            VAR11 = FUN6(sizeof(VAR10));
            VAR11->VAR13.VAR3 = VAR3;
            FUN7(&VAR2->VAR17, VAR11, VAR11);
            FUN8(&VAR2->VAR12, &VAR11->VAR13);
        }
        VAR11->VAR5 = VAR5;
        VAR11->VAR6 = VAR6;
        VAR11->VAR8 = VAR8;
        VAR11->VAR9 = VAR9;
        VAR11->VAR18 = -1;
        VAR11->VAR13.VAR19 = (VAR5 ? VAR20 | VAR21 | VAR22 : 0);
        VAR11->VAR13.VAR19 |= (VAR6 ? VAR23 | VAR22 : 0);
    }
    FUN9(VAR2);
}