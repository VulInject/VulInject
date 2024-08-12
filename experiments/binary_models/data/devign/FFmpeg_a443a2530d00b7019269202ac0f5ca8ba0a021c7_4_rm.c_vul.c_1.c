static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = &VAR2->VAR11;
    unsigned int VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int64_t VAR18;
    unsigned int VAR19, VAR20, VAR21;
    char VAR22[128];
    int VAR23 = 0;
    VAR12 = FUN2(VAR11);
    if (VAR12 == FUN3('', '', '', 0xfd))
    {
        return FUN4(VAR2, VAR4);
    }
    else if (VAR12 != FUN3('', '', '', ''))
    {
        return VAR24;
        FUN5(VAR11);
        FUN6(VAR11);
        FUN5(VAR11);
        FUN5(VAR11);
        for (;;)
        {
            if (FUN7(VAR11))
                goto VAR25;
            VAR12 = FUN2(VAR11);
            VAR14 = FUN5(VAR11);
            FUN6(VAR11);
            FUN8("", (VAR12)&0xff, (VAR12 >> 8) & 0xff, (VAR12 >> 16) & 0xff, (VAR12 >> 24) & 0xff, VAR12, VAR14);
            if (VAR14 < 10 && VAR12 != FUN3('', '', '', ''))
                goto VAR25;
            switch (VAR12)
            {
            case FUN3('', '', '', ''):
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                FUN6(VAR11);
                VAR23 = FUN6(VAR11);
                break;
            case FUN3('', '', '', ''):
                FUN9(VAR11, VAR2->VAR26, sizeof(VAR2->VAR26));
                FUN9(VAR11, VAR2->VAR27, sizeof(VAR2->VAR27));
                FUN9(VAR11, VAR2->VAR28, sizeof(VAR2->VAR28));
                FUN9(VAR11, VAR2->VAR29, sizeof(VAR2->VAR29));
                break;
            case FUN3('', '', '', ''):
                VAR9 = FUN10(VAR2, 0);
                if (!VAR9)
                    goto VAR25;
                VAR9->VAR30 = FUN6(VAR11);
                FUN5(VAR11);
                VAR9->VAR31->VAR32 = FUN5(VAR11);
                FUN5(VAR11);
                FUN5(VAR11);
                VAR20 = FUN5(VAR11);
                FUN5(VAR11);
                VAR21 = FUN5(VAR11);
                VAR9->VAR20 = VAR20;
                VAR9->VAR21 = VAR21;
                FUN11(VAR11, VAR22, sizeof(VAR22));
                FUN11(VAR11, VAR22, sizeof(VAR22));
                VAR16 = FUN5(VAR11);
                VAR18 = FUN12(VAR11);
                VAR9->VAR31->VAR33 = VAR34;
                FUN13(VAR9, 64, 1, 1000);
                VAR13 = FUN5(VAR11);
                if (VAR13 == FUN3(0xfd, '', '', ''))
                {
                    FUN14(VAR2, VAR9, 0);
                }
                else
                {
                    int VAR35, VAR36;
                    if (FUN2(VAR11) != FUN3('', '', '', ''))
                    {
                    VAR37:
                        FUN15(VAR9->VAR31, VAR38, "");
                        goto VAR39;
                        VAR9->VAR31->VAR40 = FUN2(VAR11);
                        if (VAR9->VAR31->VAR40 != FUN3('', '', '', '') && VAR9->VAR31->VAR40 != FUN3('', '', '', '') && VAR9->VAR31->VAR40 != FUN3('', '', '', '') && VAR9->VAR31->VAR40 != FUN3('', '', '', ''))
                            goto VAR37;
                        VAR9->VAR31->VAR41 = FUN6(VAR11);
                        VAR9->VAR31->VAR42 = FUN6(VAR11);
                        VAR9->VAR31->VAR43.VAR44 = 1;
                        VAR35 = FUN6(VAR11);
                        VAR9->VAR31->VAR33 = VAR45;
                        FUN5(VAR11);
                        VAR36 = FUN6(VAR11);
                        FUN6(VAR11);
                        VAR9->VAR31->VAR46 = VAR16 - (FUN12(VAR11) - VAR18);
                        VAR9->VAR31->VAR47 = FUN16(VAR9->VAR31->VAR46 + VAR48);
                        FUN17(VAR11, VAR9->VAR31->VAR47, VAR9->VAR31->VAR46);
                        VAR9->VAR31->VAR43.VAR49 = VAR35 * VAR9->VAR31->VAR43.VAR44;
                        VAR19 = ((VAR50 *)VAR9->VAR31->VAR47)[1];
                        VAR19 = FUN18(((VAR50 *)VAR9->VAR31->VAR47)[1]);
                        VAR9->VAR31->VAR51 = VAR19;
                        switch ((VAR19 >> 28))
                        {
                        case 1:
                            VAR9->VAR31->VAR52 = VAR53;
                            break;
                        case 2:
                            VAR9->VAR31->VAR52 = VAR54;
                            break;
                        case 3:
                            VAR9->VAR31->VAR52 = VAR55;
                            break;
                        case 4:
                            VAR9->VAR31->VAR52 = VAR56;
                            break;
                        default:
                            goto VAR37;
                        VAR39:
                            VAR15 = FUN12(VAR11) - VAR18;
                            FUN19(VAR11, VAR16 - VAR15);
                            break;
                        case FUN3('', '', '', ''):
                            goto VAR57;
                        default:
                            FUN19(VAR11, VAR14 - 10);
                            break;
                        VAR57:
                            VAR6->VAR58 = FUN5(VAR11);
                            if (!VAR6->VAR58 && (VAR23 & 4))
                                VAR6->VAR58 = 3600 * 25;
                            FUN5(VAR11);
                            return 0;
                        VAR25:
                            for (VAR17 = 0; VAR17 < VAR2->VAR59; VAR17++)
                            {
                                FUN20(VAR2->VAR60[VAR17]);
                                return VAR24