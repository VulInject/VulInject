static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
    VAR11 *VAR12 = &VAR2->VAR8.VAR9;
    SectionHeader VAR13, *VAR14 = &VAR13;
    VAR15 *VAR16;
    VAR17 *VAR18;
    const VAR3 *VAR19, *VAR20, *VAR21;
    int VAR22, VAR23, VAR24, VAR25;
    int VAR26;
    uint32_t VAR27 = 0;
    int VAR28 = 0;
    Mp4Descr VAR29[VAR30] = {{0}};
    int VAR31;
    FUN2(VAR7->VAR32, VAR33, "", VAR5);
    FUN3(VAR7->VAR32, VAR4, VAR5);
    VAR20 = VAR4 + VAR5 - 4;
    VAR19 = VAR4;
    if (FUN4(VAR14, &VAR19, VAR20) < 0)
        return;
    if (FUN5(VAR14, VAR12))
        return;
    FUN2(VAR7->VAR32, VAR33, "", VAR14->VAR34, VAR14->VAR35, VAR14->VAR36, VAR14->VAR37);
    if (VAR14->VAR38 != VAR39)
        return;
    if (!VAR7->VAR40 && VAR7->VAR41)
        return;
    if (!VAR7->VAR42)
        FUN6(VAR7, VAR14->VAR34);
    VAR23 = FUN7(&VAR19, VAR20);
    if (VAR23 < 0)
        return;
    VAR23 &= 0x1fff;
    FUN8(VAR7, VAR14->VAR34, VAR23);
    FUN9(VAR7->VAR32, VAR14->VAR34, VAR23);
    FUN2(VAR7->VAR32, VAR33, "", VAR23);
    VAR22 = FUN7(&VAR19, VAR20);
    if (VAR22 < 0)
        return;
    VAR22 &= 0xfff;
    while (VAR22 >= 2)
    {
        uint8_t VAR43, VAR44;
        VAR43 = FUN10(&VAR19, VAR20);
        VAR44 = FUN10(&VAR19, VAR20);
        FUN2(VAR7->VAR32, VAR33, "", VAR43, VAR44);
        if (VAR44 > VAR22 - 2)
            break;
        VAR22 -= VAR44 + 2;
        if (VAR43 == 0x1d)
        {
            FUN10(&VAR19, VAR20);
            FUN10(&VAR19, VAR20);
            VAR44 -= 2;
            FUN11(VAR7->VAR32, VAR19, VAR44, VAR29 + VAR28, &VAR28, VAR30);
        }
        else if (VAR43 == 0x05 && VAR44 >= 4)
        {
            VAR27 = FUN12(&VAR19);
            VAR44 -= 4;
        }
        VAR19 += VAR44;
    }
    VAR19 += VAR22;
    if (VAR19 >= VAR20)
        goto VAR45;
    if (!VAR7->VAR32->VAR46)
        VAR7->VAR47 = 2;
    FUN13(VAR7, VAR14->VAR34);
    for (;;)
    {
        VAR18 = 0;
        VAR16 = NULL;
        VAR25 = FUN10(&VAR19, VAR20);
        if (VAR25 < 0)
            break;
        VAR24 = FUN7(&VAR19, VAR20);
        if (VAR24 < 0)
            goto VAR45;
        VAR24 &= 0x1fff;
        if (VAR24 == VAR7->VAR48)
            goto VAR45;
        if (VAR7->VAR49[VAR24] && VAR7->VAR49[VAR24]->VAR50 == VAR51)
        {
            VAR16 = VAR7->VAR49[VAR24]->VAR8.VAR52.VAR10;
            if (!VAR16->VAR18)
            {
                VAR16->VAR18 = FUN14(VAR16->VAR32, NULL);
                if (!VAR16->VAR18)
                    goto VAR45;
                VAR16->VAR18->VAR34 = VAR16->VAR24;
            }
            VAR18 = VAR16->VAR18;
        }
        else if (VAR25 != 0x13)
        {
            if (VAR7->VAR49[VAR24])
                FUN15(VAR7, VAR7->VAR49[VAR24]);
            VAR16 = FUN16(VAR7, VAR24, VAR23);
            if (VAR16)
            {
                VAR18 = FUN14(VAR16->VAR32, NULL);
                if (!VAR18)
                    goto VAR45;
                VAR18->VAR34 = VAR16->VAR24;
            }
        }
        else
        {
            int VAR53 = FUN17(VAR7->VAR32, VAR24);
            if (VAR53 >= 0)
            {
                VAR18 = VAR7->VAR32->VAR54[VAR53];
            }
            else
            {
                VAR18 = FUN14(VAR7->VAR32, NULL);
                if (!VAR18)
                    goto VAR45;
                VAR18->VAR34 = VAR24;
                VAR18->VAR55->VAR56 = VAR57;
            }
        }
        if (!VAR18)
            goto VAR45;
        if (VAR16 && !VAR16->VAR25)
            FUN18(VAR18, VAR16, VAR25, VAR27);
        FUN8(VAR7, VAR14->VAR34, VAR24);
        FUN19(VAR7->VAR32, VAR14->VAR34, VAR18->VAR58);
        VAR26 = FUN7(&VAR19, VAR20);
        if (VAR26 < 0)
            goto VAR45;
        VAR26 &= 0xfff;
        VAR21 = VAR19 + VAR26;
        if (VAR21 > VAR20)
            goto VAR45;
        for (;;)
        {
            if (FUN20(VAR7->VAR32, VAR18, VAR25, &VAR19, VAR21, VAR29, VAR28, VAR24, VAR7) < 0)
                break;
            if (VAR16 && VAR27 == FUN21("") && VAR25 == 0x83 && VAR16->VAR59)
            {
                FUN19(VAR7->VAR32, VAR14->VAR34, VAR16->VAR59->VAR58);
                VAR16->VAR59->VAR55->VAR60 = VAR18->VAR55->VAR60;
            }
        }
        VAR19 = VAR21;
    }
    if (!VAR7->VAR49[VAR23])
        FUN22(VAR7, VAR23);
VAR45:
    for (VAR31 = 0; VAR31 < VAR28; VAR31++)
        FUN23(VAR29[VAR31].VAR61);
}