int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    int VAR9 = 0, VAR10 = 0;
    int64_t VAR11 = 0;
    int VAR12;
    if (VAR5)
    {
        FUN2(VAR2, VAR5, VAR13);
    }
    for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    {
        if (VAR2->VAR15[VAR12]->VAR16)
        {
            ++VAR9;
        }
        else if (VAR2->VAR15[VAR12]->VAR17->VAR18 == VAR19)
        {
            ++VAR10;
        }
    }
    if (VAR2->VAR14 == VAR9)
    {
        VAR6 = 1;
    }
    else if (!VAR6)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
        {
            if (VAR2->VAR15[VAR12]->VAR16)
            {
                int64_t VAR20 = FUN3(VAR2->VAR15[VAR12]->VAR16->VAR5.VAR21, VAR2->VAR15[VAR12]->VAR22, VAR23) - FUN3(VAR2->VAR24->VAR5.VAR21, VAR2->VAR15[VAR2->VAR24->VAR5.VAR25]->VAR22, VAR23);
                VAR11 = FUN4(VAR11, VAR20);
            }
        }
        if (VAR2->VAR14 == VAR9 + VAR10 && VAR11 > 20 * VAR26)
        {
            FUN5(VAR2, VAR27, "", VAR10);
            VAR6 = 1;
        }
    }
    if (VAR9 && VAR6)
    {
        VAR8 = VAR2->VAR24;
        *VAR4 = VAR8->VAR5;
        VAR2->VAR24 = VAR8->VAR28;
        if (!VAR2->VAR24)
            VAR2->VAR29 = NULL;
        if (VAR2->VAR15[VAR4->VAR25]->VAR16 == VAR8)
            VAR2->VAR15[VAR4->VAR25]->VAR16 = NULL;
        FUN6(&VAR8);
        return 1;
    }
    else
    {
        FUN7(VAR4);
        return 0;
    }
}