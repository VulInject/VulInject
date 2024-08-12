static void FUN1(int VAR1, uint32_t VAR2, uint32_t VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    uint32_t VAR15[8], VAR16[6];
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21;
    uint32_t VAR22, VAR23;
    VAR24 *VAR25;
    int VAR26;
    VAR13 *VAR27;
    VAR7 = (VAR3 >> VAR28) & 0xf;
    if (VAR29)
        fprintf(VAR30, "", VAR1, VAR7, VAR4);
    if (VAR7 == 5)
    {
        if (!(VAR3 & VAR31))
            FUN2(VAR32, VAR1 & 0xfffc);
        VAR1 = VAR2 >> 16;
        if (VAR1 & 4)
            FUN2(VAR33, VAR1 & 0xfffc);
        if (FUN3(&VAR2, &VAR3, VAR1) != 0)
            FUN2(VAR34, VAR1 & 0xfffc);
        if (VAR3 & VAR35)
            FUN2(VAR34, VAR1 & 0xfffc);
        VAR7 = (VAR3 >> VAR28) & 0xf;
        if ((VAR7 & 7) != 1)
            FUN2(VAR34, VAR1 & 0xfffc);
    }
    if (!(VAR3 & VAR31))
        FUN2(VAR32, VAR1 & 0xfffc);
    if (VAR7 & 8)
        VAR6 = 103;
    else
        VAR6 = 43;
    VAR5 = FUN4(VAR2, VAR3);
    VAR14 = FUN5(VAR2, VAR3);
    if ((VAR1 & 4) != 0 || VAR5 < VAR6)
        FUN2(VAR33, VAR1 & 0xfffc);
    VAR9 = (VAR36->VAR37.VAR38 >> VAR28) & 0xf;
    if (VAR9 & 8)
        VAR8 = 103;
    else
        VAR8 = 43;
    if (VAR7 & 8)
    {
        VAR19 = FUN6(VAR14 + 0x1c);
        VAR18 = FUN6(VAR14 + 0x20);
        VAR17 = FUN6(VAR14 + 0x24);
        for (VAR12 = 0; VAR12 < 8; VAR12++)
            VAR15[VAR12] = FUN6(VAR14 + (0x28 + VAR12 * 4));
        for (VAR12 = 0; VAR12 < 6; VAR12++)
            VAR16[VAR12] = FUN7(VAR14 + (0x48 + VAR12 * 4));
        VAR20 = FUN7(VAR14 + 0x60);
        VAR21 = FUN6(VAR14 + 0x64);
    }
    else
    {
        VAR19 = 0;
        VAR18 = FUN7(VAR14 + 0x0e);
        VAR17 = FUN7(VAR14 + 0x10);
        for (VAR12 = 0; VAR12 < 8; VAR12++)
            VAR15[VAR12] = FUN7(VAR14 + (0x12 + VAR12 * 2)) | 0xffff0000;
        for (VAR12 = 0; VAR12 < 4; VAR12++)
            VAR16[VAR12] = FUN7(VAR14 + (0x22 + VAR12 * 4));
        VAR20 = FUN7(VAR14 + 0x2a);
        VAR16[VAR39] = 0;
        VAR16[VAR40] = 0;
        VAR21 = 0;
    }
    VAR10 = FUN8(VAR36->VAR37.VAR41);
    VAR11 = FUN9(VAR36->VAR37.VAR41 + VAR8);
    FUN10(VAR36->VAR37.VAR41, VAR10);
    FUN10(VAR36->VAR37.VAR41 + VAR8, VAR11);
    if (VAR4 == VAR42 || VAR4 == VAR43)
    {
        VAR13 *VAR27;
        uint32_t VAR3;
        VAR27 = VAR36->VAR44.VAR41 + (VAR36->VAR37.VAR45 << 3);
        VAR3 = FUN6(VAR27 + 4);
        VAR3 &= ~VAR46;
        FUN11(VAR27 + 4, VAR3);
    }
    VAR22 = FUN12();
    if (VAR4 == VAR43)
        VAR22 &= ~VAR47;
    if (VAR7 & 8)
    {
        FUN11(VAR36->VAR37.VAR41 + 0x20, VAR36->VAR48);
        FUN11(VAR36->VAR37.VAR41 + 0x24, VAR22);
        for (VAR12 = 0; VAR12 < 8; VAR12++)
            FUN11(VAR36->VAR37.VAR41 + (0x28 + VAR12 * 4), VAR36->VAR49[VAR12]);
        for (VAR12 = 0; VAR12 < 6; VAR12++)
            FUN13(VAR36->VAR37.VAR41 + (0x48 + VAR12 * 4), VAR36->VAR50[VAR12].VAR45);
    }
    else
    {
        FUN13(VAR36->VAR37.VAR41 + 0x0e, VAR18);
        FUN13(VAR36->VAR37.VAR41 + 0x10, VAR22);
        for (VAR12 = 0; VAR12 < 8; VAR12++)
            FUN13(VAR36->VAR37.VAR41 + (0x12 + VAR12 * 2), VAR36->VAR49[VAR12]);
        for (VAR12 = 0; VAR12 < 4; VAR12++)
            FUN13(VAR36->VAR37.VAR41 + (0x22 + VAR12 * 4), VAR36->VAR50[VAR12].VAR45);
    }
    if (VAR4 == VAR51)
    {
        FUN13(VAR14, VAR36->VAR37.VAR45);
        VAR17 |= VAR47;
    }
    if (VAR4 == VAR42 || VAR4 == VAR51)
    {
        VAR13 *VAR27;
        uint32_t VAR3;
        VAR27 = VAR36->VAR44.VAR41 + (VAR1 << 3);
        VAR3 = FUN6(VAR27 + 4);
        VAR3 |= VAR46;
        FUN11(VAR27 + 4, VAR3);
    }
    VAR36->VAR52[0] |= VAR53;
    VAR36->VAR37.VAR45 = VAR1;
    VAR36->VAR37.VAR41 = VAR14;
    VAR36->VAR37.VAR54 = VAR5;
    VAR36->VAR37.VAR38 = VAR3 & ~VAR46;
    if ((VAR7 & 8) && (VAR36->VAR52[0] & VAR55))
    {
        FUN14(VAR36, VAR19);
    }
    VAR36->VAR48 = VAR18;
    VAR23 = VAR56 | VAR57 | VAR58 | VAR59 | VAR60 | VAR61 | VAR62 | VAR47;
    if (!(VAR7 & 8))
        VAR23 &= 0xffff;
    FUN15(VAR17, VAR23);
    for (VAR12 = 0; VAR12 < 8; VAR12++)
        VAR36->VAR49[VAR12] = VAR15[VAR12];
    if (VAR17 & VAR61)
    {
        for (VAR12 = 0; VAR12 < 6; VAR12++)
            FUN16(VAR12, VAR16[VAR12]);
        FUN17(VAR36, 3);
    }
    else
    {
        FUN17(VAR36, VAR16[VAR63] & 3);
        for (VAR12 = 0; VAR12 < 6; VAR12++)
            FUN18(VAR36, VAR12, VAR16[VAR12], NULL, 0, 0);
    }
    VAR36->VAR64.VAR45 = VAR20 & ~4;
    VAR36->VAR64.VAR41 = NULL;
    VAR36->VAR64.VAR54 = 0;
    VAR36->VAR64.VAR38 = 0;
    if (VAR20 & 4)
        FUN2(VAR33, VAR20 & 0xfffc);
    if ((VAR20 & 0xfffc) != 0)
    {
        VAR25 = &VAR36->VAR44;
        VAR26 = VAR20 & ~7;
        if ((VAR26 + 7) > VAR25->VAR54)
            FUN2(VAR33, VAR20 & 0xfffc);
        VAR27 = VAR25->VAR41 + VAR26;
        VAR2 = FUN6(VAR27);
        VAR3 = FUN6(VAR27 + 4);
        if ((VAR3 & VAR35) || ((VAR3 >> VAR28) & 0xf) != 2)
            FUN2(VAR33, VAR20 & 0xfffc);
        if (!(VAR3 & VAR31))
            FUN2(VAR33, VAR20 & 0xfffc);
        FUN19(&VAR36->VAR64, VAR2, VAR3);
    }
    if (!(VAR17 & VAR61))
    {
        FUN20(VAR63, VAR16[VAR63]);
        FUN20(VAR65, VAR16[VAR65]);
        FUN20(VAR66, VAR16[VAR66]);
        FUN20(VAR67, VAR16[VAR67]);
        FUN20(VAR39, VAR16[VAR39]);
        FUN20(VAR40, VAR16[VAR40]);
    }
    if (VAR18 > VAR36->VAR50[VAR63].VAR54)
    {
        FUN2(VAR34, 0);
    }
}