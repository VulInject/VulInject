static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    VAR3 *VAR13;
    const VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18, VAR19;
    VAR13 = FUN2(VAR11, VAR4->VAR20);
    if (!VAR13)
    {
        FUN3(&VAR4);
        return FUN4(VAR21);
    }
    FUN5(VAR13, VAR4);
    VAR13->VAR22 = VAR11->VAR22;
    VAR15 = (VAR14 *)VAR4->VAR23[0];
    VAR17 = (VAR16 *)VAR13->VAR23[0];
    for (VAR18 = 0; VAR18 < VAR4->VAR20 * VAR4->VAR24; VAR18++)
    {
        VAR17[VAR18] = VAR15[VAR18];
    }
    VAR9->VAR25 = 0;
    if (VAR9->VAR26 && VAR2->VAR24 == 2)
    {
        float VAR27 = 0.0;
        FUN6(VAR9, VAR17, VAR4->VAR20);
        if (VAR9->VAR28[0].VAR29 && VAR9->VAR28[1].VAR29)
            VAR9->VAR30 = 1;
        if (VAR9->VAR28[0].VAR31 || VAR9->VAR28[1].VAR31)
        {
            int VAR32 = VAR9->VAR28[0].VAR33 + VAR9->VAR28[0].VAR34 + VAR9->VAR28[1].VAR33 + VAR9->VAR28[1].VAR34;
            if (VAR32 == VAR9->VAR28[0].VAR31 + VAR9->VAR28[1].VAR31)
                VAR9->VAR35 = VAR36;
            else
                VAR9->VAR35 = VAR37;
        }
        else
            VAR9->VAR35 = VAR38;
        VAR9->VAR39 = (VAR9->VAR28[0].VAR40 || VAR9->VAR28[1].VAR40);
        VAR27 = FUN7(FUN8(VAR9->VAR28[0].VAR41), FUN8(VAR9->VAR28[1].VAR41));
        VAR9->VAR42 = FUN7(VAR9->VAR42, VAR27);
        VAR9->VAR25 += VAR9->VAR28[0].VAR43 + VAR9->VAR28[0].VAR44 + VAR9->VAR28[0].VAR45 + VAR9->VAR28[1].VAR43 + VAR9->VAR28[1].VAR44 + VAR9->VAR28[1].VAR45;
    }
    else
    {
        int VAR46 = 0;
        int VAR32 = 0;
        int VAR47 = 0;
        for (VAR19 = 0; VAR19 < VAR2->VAR24; VAR19++)
        {
            VAR48 *VAR28 = &VAR9->VAR28[VAR19];
            FUN9(VAR9, VAR28, VAR17 + VAR19, VAR4->VAR20, VAR13->VAR24);
            if (VAR28->VAR29)
                VAR46++;
            VAR32 += VAR28->VAR33 + VAR28->VAR34;
            VAR47 += VAR28->VAR31;
            VAR9->VAR39 |= !!(VAR28->VAR40);
            VAR9->VAR42 = FUN7(VAR9->VAR42, FUN8(VAR28->VAR41));
            VAR9->VAR25 += VAR28->VAR43 + VAR28->VAR44 + VAR28->VAR45;
        }
        if (VAR47)
        {
            if (VAR32 == VAR47)
                VAR9->VAR35 = VAR36;
            else
                VAR9->VAR35 = VAR37;
        }
        else
            VAR9->VAR35 = VAR38;
        if (VAR46 == VAR2->VAR24)
            VAR9->VAR30 = 1;
    }
    VAR9->VAR49 += VAR4->VAR20 * VAR4->VAR24;
    FUN3(&VAR4);
    return FUN10(VAR11, VAR13);
}