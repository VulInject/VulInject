static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    uint32_t VAR14;
    VAR14 = FUN2(VAR9);
    if (VAR14 == FUN3('', '', '', ''))
        return FUN4(VAR2);
    if (VAR14 != FUN3('', '', '', ''))
        goto VAR15;
    VAR4->VAR16 = FUN5(VAR9);
    if (VAR4->VAR16 != VAR17)
        goto VAR15;
    VAR4->VAR18 = FUN6(VAR9);
    if (VAR9->VAR19)
    {
        VAR4->VAR20 = FUN7(VAR9);
        if (VAR4->VAR18 && 0)
            FUN8(VAR2);
    }
    else
    {
        VAR4->VAR20 = (FUN9(1) << 63) - 1;
    }
    VAR13 = FUN5(VAR9);
    FUN5(VAR9);
    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
    {
        char VAR21[128];
        VAR7 = FUN10(VAR2, NULL);
        if (!VAR7)
            goto VAR15;
        FUN11(VAR7, 64, 1, 1000000);
        VAR11 = VAR7->VAR11;
        VAR11->VAR22 = FUN5(VAR9);
        VAR11->VAR23 = FUN12(VAR9);
        VAR11->VAR24 = FUN5(VAR9);
        VAR11->VAR25 = FUN5(VAR9);
        VAR11->VAR26 = FUN5(VAR9);
        VAR11->VAR27 = FUN5(VAR9);
        switch (VAR11->VAR23)
        {
        case VAR28:
            VAR11->VAR29.VAR30 = FUN5(VAR9);
            VAR11->VAR29.VAR31 = FUN5(VAR9);
            VAR11->VAR32 = FUN13(VAR9);
            VAR11->VAR33 = FUN13(VAR9);
            VAR11->VAR34 = FUN13(VAR9);
            VAR11->VAR35 = FUN5(VAR9);
            VAR11->VAR36 = FUN12(VAR9);
            VAR11->VAR37 = FUN12(VAR9);
            VAR11->VAR38 = FUN12(VAR9);
            VAR11->VAR39 = FUN13(VAR9) / 10000.0;
            VAR11->VAR40 = FUN13(VAR9) / 10000.0;
            VAR11->VAR41 = FUN5(VAR9);
            FUN14(VAR9, VAR42, VAR21, sizeof(VAR21));
            VAR11->VAR43 = FUN15(VAR21);
            VAR11->VAR44 = FUN5(VAR9);
            VAR11->VAR45 = FUN5(VAR9);
            VAR11->VAR46 = FUN5(VAR9);
            VAR11->VAR47 = FUN16(FUN6(VAR9));
            VAR11->VAR48 = FUN16(FUN6(VAR9));
            VAR11->VAR49 = FUN16(FUN6(VAR9));
            VAR11->VAR50 = FUN16(FUN6(VAR9));
            VAR11->VAR51 = FUN5(VAR9);
            VAR11->VAR52 = FUN5(VAR9);
            VAR11->VAR53 = FUN5(VAR9);
            VAR11->VAR54 = FUN5(VAR9);
            VAR11->VAR55 = FUN5(VAR9);
            VAR11->VAR56 = FUN5(VAR9);
            VAR11->VAR57 = FUN5(VAR9);
            VAR11->VAR58 = FUN5(VAR9);
            VAR11->VAR59 = FUN5(VAR9);
            VAR11->VAR60 = FUN16(FUN6(VAR9));
            VAR11->VAR61 = FUN5(VAR9);
            VAR11->VAR62 = FUN12(VAR9);
            VAR11->VAR63 = FUN5(VAR9);
            VAR11->VAR64 = FUN5(VAR9);
            VAR11->VAR65 = FUN5(VAR9);
            VAR11->VAR66 = FUN5(VAR9);
            VAR11->VAR67 = FUN5(VAR9);
            VAR11->VAR68 = FUN5(VAR9);
            VAR11->VAR69 = FUN5(VAR9);
            VAR11->VAR39 = FUN16(FUN6(VAR9));
            VAR11->VAR40 = FUN16(FUN6(VAR9));
            VAR11->VAR38 = FUN5(VAR9);
            VAR11->VAR70 = FUN5(VAR9);
            break;
        case VAR71:
            VAR11->VAR72 = FUN5(VAR9);
            VAR11->VAR73 = FUN17(VAR9);
            VAR11->VAR74 = FUN17(VAR9);
            break;
        default:
            goto VAR15;
        }
        if (VAR11->VAR25 & VAR75)
        {
            if (FUN18(VAR11, VAR9, FUN5(VAR9)) < 0)
                return FUN19(VAR76);
        }
    }
    while ((FUN20(VAR9) % VAR4->VAR16) != 0 && !VAR9->VAR77)
        FUN12(VAR9);
    VAR4->VAR78 = VAR4->VAR79;
    VAR4->VAR80 = VAR4->VAR79;
    VAR4->VAR81 = 0;
    VAR4->VAR82 = 0;
    VAR4->VAR83 = VAR84;
    VAR4->VAR85 = 1;
    return 0;
VAR15:
    FUN21(VAR2);
    return -1;
}