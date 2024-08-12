void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    DisasContext VAR9, *VAR10 = &VAR9;
    target_ulong VAR11;
    target_ulong VAR12;
    int VAR13;
    int VAR14;
    bool VAR15;
    if (FUN4(VAR4->VAR16))
    {
        FUN5(VAR6, VAR4);
        return;
    }
    VAR11 = VAR4->VAR17;
    VAR10->VAR4 = VAR4;
    VAR10->VAR18 = VAR19;
    VAR10->VAR17 = VAR11;
    VAR10->VAR20 = VAR8->VAR20;
    VAR10->VAR21 = 0;
    VAR10->VAR22 = 0;
    VAR10->VAR23 = FUN6(VAR2, VAR24) && !FUN7(VAR2, 3);
    VAR10->VAR25 = FUN8(VAR4->VAR16);
    VAR10->VAR26 = FUN9(VAR4->VAR16);
    VAR10->VAR27 = FUN10(VAR4->VAR16) ? VAR28 : VAR29;
    VAR10->VAR30 = (FUN11(VAR4->VAR16) & 0xf) << 1;
    VAR10->VAR31 = FUN11(VAR4->VAR16) >> 4;
    VAR10->VAR32 = FUN12(VAR4->VAR16);
    VAR10->VAR33 = FUN13(VAR10->VAR32);
    VAR10->VAR34 = (VAR10->VAR33 == 0);
    VAR10->VAR35 = FUN14(VAR4->VAR16);
    VAR10->VAR36 = FUN15(VAR4->VAR16);
    VAR10->VAR37 = FUN16(VAR4->VAR16);
    VAR10->VAR38 = FUN17(VAR4->VAR16);
    VAR10->VAR39 = FUN18(VAR4->VAR16);
    VAR10->VAR40 = FUN19(VAR4->VAR16);
    VAR10->VAR41 = VAR6->VAR41;
    VAR10->VAR42 = VAR2->VAR42;
    VAR10->VAR43 = FUN20(VAR4->VAR16);
    VAR10->VAR44 = FUN21(VAR4->VAR16);
    VAR10->VAR45 = false;
    VAR10->VAR46 = false;
    VAR47 = FUN22();
    VAR48 = FUN22();
    VAR49 = FUN23();
    VAR50 = FUN23();
    VAR51 = VAR49;
    VAR52 = VAR50;
    VAR53 = FUN23();
    VAR12 = (VAR11 & VAR54) + VAR55;
    VAR13 = 0;
    VAR14 = VAR4->VAR56 & VAR57;
    if (VAR14 == 0)
    {
        VAR14 = VAR57;
    }
    if (VAR14 > VAR58)
    {
        VAR14 = VAR58;
    }
    FUN24(VAR4);
    FUN25();
    if (VAR10->VAR30 || VAR10->VAR31)
    {
        TCGv_i32 VAR59 = FUN22();
        FUN26(VAR59, 0);
        FUN27(VAR59, VAR60);
    }
    do
    {
        VAR10->VAR61 = FUN28();
        FUN29(VAR10->VAR17, (VAR10->VAR31 << 4) | (VAR10->VAR30 >> 1), 0);
        VAR13++;
        if (VAR10->VAR17 >= 0xffff0000)
        {
            FUN30(VAR62);
            VAR10->VAR18 = VAR63;
            break;
        }
        if (FUN31(VAR10, VAR64))
        {
            assert(VAR10->VAR17 < 0xfffffff0);
        }
        if (FUN32(!FUN33(&VAR8->VAR65)))
        {
            VAR66 *VAR67;
            FUN34(VAR67, &VAR8->VAR65, VAR68)
            {
                if (VAR67->VAR17 == VAR10->VAR17)
                {
                    if (VAR67->VAR16 & VAR69)
                    {
                        FUN35(VAR10);
                        FUN36(VAR10, VAR10->VAR17);
                        FUN37(VAR70);
                        VAR10->VAR18 = VAR71;
                    }
                    else
                    {
                        FUN38(VAR10, 0, VAR72);
                        VAR10->VAR17 += 2;
                        goto VAR73;
                    }
                    break;
                }
            }
        }
        if (VAR13 == VAR14 && (VAR4->VAR56 & VAR74))
        {
            FUN39();
        }
        if (VAR10->VAR43 && !VAR10->VAR44)
        {
            assert(VAR13 == 1);
            FUN40(VAR75, FUN41(VAR10->VAR46, 0, 0), FUN42(VAR10));
            goto VAR73;
        }
        if (VAR10->VAR25)
        {
            FUN43(VAR2, VAR10);
            if (VAR10->VAR30)
            {
                VAR10->VAR31 = (VAR10->VAR31 & 0xe) | ((VAR10->VAR30 >> 4) & 1);
                VAR10->VAR30 = (VAR10->VAR30 << 1) & 0x1f;
                if (VAR10->VAR30 == 0)
                {
                    VAR10->VAR31 = 0;
                }
            }
        }
        else
        {
            unsigned int VAR76 = FUN44(VAR2, VAR10->VAR17, VAR10->VAR26);
            VAR10->VAR17 += 4;
            FUN45(VAR10, VAR76);
        }
        if (VAR10->VAR21 && !VAR10->VAR18)
        {
            FUN46(VAR10->VAR77);
            VAR10->VAR21 = 0;
        }
        if (FUN47())
        {
            fprintf(VAR78, "" VAR79 "", VAR10->VAR17);
        }
        VAR15 = (VAR10->VAR17 >= VAR12) || ((VAR10->VAR17 >= VAR12 - 3) && FUN48(VAR2, VAR10));
    } while (!VAR10->VAR18 && !FUN49() && !FUN50(VAR10) && !VAR80 && !VAR15 && VAR13 < VAR14);
    if (VAR4->VAR56 & VAR74)
    {
        if (VAR10->VAR21)
        {
            FUN51(VAR8, "");
        }
        FUN52();
    }
    FUN35(VAR10);
    if (FUN32(FUN50(VAR10)))
    {
        switch (VAR10->VAR18)
        {
        case VAR81:
            FUN53(VAR10);
            FUN40(VAR82, FUN54(VAR10->VAR83, VAR10->VAR25), FUN42(VAR10));
            break;
        case VAR84:
            FUN53(VAR10);
            FUN40(VAR85, FUN55(VAR10->VAR83), 2);
            break;
        case VAR86:
            FUN53(VAR10);
            FUN40(VAR87, FUN56(), 3);
            break;
        case VAR19:
        case VAR71:
            FUN36(VAR10, VAR10->VAR17);
        default:
            FUN57(VAR10);
        }
    }
    else
    {
        switch (VAR10->VAR18)
        {
        case VAR19:
            FUN58(VAR10, 1, VAR10->VAR17);
            break;
        case VAR71:
            FUN36(VAR10, VAR10->VAR17);
        case VAR88:
        default:
            FUN59(0);
            break;
        case VAR89:
            break;
        case VAR90:
            FUN60(VAR70);
            FUN59(0);
            break;
        case VAR91:
            FUN61(VAR70);
            break;
        case VAR92:
            FUN62(VAR70);
            break;
        case VAR81:
            FUN40(VAR82, FUN54(VAR10->VAR83, VAR10->VAR25), FUN42(VAR10));
            break;
        case VAR84:
            FUN40(VAR85, FUN55(VAR10->VAR83), 2);
            break;
        case VAR86:
            FUN40(VAR87, FUN56(), 3);
            break;
        }
    }
    if (VAR10->VAR21)
    {
        FUN46(VAR10->VAR77);
        FUN35(VAR10);
        if (FUN32(FUN50(VAR10)))
        {
            FUN36(VAR10, VAR10->VAR17);
            FUN57(VAR10);
        }
        else
        {
            FUN58(VAR10, 1, VAR10->VAR17);
        }
    }
VAR73:
    FUN63(VAR4, VAR13);
    if (FUN64(VAR93) && FUN65(VAR11))
    {
        FUN66();
        FUN67("");
        FUN67("", FUN68(VAR11));
        FUN69(VAR8, VAR11, VAR10->VAR17 - VAR11, VAR10->VAR25 | (VAR10->VAR26 << 1));
        FUN67("");
        FUN70();
    }
    VAR4->VAR94 = VAR10->VAR17 - VAR11;
    VAR4->VAR95 = VAR13;