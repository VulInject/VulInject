static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11, *VAR12 = NULL;
    VAR13 *VAR14;
    const VAR15 *VAR16;
    int VAR17;
    int VAR18 = 0, VAR19 = -1, VAR20 = -1, VAR21 = -1;
    VAR22 *VAR23;
    char *VAR24;
    VAR4->VAR25 = FUN2(VAR9);
    if (VAR4->VAR25 != VAR26)
    {
        FUN3(VAR2, VAR27, "", VAR4->VAR25, VAR26);
        VAR17 = VAR28;
        goto VAR29;
    }
    VAR4->VAR30 = FUN4(VAR9);
    if (VAR9->VAR31)
    {
        VAR4->VAR32 = FUN5(VAR9);
        if (VAR4->VAR30 && 0)
            FUN6(VAR2);
    }
    else
    {
        VAR4->VAR32 = (FUN7(1) << 63) - 1;
    }
    VAR12 = FUN8(NULL);
    while (!FUN9(VAR9))
    {
        unsigned VAR33 = FUN2(VAR9);
        unsigned VAR34 = FUN2(VAR9);
        int64_t VAR35 = FUN10(VAR9) + VAR34;
        char VAR36[128];
        if (!VAR33)
            break;
        switch (VAR33)
        {
        case FUN11('', '', '', ''):
            if (VAR18++)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            FUN2(VAR9);
            FUN2(VAR9);
            break;
        case FUN11('', '', '', ''):
            VAR19 = VAR20 = VAR21 = 0;
            VAR7 = FUN13(VAR2, NULL);
            if (!VAR7)
            {
                VAR17 = FUN12(VAR38);
                goto VAR29;
            }
            FUN14(VAR7, 64, 1, 1000000);
            VAR11 = VAR7->VAR11;
            VAR14 = VAR7->VAR14;
            VAR14->VAR39 = FUN2(VAR9);
            VAR16 = FUN15(VAR14->VAR39);
            if (!VAR16)
            {
                FUN3(VAR2, VAR27, "", VAR14->VAR39);
                VAR14->VAR39 = VAR40;
                VAR17 = VAR28;
                goto VAR29;
            }
            VAR14->VAR41 = FUN16(VAR9);
            if (VAR14->VAR41 != VAR16->VAR42)
            {
                FUN3(VAR2, VAR27, "", VAR16->VAR42, VAR14->VAR41);
                VAR14->VAR39 = VAR40;
                VAR14->VAR41 = VAR43;
                VAR17 = VAR28;
                goto VAR29;
            }
            VAR14->VAR44 = FUN2(VAR9);
            if (VAR14->VAR44 < 0)
            {
                FUN3(VAR11, VAR27, "" VAR45 "", VAR14->VAR44);
                VAR17 = VAR28;
                goto VAR29;
            }
            VAR11->VAR46 = FUN2(VAR9);
            VAR11->VAR47 = FUN2(VAR9);
            VAR11->VAR48 = FUN2(VAR9);
            if (VAR11->VAR46 & VAR49)
            {
                int VAR34 = FUN2(VAR9);
                if (VAR34 < 0 || VAR34 >= VAR50)
                {
                    FUN3(VAR2, VAR27, "", VAR34);
                    VAR17 = VAR28;
                    goto VAR29;
                }
                VAR14->VAR51 = FUN17(VAR34 + VAR52);
                if (!VAR14->VAR51)
                    return FUN12(VAR38);
                VAR14->VAR53 = VAR34;
                FUN18(VAR9, VAR14->VAR51, VAR34);
            }
            break;
        case FUN11('', '', '', ''):
            if (VAR20++ || VAR14->VAR41 != VAR54)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            VAR11->VAR55.VAR56 = FUN2(VAR9);
            VAR11->VAR55.VAR57 = FUN2(VAR9);
            if (VAR11->VAR55.VAR56 <= 0 || VAR11->VAR55.VAR57 <= 0)
            {
                FUN3(VAR2, VAR27, "", VAR11->VAR55.VAR56, VAR11->VAR55.VAR57);
                VAR17 = VAR28;
                goto VAR29;
            }
            VAR14->VAR58 = FUN19(VAR9);
            VAR14->VAR59 = FUN19(VAR9);
            VAR17 = FUN20(VAR14->VAR58, VAR14->VAR59, 0, VAR2);
            if (VAR17 < 0)
                goto VAR29;
            FUN19(VAR9);
            VAR14->VAR60 = FUN2(VAR9);
            if (!FUN21(VAR14->VAR60))
            {
                FUN3(VAR2, VAR27, "", VAR14->VAR60);
                VAR14->VAR60 = VAR61;
                goto VAR29;
            }
            FUN16(VAR9);
            FUN16(VAR9);
            FUN16(VAR9);
            FUN19(VAR9);
            FUN19(VAR9);
            FUN2(VAR9);
            FUN22(VAR9, VAR62, VAR36, sizeof(VAR36));
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN4(VAR9);
            FUN4(VAR9);
            FUN4(VAR9);
            FUN4(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN4(VAR9);
            VAR14->VAR63 = FUN2(VAR9);
            FUN16(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            FUN4(VAR9);
            FUN4(VAR9);
            FUN2(VAR9);
            FUN2(VAR9);
            break;
        case FUN11('', '', '', ''):
            if (VAR21++ || VAR14->VAR41 != VAR64)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            VAR14->VAR65 = FUN2(VAR9);
            FUN23(VAR65, "", VAR14->VAR65 < 0)
            VAR14->VAR66 = FUN24(VAR9);
            FUN23(VAR66, "", VAR14->VAR66 < 0)
            VAR14->VAR67 = FUN24(VAR9);
            FUN23(VAR67, "", VAR14->VAR67 < 0)
            break;
        case FUN11('', '', '', ''):
            if (VAR19++)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            VAR23 = FUN25(VAR14->VAR39);
            if (VAR23 && VAR23->VAR68 && VAR23->VAR69)
            {
                VAR24 = FUN26(VAR34 + 1);
                if (!VAR24)
                {
                    VAR17 = FUN12(VAR38);
                    goto VAR29;
                }
                FUN22(VAR9, VAR34, VAR24, VAR34 + 1);
                if ((VAR17 = FUN27(VAR7, &VAR24)) < 0)
                    goto VAR29;
            }
            break;
        case FUN11('', '', '', ''):
            if (VAR20++ || !VAR34 || VAR14->VAR41 != VAR54)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            VAR24 = FUN26(VAR34);
            if (!VAR24)
            {
                VAR17 = FUN12(VAR38);
                goto VAR29;
            }
            FUN22(VAR9, VAR62, VAR24, VAR34);
            FUN28(VAR12, VAR14);
            FUN29(VAR12, VAR24, "", "");
            FUN30(VAR14, VAR12);
            if ((VAR17 = FUN27(VAR7, &VAR24)) < 0)
                goto VAR29;
            break;
        case FUN11('', '', '', ''):
            if (VAR21++ || !VAR34 || VAR14->VAR41 != VAR64)
            {
                VAR17 = FUN12(VAR37);
                goto VAR29;
            }
            VAR24 = FUN26(VAR34);
            if (!VAR24)
            {
                VAR17 = FUN12(VAR38);
                goto VAR29;
            }
            FUN22(VAR9, VAR62, VAR24, VAR34);
            FUN28(VAR12, VAR14);
            FUN29(VAR12, VAR24, "", "");
            FUN30(VAR14, VAR12);
            if ((VAR17 = FUN27(VAR7, &VAR24)) < 0)
                goto VAR29;
            break;
        }
        FUN31(VAR9, VAR35, VAR70);
    }
    while ((FUN10(VAR9) % VAR4->VAR25) != 0 && !VAR9->VAR71)
        FUN16(VAR9);
    VAR4->VAR72 = VAR4->VAR73;
    VAR4->VAR74 = VAR4->VAR73;
    VAR4->VAR75 = 0;
    VAR4->VAR76 = 0;
    VAR4->VAR77 = VAR78;
    VAR4->VAR79 = 1;
    FUN32(&VAR12);
    return 0;
VAR29:
    FUN32(&VAR12);
    return VAR17;
}