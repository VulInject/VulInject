static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    const VAR12 *VAR13;
    int VAR14, VAR15;
    uint32_t VAR16;
    VAR16 = FUN2(VAR9);
    if (VAR16 == FUN3('', '', '', ''))
        return FUN4(VAR2);
    if (VAR16 != FUN3('', '', '', ''))
        VAR4->VAR17 = FUN5(VAR9);
    if (VAR4->VAR17 != VAR18)
        VAR4->VAR19 = FUN6(VAR9);
    if (VAR9->VAR20)
    {
        VAR4->VAR21 = FUN7(VAR9);
        if (VAR4->VAR19 && 0)
            FUN8(VAR2);
    }
    else
    {
        VAR4->VAR21 = (FUN9(1) << 63) - 1;
        VAR15 = FUN5(VAR9);
        FUN5(VAR9);
        for (VAR14 = 0; VAR14 < VAR15; VAR14++)
        {
            char VAR22[128];
            VAR7 = FUN10(VAR2, NULL);
            if (!VAR7)
                FUN11(VAR7, 64, 1, 1000000);
            VAR11 = VAR7->VAR11;
            VAR11->VAR23 = FUN5(VAR9);
            VAR13 = FUN12(VAR11->VAR23);
            if (!VAR13)
            {
                FUN13(VAR2, VAR24, "", VAR11->VAR23);
                VAR11->VAR23 = VAR25;
                VAR11->VAR26 = FUN14(VAR9);
                if (VAR11->VAR26 != VAR13->VAR27)
                {
                    FUN13(VAR2, VAR24, "", VAR13->VAR27, VAR11->VAR26);
                    VAR11->VAR23 = VAR25;
                    VAR11->VAR26 = VAR28;
                    VAR11->VAR29 = FUN5(VAR9);
                    VAR11->VAR30 = FUN5(VAR9);
                    VAR11->VAR31 = FUN5(VAR9);
                    VAR11->VAR32 = FUN5(VAR9);
                    switch (VAR11->VAR26)
                    {
                    case VAR33:
                        VAR11->VAR34.VAR35 = FUN5(VAR9);
                        VAR11->VAR34.VAR36 = FUN5(VAR9);
                        if (VAR11->VAR34.VAR35 <= 0 || VAR11->VAR34.VAR36 <= 0)
                        {
                            FUN13(VAR2, VAR24, "", VAR11->VAR34.VAR35, VAR11->VAR34.VAR36);
                            VAR11->VAR37 = FUN15(VAR9);
                            VAR11->VAR38 = FUN15(VAR9);
                            VAR11->VAR39 = FUN15(VAR9);
                            VAR11->VAR40 = FUN5(VAR9);
                            VAR11->VAR41 = FUN14(VAR9);
                            VAR11->VAR42 = FUN14(VAR9);
                            VAR11->VAR43 = FUN14(VAR9);
                            VAR11->VAR44 = FUN15(VAR9) / 10000.0;
                            VAR11->VAR45 = FUN15(VAR9) / 10000.0;
                            VAR11->VAR46 = FUN5(VAR9);
                            FUN16(VAR9, VAR47, VAR22, sizeof(VAR22));
                            VAR11->VAR48 = FUN17(VAR22);
                            VAR11->VAR49 = FUN5(VAR9);
                            VAR11->VAR50 = FUN5(VAR9);
                            VAR11->VAR51 = FUN5(VAR9);
                            VAR11->VAR52 = FUN18(FUN6(VAR9));
                            VAR11->VAR53 = FUN18(FUN6(VAR9));
                            VAR11->VAR54 = FUN18(FUN6(VAR9));
                            VAR11->VAR55 = FUN18(FUN6(VAR9));
                            VAR11->VAR56 = FUN5(VAR9);
                            VAR11->VAR57 = FUN5(VAR9);
                            VAR11->VAR58 = FUN5(VAR9);
                            VAR11->VAR59 = FUN5(VAR9);
                            VAR11->VAR60 = FUN5(VAR9);
                            VAR11->VAR61 = FUN5(VAR9);
                            VAR11->VAR62 = FUN5(VAR9);
                            VAR11->VAR63 = FUN5(VAR9);
                            VAR11->VAR64 = FUN5(VAR9);
                            VAR11->VAR65 = FUN18(FUN6(VAR9));
                            VAR11->VAR66 = FUN5(VAR9);
                            VAR11->VAR67 = FUN14(VAR9);
                            VAR11->VAR68 = FUN5(VAR9);
                            VAR11->VAR69 = FUN5(VAR9);
                            VAR11->VAR70 = FUN5(VAR9);
                            VAR11->VAR71 = FUN5(VAR9);
                            VAR11->VAR72 = FUN5(VAR9);
                            VAR11->VAR73 = FUN5(VAR9);
                            VAR11->VAR74 = FUN5(VAR9);
                            VAR11->VAR44 = FUN18(FUN6(VAR9));
                            VAR11->VAR45 = FUN18(FUN6(VAR9));
                            VAR11->VAR43 = FUN5(VAR9);
                            VAR11->VAR75 = FUN5(VAR9);
                            break;
                        case VAR76:
                            VAR11->VAR77 = FUN5(VAR9);
                            VAR11->VAR78 = FUN19(VAR9);
                            VAR11->VAR79 = FUN19(VAR9);
                            break;
                        default:
                            if (VAR11->VAR30 & VAR80)
                            {
                                int VAR81 = FUN5(VAR9);
                                VAR11->VAR82 = FUN20(VAR81 + VAR83);
                                if (!VAR11->VAR82)
                                    return FUN21(VAR84);
                                VAR11->VAR85 = VAR81;
                                FUN22(VAR9, VAR11->VAR82, VAR81);
                                FUN23(VAR7->VAR86, VAR11);
                                while ((FUN24(VAR9) % VAR4->VAR17) != 0 && !VAR9->VAR87)
                                    FUN14(VAR9);
                                VAR4->VAR88 = VAR4->VAR89;
                                VAR4->VAR90 = VAR4->VAR89;
                                VAR4->VAR91 = 0;
                                VAR4->VAR92 = 0;
                                VAR4->VAR93 = VAR94;
                                VAR4->VAR95 = 1;
                                return 0;
                            VAR96:
                                FUN25(VAR2);
                                return -1;