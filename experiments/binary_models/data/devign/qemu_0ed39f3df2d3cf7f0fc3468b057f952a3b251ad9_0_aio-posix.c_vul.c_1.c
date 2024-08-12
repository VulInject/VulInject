void FUN1(VAR1 *VAR2, int VAR3, bool VAR4, VAR5 *VAR6, VAR5 *VAR7, void *VAR8)
{
    VAR9 *VAR10;
    bool VAR11 = false;
    VAR10 = FUN2(VAR2, VAR3);
    if (!VAR6 && !VAR7)
    {
        if (VAR10)
        {
            FUN3(&VAR2->VAR12, &VAR10->VAR13);
            if (VAR2->VAR14)
            {
                VAR10->VAR15 = 1;
                VAR10->VAR13.VAR16 = 0;
            }
            else
            {
                FUN4(VAR10, VAR10);
                FUN5(VAR10);
            }
        }
    }
    else
    {
        if (VAR10 == NULL)
        {
            VAR10 = FUN6(VAR9, 1);
            VAR10->VAR13.VAR3 = VAR3;
            FUN7(&VAR2->VAR17, VAR10, VAR10);
            FUN8(&VAR2->VAR12, &VAR10->VAR13);
            VAR11 = true;
        }
        VAR10->VAR6 = VAR6;
        VAR10->VAR7 = VAR7;
        VAR10->VAR8 = VAR8;
        VAR10->VAR4 = VAR4;
        VAR10->VAR13.VAR18 = (VAR6 ? VAR19 | VAR20 | VAR21 : 0);
        VAR10->VAR13.VAR18 |= (VAR7 ? VAR22 | VAR21 : 0);
    }
    FUN9(VAR2, VAR10, VAR11);
    FUN10(VAR2);
}