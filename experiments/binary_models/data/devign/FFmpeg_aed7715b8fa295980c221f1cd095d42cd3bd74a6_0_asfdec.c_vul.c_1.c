static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint64_t VAR10;
    uint32_t VAR11, VAR12;
    uint16_t VAR13;
    ff_asf_guid VAR14;
    enum AVMediaType VAR15;
    int VAR16, VAR17;
    uint8_t VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    if (VAR6->VAR23 >= VAR24)
        return VAR25;
    VAR10 = FUN2(VAR9);
    FUN3(VAR9, &VAR14);
    if (!FUN4(&VAR14, &VAR26))
        VAR15 = VAR27;
    else if (!FUN4(&VAR14, &VAR28))
        VAR15 = VAR29;
    else if (!FUN4(&VAR14, &VAR30))
        VAR15 = VAR29;
    else if (!FUN4(&VAR14, &VAR31))
        VAR15 = VAR32;
    else if (!FUN4(&VAR14, &VAR33))
        VAR15 = VAR34;
    else
        return VAR25;
    FUN3(VAR9, &VAR14);
    FUN5(VAR9, 8);
    VAR12 = FUN6(VAR9);
    VAR11 = FUN6(VAR9);
    VAR13 = FUN7(VAR9);
    VAR18 = VAR13 & VAR35;
    for (VAR16 = 0; VAR16 < VAR6->VAR23; VAR16++)
        if (VAR18 == VAR6->VAR22[VAR16]->VAR18)
        {
            FUN8(VAR2, VAR36, "");
            FUN9(VAR9, VAR6->VAR37, VAR10);
            return 0;
        }
    VAR20 = FUN10(VAR2, NULL);
    if (!VAR20)
        return FUN11(VAR38);
    FUN12(VAR20, 32, 1, 1000);
    VAR20->VAR39->VAR40 = VAR15;
    VAR6->VAR22[VAR6->VAR23] = FUN13(sizeof(*VAR22));
    if (!VAR6->VAR22[VAR6->VAR23])
        return FUN11(VAR38);
    VAR22 = VAR6->VAR22[VAR6->VAR23];
    VAR22->VAR18 = VAR18;
    VAR22->VAR41 = VAR20->VAR41;
    VAR22->VAR42 = 0;
    VAR20->VAR43 = VAR13 & VAR35;
    FUN14(&VAR22->VAR44.VAR45);
    VAR22->VAR44.VAR46 = 0;
    FUN5(VAR9, 4);
    switch (VAR15)
    {
    case VAR27:
        VAR22->VAR15 = VAR27;
        if ((VAR17 = FUN15(VAR2, VAR9, VAR20->VAR39, VAR12)) < 0)
            return VAR17;
        break;
    case VAR29:
        VAR22->VAR15 = VAR29;
        if ((VAR17 = FUN16(VAR9, VAR20)) < 0)
            return VAR17;
        break;
    default:
        FUN5(VAR9, VAR12);
        break;
    }
    if (VAR11)
    {
        if (VAR15 == VAR27)
        {
            uint8_t VAR47 = FUN17(VAR9);
            if (VAR47 > 1)
            {
                VAR22->VAR47 = VAR47;
                VAR22->VAR48 = FUN7(VAR9);
                VAR22->VAR49 = FUN7(VAR9);
                if (!VAR22->VAR49 || !VAR22->VAR48)
                    return VAR25;
                FUN5(VAR9, VAR11 - 5);
            }
            else
                FUN5(VAR9, VAR11 - 1);
        }
        else
            FUN5(VAR9, VAR11);
    }
    VAR6->VAR23++;
    FUN9(VAR9, VAR6->VAR37, VAR10);
    return 0;
}