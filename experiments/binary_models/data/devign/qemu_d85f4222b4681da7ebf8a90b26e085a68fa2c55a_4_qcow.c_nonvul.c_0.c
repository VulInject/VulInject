static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    unsigned int VAR11, VAR12, VAR13;
    int VAR14;
    QCowHeader VAR15;
    VAR6 *VAR16 = NULL;
    VAR17 *VAR18 = NULL;
    unsigned int VAR19 = 0;
    VAR3 *VAR20 = NULL;
    const char *VAR21;
    FUN2(VAR4, &VAR20, "");
    VAR21 = FUN3(VAR20, "");
    VAR2->VAR22 = FUN4(NULL, VAR4, "", VAR2, &VAR23, false, VAR7);
    if (!VAR2->VAR22)
    {
        VAR14 = -VAR24;
        goto VAR25;
    }
    VAR14 = FUN5(VAR2->VAR22, 0, &VAR15, sizeof(VAR15));
    if (VAR14 < 0)
    {
        goto VAR25;
    }
    FUN6(&VAR15.VAR26);
    FUN6(&VAR15.VAR27);
    FUN7(&VAR15.VAR28);
    FUN6(&VAR15.VAR29);
    FUN6(&VAR15.VAR30);
    FUN7(&VAR15.VAR31);
    FUN6(&VAR15.VAR32);
    FUN7(&VAR15.VAR33);
    if (VAR15.VAR26 != VAR34)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR24;
        goto VAR25;
    }
    if (VAR15.VAR27 != VAR35)
    {
        FUN8(VAR7, "" VAR36, VAR15.VAR27);
        VAR14 = -VAR37;
        goto VAR25;
    }
    if (VAR15.VAR31 <= 1)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR24;
        goto VAR25;
    }
    if (VAR15.VAR38 < 9 || VAR15.VAR38 > 16)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR24;
        goto VAR25;
    }
    if (VAR15.VAR39 < 9 - 3 || VAR15.VAR39 > 16 - 3)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR24;
        goto VAR25;
    }
    VAR9->VAR40 = VAR15.VAR32;
    if (VAR9->VAR40)
    {
        if (FUN9() && VAR9->VAR40 == VAR41)
        {
            FUN8(VAR7, ""
                             "");
            FUN10(VAR7, ""
                                    ""
                                    ""
                                    "");
            VAR14 = -VAR42;
            goto VAR25;
        }
        if (VAR9->VAR40 == VAR41)
        {
            if (VAR21 && !FUN11(VAR21, ""))
            {
                FUN8(VAR7, ""
                                 "",
                           VAR21);
                VAR14 = -VAR24;
                goto VAR25;
            }
            FUN12(VAR20, "");
            VAR18 = FUN13(VAR43, VAR20, VAR7);
            if (!VAR18)
            {
                VAR14 = -VAR24;
                goto VAR25;
            }
            if (VAR5 & VAR44)
            {
                VAR19 |= VAR45;
            }
            VAR9->VAR46 = FUN14(VAR18, NULL, NULL, VAR19, VAR7);
            if (!VAR9->VAR46)
            {
                VAR14 = -VAR24;
                goto VAR25;
            }
        }
        else
        {
            FUN8(VAR7, "");
            VAR14 = -VAR24;
            goto VAR25;
        }
        VAR2->VAR47 = true;
        VAR2->VAR48 = true;
    }
    VAR9->VAR38 = VAR15.VAR38;
    VAR9->VAR49 = 1 << VAR9->VAR38;
    VAR9->VAR50 = 1 << (VAR9->VAR38 - 9);
    VAR9->VAR39 = VAR15.VAR39;
    VAR9->VAR51 = 1 << VAR9->VAR39;
    VAR2->VAR52 = VAR15.VAR31 / 512;
    VAR9->VAR53 = (1LL << (63 - VAR9->VAR38)) - 1;
    VAR13 = VAR9->VAR38 + VAR9->VAR39;
    if (VAR15.VAR31 > VAR54 - (1LL << VAR13))
    {
        FUN8(VAR7, "");
        VAR14 = -VAR24;
        goto VAR25;
    }
    else
    {
        uint64_t VAR55 = (VAR15.VAR31 + (1LL << VAR13) - 1) >> VAR13;
        if (VAR55 > VAR56 / sizeof(VAR57))
        {
            FUN8(VAR7, "");
            VAR14 = -VAR24;
            goto VAR25;
        }
        VAR9->VAR55 = VAR55;
    }
    VAR9->VAR33 = VAR15.VAR33;
    VAR9->VAR58 = FUN15(VAR57, VAR9->VAR55);
    if (VAR9->VAR58 == NULL)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR59;
        goto VAR25;
    }
    VAR14 = FUN5(VAR2->VAR22, VAR9->VAR33, VAR9->VAR58, VAR9->VAR55 * sizeof(VAR57));
    if (VAR14 < 0)
    {
        goto VAR25;
    }
    for (VAR12 = 0; VAR12 < VAR9->VAR55; VAR12++)
    {
        FUN7(&VAR9->VAR58[VAR12]);
    }
    VAR9->VAR60 = FUN16(VAR2->VAR22->VAR2, VAR9->VAR51 * VAR61 * sizeof(VAR57));
    if (VAR9->VAR60 == NULL)
    {
        FUN8(VAR7, "");
        VAR14 = -VAR59;
        goto VAR25;
    }
    VAR9->VAR62 = FUN17(VAR9->VAR49);
    VAR9->VAR63 = FUN17(VAR9->VAR49);
    VAR9->VAR64 = -1;
    if (VAR15.VAR28 != 0)
    {
        VAR11 = VAR15.VAR29;
        if (VAR11 > 1023 || VAR11 >= sizeof(VAR2->VAR65))
        {
            FUN8(VAR7, "");
            VAR14 = -VAR24;
            goto VAR25;
        }
        VAR14 = FUN5(VAR2->VAR22, VAR15.VAR28, VAR2->VAR65, VAR11);
        if (VAR14 < 0)
        {
            goto VAR25;
        }
        VAR2->VAR65[VAR11] = '';
    }
    FUN8(&VAR9->VAR66, ""
                                      "",
               FUN18(VAR2));
    VAR14 = FUN19(VAR9->VAR66, &VAR16);
    if (VAR16)
    {
        FUN20(VAR7, VAR16);
        FUN21(VAR9->VAR66);
        goto VAR25;
    }
    FUN22(VAR20);
    FUN23(VAR18);
    FUN24(&VAR9->VAR67);
    return 0;
VAR25:
    FUN25(VAR9->VAR58);
    FUN26(VAR9->VAR60);
    FUN25(VAR9->VAR62);
    FUN25(VAR9->VAR63);
    FUN27(VAR9->VAR46);
    FUN22(VAR20);
    FUN23(VAR18);
    return VAR14;
}