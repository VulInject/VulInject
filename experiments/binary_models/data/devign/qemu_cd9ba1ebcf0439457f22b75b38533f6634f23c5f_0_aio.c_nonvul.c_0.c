void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 *VAR8, void *VAR9)
{
    VAR10 *VAR11;
    VAR11 = FUN2(VAR2, VAR3);
    if (!VAR5 && !VAR6)
    {
        if (VAR11)
        {
            if (VAR2->VAR12)
            {
                VAR11->VAR13 = 1;
                VAR11->VAR14.VAR15 = 0;
            }
            else
            {
                FUN3(VAR11, VAR11);
                FUN4(VAR11);
            }
        }
    }
    else
    {
        if (VAR11 == NULL)
        {
            VAR11 = FUN5(sizeof(VAR10));
            VAR11->VAR14.VAR3 = VAR3;
            FUN6(&VAR2->VAR16, VAR11, VAR11);
        }
        VAR11->VAR5 = VAR5;
        VAR11->VAR6 = VAR6;
        VAR11->VAR8 = VAR8;
        VAR11->VAR9 = VAR9;
        VAR11->VAR14.VAR17 = (VAR5 ? VAR18 | VAR19 : 0);
        VAR11->VAR14.VAR17 |= (VAR6 ? VAR20 : 0);
    }
}