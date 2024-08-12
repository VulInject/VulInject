int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8;
    int VAR9 = 0;
    int VAR10, VAR11;
    if (VAR5)
    {
        if ((VAR11 = FUN2(VAR2, VAR5, VAR12)) < 0)
            return VAR11;
    }
    if (VAR2->VAR13 > 0 && VAR2->VAR14 && !VAR6)
    {
        VAR3 *VAR15 = &VAR2->VAR14->VAR5;
        int64_t VAR16 = VAR17;
        int64_t VAR18 = FUN3(VAR15->VAR19, VAR2->VAR20[VAR15->VAR21]->VAR22, VAR23);
        for (VAR10 = 0; VAR10 < VAR2->VAR24; VAR10++)
        {
            int64_t VAR25;
            const VAR7 *VAR26 = VAR2->VAR20[VAR10]->VAR27;
            if (!VAR26)
                continue;
            VAR25 = FUN3(VAR26->VAR5.VAR19, VAR2->VAR20[VAR10]->VAR22, VAR23);
            VAR16 = FUN4(VAR16, VAR25 - VAR18);
            VAR9++;
        }
        if (VAR16 > VAR2->VAR13)
        {
            FUN5(VAR2, VAR28, ""
                                    "" VAR29 "" VAR29 "",
                   VAR16, VAR2->VAR13);
            VAR6 = 1;
        }
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR24; VAR10++)
            VAR9 += !!VAR2->VAR20[VAR10]->VAR27;
    }
    if (VAR9 && (VAR2->VAR30->VAR31 == VAR9 || VAR6))
    {
        VAR8 = VAR2->VAR14;
        *VAR4 = VAR8->VAR5;
        VAR2->VAR14 = VAR8->VAR32;
        if (!VAR2->VAR14)
            VAR2->VAR33 = NULL;
        if (VAR2->VAR20[VAR4->VAR21]->VAR27 == VAR8)
            VAR2->VAR20[VAR4->VAR21]->VAR27 = NULL;
        FUN6(&VAR8);
        return 1;
    }
    else
    {
        FUN7(VAR4);
        return 0;
    }
}