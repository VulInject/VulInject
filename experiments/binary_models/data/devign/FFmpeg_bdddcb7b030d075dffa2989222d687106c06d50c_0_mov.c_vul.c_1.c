static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int64_t VAR6 = FUN2(VAR4) + VAR5.VAR7, VAR8, VAR9;
    uint8_t VAR10;
    unsigned VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    VAR15 *VAR17 = NULL;
    VAR18 *VAR19, *VAR20 = NULL;
    AVRational VAR21;
    VAR10 = FUN3(VAR4);
    if (VAR10 > 1)
    {
        FUN4(VAR2->VAR22, "", VAR10);
        return 0;
    }
    FUN5(VAR4);
    VAR13 = FUN6(VAR4);
    for (VAR11 = 0; VAR11 < VAR2->VAR22->VAR23; VAR11++)
    {
        if (VAR2->VAR22->VAR24[VAR11]->VAR25 == VAR13)
        {
            VAR16 = VAR2->VAR22->VAR24[VAR11];
            break;
        }
    }
    if (!VAR16)
    {
        FUN7(VAR2->VAR22, VAR26, "", VAR13);
        return 0;
    }
    VAR19 = VAR16->VAR27;
    VAR21 = FUN8(1, FUN6(VAR4));
    if (VAR21.VAR28 <= 0)
    {
        FUN7(VAR2->VAR22, VAR29, "", VAR21.VAR28);
        return VAR30;
    }
    if (VAR10 == 0)
    {
        VAR8 = FUN6(VAR4);
        VAR6 += FUN6(VAR4);
    }
    else
    {
        VAR8 = FUN9(VAR4);
        VAR6 += FUN9(VAR4);
    }
    FUN10(VAR4);
    VAR14 = FUN10(VAR4);
    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
    {
        int VAR31;
        VAR32 *VAR33;
        uint32_t VAR7 = FUN6(VAR4);
        uint32_t VAR34 = FUN6(VAR4);
        if (VAR7 & 0x80000000)
        {
            FUN4(VAR2->VAR22, "");
            return VAR35;
        }
        FUN6(VAR4);
        VAR9 = FUN11(VAR8, VAR16->VAR36, VAR21);
        VAR31 = FUN12(VAR2, VAR6);
        VAR33 = FUN13(&VAR2->VAR37, VAR31, VAR13);
        if (VAR33)
            VAR33->VAR38 = VAR9;
        VAR6 += VAR7;
        VAR8 += VAR34;
    }
    VAR16->VAR34 = VAR19->VAR39 = VAR8;
    VAR19->VAR40 = 1;
    if (VAR6 == FUN14(VAR4))
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR37.VAR41; VAR11++)
        {
            VAR42 *VAR43 = &VAR2->VAR37.VAR43[VAR11];
            for (VAR12 = 0; VAR17 == NULL && VAR12 < VAR43->VAR44; VAR12++)
            {
                VAR32 *VAR45;
                VAR45 = &VAR43->VAR46[VAR12];
                if (VAR45->VAR38 != VAR47)
                {
                    VAR17 = VAR2->VAR22->VAR24[VAR11];
                    VAR20 = VAR17->VAR27;
                    break;
                }
            }
        }
        for (VAR11 = 0; VAR11 < VAR2->VAR22->VAR23; VAR11++)
        {
            VAR16 = VAR2->VAR22->VAR24[VAR11];
            VAR19 = VAR16->VAR27;
            if (!VAR19->VAR40)
            {
                VAR16->VAR34 = VAR19->VAR39 = FUN15(VAR17->VAR34, VAR19->VAR48, VAR20->VAR48);
            }
        }
        VAR2->VAR37.VAR49 = 1;
    }
    return 0;
}