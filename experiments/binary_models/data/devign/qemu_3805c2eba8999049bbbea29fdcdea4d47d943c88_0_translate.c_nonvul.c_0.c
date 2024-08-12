void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = FUN2(VAR6);
    DisasContext VAR10, *VAR11 = &VAR10;
    target_ulong VAR12;
    target_ulong VAR13;
    int VAR14;
    int VAR15;
    bool VAR16;
    if (FUN3(VAR4->VAR17))
    {
        FUN4(VAR2, VAR4);
        return;
    }
    VAR12 = VAR4->VAR18;
    VAR11->VAR4 = VAR4;
    VAR11->VAR19 = VAR20;
    VAR11->VAR18 = VAR12;
    VAR11->VAR21 = VAR2->VAR21;
    VAR11->VAR22 = 0;
    VAR11->VAR23 = 0;
    VAR11->VAR24 = FUN5(VAR6, VAR25) && !FUN6(VAR6, 3);
    VAR11->VAR26 = FUN7(VAR4->VAR17);
    VAR11->VAR27 = FUN8(VAR4->VAR17);
    VAR11->VAR28 = FUN9(VAR4->VAR17) ? VAR29 : VAR30;
    VAR11->VAR31 = (FUN10(VAR4->VAR17) & 0xf) << 1;
    VAR11->VAR32 = FUN10(VAR4->VAR17) >> 4;
    VAR11->VAR33 = FUN11(VAR6, FUN12(VAR4->VAR17));
    VAR11->VAR34 = FUN13(VAR11->VAR33);
    VAR11->VAR35 = (VAR11->VAR34 == 0);
    VAR11->VAR36 = FUN14(VAR4->VAR17);
    VAR11->VAR37 = FUN15(VAR4->VAR17);
    VAR11->VAR38 = FUN16(VAR4->VAR17);
    VAR11->VAR39 = FUN17(VAR4->VAR17);
    VAR11->VAR40 = FUN18(VAR4->VAR17);
    VAR11->VAR41 = FUN19(VAR4->VAR17);
    VAR11->VAR42 = FUN20(VAR4->VAR17);
    VAR11->VAR43 = VAR9->VAR43;
    VAR11->VAR44 = VAR6->VAR44;
    VAR11->VAR45 = FUN21(VAR4->VAR17);
    VAR11->VAR46 = FUN22(VAR4->VAR17);
    VAR11->VAR47 = false;
    VAR11->VAR48 = false;
    VAR49 = FUN23();
    VAR50 = FUN23();
    VAR51 = FUN24();
    VAR52 = FUN24();
    VAR53 = VAR51;
    VAR54 = VAR52;
    VAR55 = FUN24();
    VAR13 = (VAR12 & VAR56) + VAR57;
    VAR14 = 0;
    VAR15 = VAR4->VAR58 & VAR59;
    if (VAR15 == 0)
    {
        VAR15 = VAR59;
    }
    if (VAR15 > VAR60)
    {
        VAR15 = VAR60;
    }
    FUN25(VAR4);
    FUN26();
    if (VAR11->VAR31 || VAR11->VAR32)
    {
        TCGv_i32 VAR61 = FUN23();
        FUN27(VAR61, 0);
        FUN28(VAR61, VAR62);
    }
    do
    {
        VAR11->VAR63 = FUN29();
        FUN30(VAR11->VAR18, (VAR11->VAR32 << 4) | (VAR11->VAR31 >> 1), 0);
        VAR14++;
        if (FUN31(!FUN32(&VAR2->VAR64)))
        {
            VAR65 *VAR66;
            FUN33(VAR66, &VAR2->VAR64, VAR67)
            {
                if (VAR66->VAR18 == VAR11->VAR18)
                {
                    if (VAR66->VAR17 & VAR68)
                    {
                        FUN34(VAR11);
                        FUN35(VAR11, VAR11->VAR18);
                        FUN36(VAR69);
                        VAR11->VAR19 = VAR70;
                    }
                    else
                    {
                        FUN37(VAR11, 0, VAR71);
                        VAR11->VAR18 += 2;
                        goto VAR72;
                    }
                    break;
                }
            }
        }
        if (VAR14 == VAR15 && (VAR4->VAR58 & VAR73))
        {
            FUN38();
        }
        if (VAR11->VAR18 >= 0xffff0000)
        {
            FUN39(VAR74);
            VAR11->VAR19 = VAR75;
            break;
        }
        if (VAR11->VAR45 && !VAR11->VAR46)
        {
            assert(VAR14 == 1);
            FUN40(VAR76, FUN41(VAR11->VAR48, 0, 0), FUN42(VAR11));
            goto VAR72;
        }
        if (VAR11->VAR26)
        {
            FUN43(VAR6, VAR11);
            if (VAR11->VAR31)
            {
                VAR11->VAR32 = (VAR11->VAR32 & 0xe) | ((VAR11->VAR31 >> 4) & 1);
                VAR11->VAR31 = (VAR11->VAR31 << 1) & 0x1f;
                if (VAR11->VAR31 == 0)
                {
                    VAR11->VAR32 = 0;
                }
            }
        }
        else
        {
            unsigned int VAR77 = FUN44(VAR6, VAR11->VAR18, VAR11->VAR27);
            VAR11->VAR18 += 4;
            FUN45(VAR11, VAR77);
        }
        if (VAR11->VAR22 && !VAR11->VAR19)
        {
            FUN46(VAR11->VAR78);
            VAR11->VAR22 = 0;
        }
        if (FUN47())
        {
            fprintf(VAR79, "" VAR80 "", VAR11->VAR18);
        }
        VAR16 = (VAR11->VAR18 >= VAR13) || ((VAR11->VAR18 >= VAR13 - 3) && FUN48(VAR6, VAR11));
    } while (!VAR11->VAR19 && !FUN49() && !FUN50(VAR11) && !VAR81 && !VAR16 && VAR14 < VAR15);
    if (VAR4->VAR58 & VAR73)
    {
        if (VAR11->VAR22)
        {
            FUN51(VAR2, "");
        }
        FUN52();
    }
    FUN34(VAR11);
    if (VAR11->VAR19 == VAR82)
    {
        FUN53(VAR11);
    }
    else if (FUN31(FUN50(VAR11)))
    {
        switch (VAR11->VAR19)
        {
        case VAR83:
            FUN54(VAR11);
            FUN40(VAR84, FUN55(VAR11->VAR85, VAR11->VAR26), FUN42(VAR11));
            break;
        case VAR86:
            FUN54(VAR11);
            FUN40(VAR87, FUN56(VAR11->VAR85), 2);
            break;
        case VAR88:
            FUN54(VAR11);
            FUN40(VAR89, FUN57(), 3);
            break;
        case VAR20:
        case VAR70:
            FUN35(VAR11, VAR11->VAR18);
        default:
            FUN58(VAR11);
            break;
        case VAR75:
            break;
        }
    }
    else
    {
        switch (VAR11->VAR19)
        {
        case VAR20:
            FUN59(VAR11, 1, VAR11->VAR18);
            break;
        case VAR90:
            FUN60();
            break;
        case VAR70:
            FUN35(VAR11, VAR11->VAR18);
        default:
            FUN61(0);
            break;
        case VAR75:
            break;
        case VAR91:
            FUN62(VAR69);
            FUN61(0);
            break;
        case VAR92:
            FUN63(VAR69);
            break;
        case VAR93:
            FUN64(VAR69);
            break;
        case VAR83:
            FUN40(VAR84, FUN55(VAR11->VAR85, VAR11->VAR26), FUN42(VAR11));
            break;
        case VAR86:
            FUN40(VAR87, FUN56(VAR11->VAR85), 2);
            break;
        case VAR88:
            FUN40(VAR89, FUN57(), 3);
            break;
        }
    }
    if (VAR11->VAR22)
    {
        FUN46(VAR11->VAR78);
        FUN34(VAR11);
        if (FUN31(FUN50(VAR11)))
        {
            FUN35(VAR11, VAR11->VAR18);
            FUN58(VAR11);
        }
        else
        {
            FUN59(VAR11, 1, VAR11->VAR18);
        }
    }
VAR72:
    FUN65(VAR4, VAR14);
    if (FUN66(VAR94) && FUN67(VAR12))
    {
        FUN68();
        FUN69("");
        FUN69("", FUN70(VAR12));
        FUN71(VAR2, VAR12, VAR11->VAR18 - VAR12, VAR11->VAR26 | (VAR11->VAR27 << 1));
        FUN69("");
        FUN72();
    }
    VAR4->VAR95 = VAR11->VAR18 - VAR12;
    VAR4->VAR96 = VAR14;
}