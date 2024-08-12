static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    VAR14 *VAR15;
    VAR5->VAR16 = VAR5->VAR17[VAR2->VAR18];
    if (!VAR5->VAR16)
    {
        FUN2(VAR7, VAR19, "");
        return VAR20;
    }
    VAR5->VAR21 = VAR5->VAR17[VAR2->VAR21];
    VAR5->VAR22 = VAR2->VAR23 + (FUN3(&VAR2->VAR24) >> 3);
    VAR8 = VAR2->FUN4(VAR2, VAR5, VAR7);
    if (VAR8)
    {
        FUN2(VAR7, VAR19, "", VAR8);
        return VAR8;
    }
    if (VAR5->VAR25)
    {
        FUN2(VAR7, VAR19, "");
        return VAR20;
    }
    VAR5->VAR26 = &VAR2->VAR27[VAR5->VAR28];
    for (VAR9 = 0; VAR9 < VAR5->VAR29; VAR9++)
    {
        VAR11 = VAR5->VAR30[VAR9 * 2];
        VAR12 = VAR5->VAR30[VAR9 * 2 + 1];
        FUN5(VAR31, VAR5->VAR26->VAR32[VAR11], VAR5->VAR26->VAR32[VAR12]);
        FUN5(VAR33, VAR5->VAR26->VAR34[VAR11], VAR5->VAR26->VAR34[VAR12]);
    }
    VAR13 = FUN3(&VAR2->VAR24);
    for (VAR10 = 0; VAR10 < VAR5->VAR35; VAR10++)
    {
        VAR15 = &VAR5->VAR36[VAR10];
        if (VAR15->VAR37 != VAR5->VAR37)
        {
            FUN2(VAR7, VAR19, "", VAR5->VAR37, VAR15->VAR37);
            return VAR20;
        }
        VAR15->VAR25 = FUN6(&VAR2->VAR24);
        if (VAR15->VAR25)
        {
            FUN7(VAR7, VAR5, VAR15, (VAR2->VAR38[0].VAR39[0].VAR37 >> 3) - (VAR5->VAR37 >> 3));
            FUN8(VAR7, "");
        }
        else
        {
            VAR15->VAR40 = FUN9(&VAR2->VAR24);
            if (!VAR15->VAR40)
            {
                FUN2(VAR7, VAR19, "");
                return VAR20;
            }
            VAR8 = VAR2->FUN10(VAR2, VAR5, VAR15, VAR7);
            if (VAR8 < 0)
                break;
            VAR8 = FUN11(&VAR2->VAR24, VAR5, VAR15);
            if (VAR8 < 0 || ((FUN3(&VAR2->VAR24) - VAR13) >> 3) != VAR15->VAR40)
            {
                FUN2(VAR7, VAR19, "");
                break;
            }
            VAR13 += VAR15->VAR40 << 3;
        }
    }
    for (VAR9 = VAR5->VAR29 - 1; VAR9 >= 0; VAR9--)
    {
        VAR11 = VAR5->VAR30[VAR9 * 2];
        VAR12 = VAR5->VAR30[VAR9 * 2 + 1];
        FUN5(VAR31, VAR5->VAR26->VAR32[VAR11], VAR5->VAR26->VAR32[VAR12]);
        FUN5(VAR33, VAR5->VAR26->VAR34[VAR11], VAR5->VAR26->VAR34[VAR12]);
    }
    if (VAR5->VAR41)
    {
        uint16_t VAR42 = FUN12(VAR5);
        if (VAR42 != VAR5->VAR43)
        {
            FUN2(VAR7, VAR19, "", VAR5->VAR44, VAR5->VAR45, VAR5->VAR43, VAR42);
        }
    }
    FUN13(&VAR2->VAR24);
    return VAR8;
}