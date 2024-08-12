static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18, VAR19;
    for (VAR18 = 0; VAR18 < VAR8->VAR20; VAR18++)
    {
        VAR21 *VAR22 = &VAR8->VAR23[VAR18];
        VAR22->VAR24[0] = VAR22->VAR24[1] = NULL;
    }
    if (VAR13)
    {
        VAR25 *VAR26 = &VAR8->VAR23[0].VAR27;
        VAR19 = FUN2(VAR26, VAR13, VAR14, VAR8->VAR20 > 1);
        if (VAR19 < 0)
        {
            FUN3(VAR2, VAR28, "");
            return VAR19;
        }
        VAR16 += VAR26->VAR29 * VAR26->VAR30;
        VAR8->VAR23[0].VAR31 = FUN4(VAR26->VAR32);
    }
    VAR11->VAR33 = VAR16 + VAR8->VAR23[0].VAR34;
    if (!VAR11->VAR33)
    {
        *VAR4 = 0;
        return 0;
    }
    VAR19 = FUN5(VAR2, VAR11, 0);
    if (VAR19 < 0)
        return VAR19;
    VAR11->VAR33 = 0;
    for (VAR18 = 0; VAR18 < VAR2->VAR35; VAR18++)
    {
        VAR36 *VAR37 = &VAR8->VAR38[VAR18];
        if (!VAR37->copy)
            VAR8->VAR23[VAR37->VAR39].VAR24[VAR37->VAR40] = (float *)VAR11->VAR41[VAR18];
    }
    for (VAR18 = 0; VAR18 < VAR8->VAR20; VAR18++)
        VAR8->VAR23[VAR18].VAR42 = VAR11->VAR43[0];
    for (VAR18 = 0; VAR18 < VAR8->VAR20; VAR18++)
    {
        VAR21 *VAR22 = &VAR8->VAR23[VAR18];
        if (VAR18 && VAR13)
        {
            VAR19 = FUN2(&VAR22->VAR27, VAR13, VAR14, VAR18 != VAR8->VAR20 - 1);
            if (VAR19 < 0)
            {
                FUN3(VAR2, VAR28, "");
                return VAR19;
            }
            if (VAR16 != VAR22->VAR27.VAR29 * VAR22->VAR27.VAR30)
            {
                FUN3(VAR2, VAR28, "", VAR18);
                return VAR44;
            }
            VAR22->VAR31 = FUN4(VAR22->VAR27.VAR32);
        }
        VAR19 = FUN6(&VAR8->VAR23[VAR18], VAR13, VAR22->VAR27.VAR45, VAR16);
        if (VAR19 < 0)
            return VAR19;
        if (VAR17 && VAR19 != VAR17)
        {
            FUN3(VAR2, VAR28, ""
                                        "");
            return VAR44;
        }
        VAR17 = VAR19;
        VAR13 += VAR22->VAR27.VAR46;
        VAR14 -= VAR22->VAR27.VAR46;
    }
    for (VAR18 = 0; VAR18 < VAR2->VAR35; VAR18++)
    {
        VAR36 *VAR37 = &VAR8->VAR38[VAR18];
        if (VAR37->copy)
        {
            memcpy(VAR11->VAR41[VAR18], VAR11->VAR41[VAR37->VAR47], VAR11->VAR43[0]);
        }
        else if (VAR37->VAR48)
        {
            memset(VAR11->VAR41[VAR18], 0, VAR11->VAR43[0]);
        }
        if (VAR8->VAR49)
        {
            VAR8->VAR50->FUN7((float *)VAR11->VAR41[VAR18], (float *)VAR11->VAR41[VAR18], VAR8->VAR51, FUN8(VAR17, 8));
        }
    }
    VAR11->VAR33 = VAR17;
    *VAR4 = !!VAR17;
    return VAR6->VAR15;
}