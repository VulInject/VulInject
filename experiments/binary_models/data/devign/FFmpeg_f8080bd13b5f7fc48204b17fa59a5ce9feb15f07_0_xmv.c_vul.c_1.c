static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    uint32_t VAR10;
    uint32_t VAR11;
    uint16_t VAR12;
    int VAR13;
    FUN2(VAR7, 4);
    VAR11 = FUN3(VAR7);
    FUN2(VAR7, 4);
    FUN2(VAR7, 4);
    VAR10 = FUN3(VAR7);
    if ((VAR10 != 4) && (VAR10 != 2))
        FUN4(VAR2, "", VAR10);
    VAR9 = FUN5(VAR2, NULL);
    if (!VAR9)
        return FUN6(VAR14);
    FUN7(VAR9, 32, 1, 1000);
    VAR9->VAR15->VAR16 = VAR17;
    VAR9->VAR15->VAR18 = VAR19;
    VAR9->VAR15->VAR20 = FUN8('', '', '', '');
    VAR9->VAR15->VAR21 = FUN3(VAR7);
    VAR9->VAR15->VAR22 = FUN3(VAR7);
    VAR9->VAR23 = FUN3(VAR7);
    VAR4->VAR24.VAR25 = VAR9->VAR26;
    VAR4->VAR27 = FUN9(VAR7);
    FUN2(VAR7, 2);
    VAR4->VAR28 = FUN10(VAR4->VAR27 * sizeof(VAR29));
    if (!VAR4->VAR28)
        return FUN6(VAR14);
    VAR4->VAR30 = FUN10(VAR4->VAR27 * sizeof(VAR31));
    if (!VAR4->VAR30)
        return FUN6(VAR14);
    for (VAR12 = 0; VAR12 < VAR4->VAR27; VAR12++)
    {
        VAR29 *VAR32 = &VAR4->VAR28[VAR12];
        VAR31 *VAR33 = &VAR4->VAR30[VAR12];
        VAR8 *VAR34 = NULL;
        VAR32->VAR35 = FUN9(VAR7);
        VAR32->VAR36 = FUN9(VAR7);
        VAR32->VAR37 = FUN3(VAR7);
        VAR32->VAR38 = FUN9(VAR7);
        VAR32->VAR39 = FUN9(VAR7);
        VAR32->VAR40 = VAR32->VAR38 * VAR32->VAR37 * VAR32->VAR36;
        VAR32->VAR41 = 36 * VAR32->VAR36;
        VAR32->VAR42 = 64;
        VAR32->VAR18 = FUN11(VAR32->VAR35, VAR32->VAR38);
        VAR33->VAR32 = VAR32;
        VAR33->VAR25 = -1;
        VAR33->VAR43 = 0;
        VAR33->VAR44 = 0;
        if (VAR32->VAR39 & VAR45)
            FUN12(VAR2, VAR46, ""
                                      "",
                   VAR32->VAR39);
        if (!VAR32->VAR36 || !VAR32->VAR37)
        {
            FUN12(VAR2, VAR47, "", VAR12);
            VAR13 = VAR48;
            goto VAR49;
        }
        VAR34 = FUN5(VAR2, NULL);
        if (!VAR34)
            return FUN6(VAR14);
        VAR34->VAR15->VAR16 = VAR50;
        VAR34->VAR15->VAR18 = VAR32->VAR18;
        VAR34->VAR15->VAR20 = VAR32->VAR35;
        VAR34->VAR15->VAR36 = VAR32->VAR36;
        VAR34->VAR15->VAR37 = VAR32->VAR37;
        VAR34->VAR15->VAR51 = VAR32->VAR38;
        VAR34->VAR15->VAR40 = VAR32->VAR40;
        VAR34->VAR15->VAR41 = 36 * VAR32->VAR36;
        FUN7(VAR34, 32, VAR32->VAR42, VAR32->VAR37);
        VAR33->VAR25 = VAR34->VAR26;
        VAR34->VAR23 = VAR9->VAR23;
    }
    VAR4->VAR52 = FUN13(VAR7);
    VAR4->VAR53 = VAR11 - VAR4->VAR52;
    VAR4->VAR54 = VAR4->VAR27 + 1;
    return 0;
VAR49:
    FUN14(VAR2);
    return VAR13;
}