void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    DisasContext VAR9, *VAR10 = &VAR9;
    target_ulong VAR11;
    target_ulong VAR12;
    int VAR13;
    int VAR14;
    if (FUN4(VAR4->VAR15))
    {
        FUN5(VAR6, VAR4);
        return;
    }
    VAR11 = VAR4->VAR16;
    VAR10->VAR4 = VAR4;
    VAR10->VAR17 = VAR18;
    VAR10->VAR16 = VAR11;
    VAR10->VAR19 = VAR8->VAR19;
    VAR10->VAR20 = 0;
    VAR10->VAR21 = 0;
    VAR10->VAR22 = FUN6(VAR2, VAR23) && !FUN7(VAR2, 3);
    VAR10->VAR24 = FUN8(VAR4->VAR15);
    VAR10->VAR25 = FUN9(VAR4->VAR15);
    VAR10->VAR26 = (FUN10(VAR4->VAR15) & 0xf) << 1;
    VAR10->VAR27 = FUN10(VAR4->VAR15) >> 4;
    VAR10->VAR28 = FUN11(VAR4->VAR15);
    VAR10->VAR29 = FUN12(VAR10->VAR28);
    VAR10->VAR30 = (VAR10->VAR29 == 0);
    VAR10->VAR31 = FUN13(VAR4->VAR15);
    VAR10->VAR32 = FUN14(VAR4->VAR15);
    VAR10->VAR33 = FUN15(VAR4->VAR15);
    VAR10->VAR34 = FUN16(VAR4->VAR15);
    VAR10->VAR35 = FUN17(VAR4->VAR15);
    VAR10->VAR36 = FUN18(VAR4->VAR15);
    VAR10->VAR37 = VAR6->VAR37;
    VAR10->VAR38 = VAR2->VAR38;
    VAR10->VAR39 = FUN19(VAR4->VAR15);
    VAR10->VAR40 = FUN20(VAR4->VAR15);
    VAR10->VAR41 = false;
    VAR10->VAR42 = false;
    VAR43 = FUN21();
    VAR44 = FUN21();
    VAR45 = FUN22();
    VAR46 = FUN22();
    VAR47 = VAR45;
    VAR48 = VAR46;
    VAR49 = FUN22();
    VAR12 = (VAR11 & VAR50) + VAR51;
    VAR13 = 0;
    VAR14 = VAR4->VAR52 & VAR53;
    if (VAR14 == 0)
    {
        VAR14 = VAR53;
    }
    if (VAR14 > VAR54)
    {
        VAR14 = VAR54;
    }
    FUN23(VAR4);
    FUN24();
    if (VAR10->VAR26 || VAR10->VAR27)
    {
        TCGv_i32 VAR55 = FUN21();
        FUN25(VAR55, 0);
        FUN26(VAR55, VAR56);
    }
    do
    {
        FUN27(VAR10->VAR16, (VAR10->VAR27 << 4) | (VAR10->VAR26 >> 1));
        VAR13++;
        if (VAR10->VAR16 >= 0xffff0000)
        {
            FUN28(VAR57);
            VAR10->VAR17 = VAR58;
            break;
        }
        if (VAR10->VAR16 >= 0xfffffff0 && FUN29(VAR10, VAR59))
        {
            FUN28(VAR60);
            VAR10->VAR17 = VAR58;
            break;
        }
        if (FUN30(!FUN31(&VAR8->VAR61)))
        {
            VAR62 *VAR63;
            FUN32(VAR63, &VAR8->VAR61, VAR64)
            {
                if (VAR63->VAR16 == VAR10->VAR16)
                {
                    if (VAR63->VAR15 & VAR65)
                    {
                        FUN33(VAR66);
                        VAR10->VAR17 = VAR58;
                    }
                    else
                    {
                        FUN34(VAR10, 0, VAR67);
                        VAR10->VAR16 += 2;
                        goto VAR68;
                    }
                    break;
                }
            }
        }
        if (VAR13 == VAR14 && (VAR4->VAR52 & VAR69))
        {
            FUN35();
        }
        if (VAR10->VAR39 && !VAR10->VAR40)
        {
            assert(VAR13 == 1);
            FUN36(VAR70, FUN37(VAR10->VAR42, 0, 0), FUN38(VAR10));
            goto VAR68;
        }
        if (VAR10->VAR24)
        {
            FUN39(VAR2, VAR10);
            if (VAR10->VAR26)
            {
                VAR10->VAR27 = (VAR10->VAR27 & 0xe) | ((VAR10->VAR26 >> 4) & 1);
                VAR10->VAR26 = (VAR10->VAR26 << 1) & 0x1f;
                if (VAR10->VAR26 == 0)
                {
                    VAR10->VAR27 = 0;
                }
            }
        }
        else
        {
            unsigned int VAR71 = FUN40(VAR2, VAR10->VAR16, VAR10->VAR25);
            VAR10->VAR16 += 4;
            FUN41(VAR10, VAR71);
        }
        if (VAR10->VAR20 && !VAR10->VAR17)
        {
            FUN42(VAR10->VAR72);
            VAR10->VAR20 = 0;
        }
        if (FUN43())
        {
            fprintf(VAR73, "" VAR74 "", VAR10->VAR16);
        }
    } while (!VAR10->VAR17 && !FUN44() && !VAR8->VAR19 && !VAR75 && !VAR10->VAR39 && VAR10->VAR16 < VAR12 && VAR13 < VAR14);
    if (VAR4->VAR52 & VAR69)
    {
        if (VAR10->VAR20)
        {
            FUN45(VAR8, "");
        }
        FUN46();
    }
    if (FUN30(VAR8->VAR19 || VAR10->VAR39))
    {
        if (VAR10->VAR20)
        {
            FUN47(VAR10);
            if (VAR10->VAR17 == VAR76)
            {
                FUN48(VAR10);
                FUN36(VAR77, FUN49(VAR10->VAR78, VAR10->VAR24), FUN38(VAR10));
            }
            else if (VAR10->VAR17 == VAR79)
            {
                FUN48(VAR10);
                FUN36(VAR80, FUN50(VAR10->VAR78), 2);
            }
            else if (VAR10->VAR17 == VAR81)
            {
                FUN48(VAR10);
                FUN36(VAR82, FUN51(), 3);
            }
            else if (VAR10->VAR39)
            {
                FUN52(VAR10);
            }
            else
            {
                FUN28(VAR67);
            }
            FUN42(VAR10->VAR72);
        }
        if (VAR10->VAR20 || !VAR10->VAR17)
        {
            FUN53(VAR10, VAR10->VAR16);
            VAR10->VAR20 = 0;
        }
        FUN47(VAR10);
        if (VAR10->VAR17 == VAR76 && !VAR10->VAR20)
        {
            FUN48(VAR10);
            FUN36(VAR77, FUN49(VAR10->VAR78, VAR10->VAR24), FUN38(VAR10));
        }
        else if (VAR10->VAR17 == VAR79 && !VAR10->VAR20)
        {
            FUN48(VAR10);
            FUN36(VAR80, FUN50(VAR10->VAR78), 2);
        }
        else if (VAR10->VAR17 == VAR81 && !VAR10->VAR20)
        {
            FUN48(VAR10);
            FUN36(VAR82, FUN51(), 3);
        }
        else if (VAR10->VAR39)
        {
            FUN52(VAR10);
        }
        else
        {
            FUN28(VAR67);
        }
    }
    else
    {
        FUN47(VAR10);
        switch (VAR10->VAR17)
        {
        case VAR18:
            FUN54(VAR10, 1, VAR10->VAR16);
            break;
        default:
        case VAR83:
        case VAR58:
            FUN55(0);
            break;
        case VAR84:
            break;
        case VAR85:
            FUN56(VAR66);
            FUN55(0);
            break;
        case VAR86:
            FUN57(VAR66);
            break;
        case VAR87:
            FUN58(VAR66);
            break;
        case VAR76:
            FUN36(VAR77, FUN49(VAR10->VAR78, VAR10->VAR24), FUN38(VAR10));
            break;
        case VAR79:
            FUN36(VAR80, FUN50(VAR10->VAR78), 2);
            break;
        case VAR81:
            FUN36(VAR82, FUN51(), 3);
            break;
        }
        if (VAR10->VAR20)
        {
            FUN42(VAR10->VAR72);
            FUN47(VAR10);
            FUN54(VAR10, 1, VAR10->VAR16);
            VAR10->VAR20 = 0;
        }
    }
VAR68:
    FUN59(VAR4, VAR13);
    if (FUN60(VAR88))
    {
        FUN61("");
        FUN61("", FUN62(VAR11));
        FUN63(VAR8, VAR11, VAR10->VAR16 - VAR11, VAR10->VAR24 | (VAR10->VAR25 << 1));
        FUN61("");
    }
    VAR4->VAR89 = VAR10->VAR16 - VAR11;
    VAR4->VAR90 = VAR13;
}