static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15;
    uint32_t VAR16;
    VAR16 = FUN2(VAR11);
    if (VAR16 != FUN3('', '', '', ''))
        goto VAR17;
    VAR6->VAR18 = FUN4(VAR11);
    if (VAR6->VAR18 != VAR19)
        goto VAR17;
    VAR6->VAR20 = FUN5(VAR11);
    if (!FUN6(VAR11))
    {
        VAR6->VAR21 = FUN7(VAR11);
        if (VAR6->VAR20)
            FUN8(VAR2);
    }
    else
    {
        VAR6->VAR21 = (FUN9(1) << 63) - 1;
    }
    VAR15 = FUN4(VAR11);
    FUN4(VAR11);
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        char VAR22[128];
        VAR9 = FUN10(VAR2, 0);
        if (!VAR9)
            goto VAR17;
        FUN11(VAR9, 64, 1, 1000000);
        VAR13 = VAR9->VAR13;
        VAR13->VAR23 = FUN4(VAR11);
        VAR13->VAR24 = FUN12(VAR11);
        VAR13->VAR25 = FUN4(VAR11);
        VAR9->VAR26 = FUN4(VAR11);
        VAR13->VAR27 = FUN4(VAR11);
        VAR13->VAR28 = FUN4(VAR11);
        VAR13->VAR29 = FUN4(VAR11);
        switch (VAR13->VAR24)
        {
        case VAR30:
            VAR13->VAR31.VAR32 = FUN4(VAR11);
            VAR13->VAR31.VAR33 = FUN4(VAR11);
            VAR13->VAR34 = FUN13(VAR11);
            VAR13->VAR35 = FUN13(VAR11);
            VAR13->VAR36 = FUN13(VAR11);
            VAR13->VAR37 = FUN4(VAR11);
            VAR13->VAR38 = FUN12(VAR11);
            VAR13->VAR39 = FUN12(VAR11);
            VAR13->VAR40 = FUN12(VAR11);
            VAR13->VAR41 = FUN13(VAR11) / 10000.0;
            VAR13->VAR42 = FUN13(VAR11) / 10000.0;
            VAR13->VAR43 = FUN4(VAR11);
            VAR13->VAR44 = FUN14(FUN15(VAR11, VAR22, sizeof(VAR22)));
            VAR13->VAR45 = FUN4(VAR11);
            VAR13->VAR46 = FUN4(VAR11);
            VAR13->VAR47 = FUN4(VAR11);
            VAR13->VAR48 = FUN16(FUN5(VAR11));
            VAR13->VAR49 = FUN16(FUN5(VAR11));
            VAR13->VAR50 = FUN16(FUN5(VAR11));
            VAR13->VAR51 = FUN16(FUN5(VAR11));
            VAR13->VAR52 = FUN4(VAR11);
            VAR13->VAR53 = FUN4(VAR11);
            VAR13->VAR54 = FUN4(VAR11);
            VAR13->VAR55 = FUN4(VAR11);
            VAR13->VAR56 = FUN4(VAR11);
            VAR13->VAR57 = FUN4(VAR11);
            VAR13->VAR58 = FUN4(VAR11);
            VAR13->VAR59 = FUN4(VAR11);
            VAR13->VAR60 = FUN4(VAR11);
            VAR13->VAR61 = FUN4(VAR11);
            VAR13->VAR62 = FUN4(VAR11);
            VAR13->VAR63 = FUN16(FUN5(VAR11));
            VAR13->VAR64 = FUN4(VAR11);
            VAR13->VAR65 = FUN12(VAR11);
            VAR13->VAR66 = FUN4(VAR11);
            VAR13->VAR67 = FUN4(VAR11);
            VAR13->VAR68 = FUN4(VAR11);
            VAR13->VAR69 = FUN4(VAR11);
            VAR13->VAR70 = FUN4(VAR11);
            VAR13->VAR71 = FUN4(VAR11);
            VAR13->VAR72 = FUN4(VAR11);
            VAR13->VAR73 = FUN4(VAR11);
            VAR13->VAR41 = FUN16(FUN5(VAR11));
            VAR13->VAR42 = FUN16(FUN5(VAR11));
            VAR13->VAR40 = FUN4(VAR11);
            VAR13->VAR74 = FUN4(VAR11);
            VAR13->VAR75 = FUN4(VAR11);
            break;
        case VAR76:
            VAR13->VAR77 = FUN4(VAR11);
            VAR13->VAR78 = FUN17(VAR11);
            VAR13->VAR79 = FUN17(VAR11);
            VAR13->VAR80 = (VAR81)FUN17(VAR11);
            break;
        default:
            goto VAR17;
        }
        if (VAR13->VAR27 & VAR82)
        {
            VAR13->VAR83 = FUN4(VAR11);
            VAR13->VAR84 = FUN18(VAR13->VAR83);
            if (!VAR13->VAR84)
                return FUN19(VAR85);
            FUN20(VAR11, VAR13->VAR84, VAR13->VAR83);
        }
    }
    while ((FUN21(VAR11) % VAR6->VAR18) != 0)
        FUN12(VAR11);
    VAR6->VAR86 = VAR6->VAR87;
    VAR6->VAR88 = VAR6->VAR87;
    VAR6->VAR89 = 0;
    VAR6->VAR90 = 0;
    VAR6->VAR91 = VAR92;
    VAR6->VAR93 = 1;
    return 0;
VAR17:
    for (VAR14 = 0; VAR14 < VAR2->VAR15; VAR14++)
    {
        VAR9 = VAR2->VAR94[VAR14];
        if (VAR9)
        {
            FUN22(VAR9);
        }
    }
    return -1;
}