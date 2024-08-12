static void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR3 &= 0xff;
    if (VAR2->VAR22 & VAR23)
        VAR6 = 1;
    else if (VAR2->VAR22 & VAR24)
        VAR6 = 2;
    else if (VAR2->VAR22 & VAR25)
        VAR6 = 3;
    else
        VAR6 = 0;
    VAR19 = VAR26[VAR3][VAR6];
    if (!VAR19)
        goto VAR27;
    if ((VAR3 <= 0x5f && VAR3 >= 0x10) || VAR3 == 0xc6 || VAR3 == 0xc2)
    {
        VAR9 = 1;
    }
    else
    {
        if (VAR6 == 0)
        {
            VAR9 = 0;
        }
        else
        {
            VAR9 = 1;
        }
    }
    if (VAR2->VAR28 & VAR29)
    {
        FUN2(VAR2, VAR30, VAR4 - VAR2->VAR31);
        return;
    }
    if (VAR2->VAR28 & VAR32)
    {
    VAR27:
        FUN2(VAR2, VAR33, VAR4 - VAR2->VAR31);
        return;
    }
    if (VAR9 && !(VAR2->VAR28 & VAR34))
        goto VAR27;
    if (VAR3 == 0x0e)
    {
        if (!(VAR2->VAR35 & VAR36))
            goto VAR27;
        FUN3();
        return;
    }
    if (VAR3 == 0x77)
    {
        FUN3();
        return;
    }
    if (!VAR9)
    {
        FUN4();
    }
    VAR12 = FUN5(VAR2->VAR37++);
    VAR15 = ((VAR12 >> 3) & 7);
    if (VAR9)
        VAR15 |= VAR5;
    VAR13 = (VAR12 >> 6) & 3;
    if (VAR19 == VAR38)
    {
        VAR3 |= (VAR6 << 8);
        switch (VAR3)
        {
        case 0x0e7:
            if (VAR13 == 3)
                goto VAR27;
            FUN6(VAR2, VAR12, &VAR16, &VAR17);
            VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR42[VAR15].VAR43));
            break;
        case 0x1e7:
        case 0x02b:
        case 0x12b:
        case 0x3f0:
            if (VAR13 == 3)
                goto VAR27;
            FUN6(VAR2, VAR12, &VAR16, &VAR17);
            VAR44[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15]));
            break;
        case 0x6e:
            if (VAR2->VAR46 == 2)
            {
                FUN8(VAR2, VAR12, VAR47, VAR48, 0);
                FUN9(FUN7(VAR41, VAR42[VAR15].VAR43));
            }
            else
            {
                FUN8(VAR2, VAR12, VAR49, VAR48, 0);
                FUN10(FUN7(VAR41, VAR42[VAR15].VAR43));
            }
            break;
        case 0x16e:
            if (VAR2->VAR46 == 2)
            {
                FUN8(VAR2, VAR12, VAR47, VAR48, 0);
                FUN11(FUN7(VAR41, VAR45[VAR15]));
            }
            else
            {
                FUN8(VAR2, VAR12, VAR49, VAR48, 0);
                FUN12(FUN7(VAR41, VAR45[VAR15]));
            }
            break;
        case 0x6f:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR42[VAR15].VAR43));
            }
            else
            {
                VAR14 = (VAR12 & 7);
                FUN13(FUN7(VAR41, VAR42[VAR15].VAR43), FUN7(VAR41, VAR42[VAR14].VAR43));
            }
            break;
        case 0x010:
        case 0x110:
        case 0x028:
        case 0x128:
        case 0x16f:
        case 0x26f:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR51[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15]));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN15(FUN7(VAR41, VAR45[VAR15]), FUN7(VAR41, VAR45[VAR14]));
            }
            break;
        case 0x210:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                FUN16(VAR49 + VAR2->VAR40);
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(0)));
                FUN19();
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(1)));
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(2)));
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(3)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(0)), FUN7(VAR41, VAR45[VAR14].FUN18(0)));
            }
            break;
        case 0x310:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
                FUN19();
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(2)));
                FUN17(FUN7(VAR41, VAR45[VAR15].FUN18(3)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(0)), FUN7(VAR41, VAR45[VAR14].FUN21(0)));
            }
            break;
        case 0x012:
        case 0x112:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(0)), FUN7(VAR41, VAR45[VAR14].FUN21(1)));
            }
            break;
        case 0x212:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR51[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15]));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(0)), FUN7(VAR41, VAR45[VAR14].FUN18(0)));
                FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(2)), FUN7(VAR41, VAR45[VAR14].FUN18(2)));
            }
            FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(1)), FUN7(VAR41, VAR45[VAR15].FUN18(0)));
            FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(3)), FUN7(VAR41, VAR45[VAR15].FUN18(2)));
            break;
        case 0x312:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(0)), FUN7(VAR41, VAR45[VAR14].FUN21(0)));
            }
            FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(1)), FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            break;
        case 0x016:
        case 0x116:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(1)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(1)), FUN7(VAR41, VAR45[VAR14].FUN21(0)));
            }
            break;
        case 0x216:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR51[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15]));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(1)), FUN7(VAR41, VAR45[VAR14].FUN18(1)));
                FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(3)), FUN7(VAR41, VAR45[VAR14].FUN18(3)));
            }
            FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(0)), FUN7(VAR41, VAR45[VAR15].FUN18(1)));
            FUN20(FUN7(VAR41, VAR45[VAR15].FUN18(2)), FUN7(VAR41, VAR45[VAR15].FUN18(3)));
            break;
        case 0x7e:
            if (VAR2->VAR46 == 2)
            {
                FUN22(FUN7(VAR41, VAR42[VAR15].VAR43));
                FUN8(VAR2, VAR12, VAR47, VAR48, 1);
            }
            else
            {
                FUN23(FUN7(VAR41, VAR42[VAR15].VAR43));
                FUN8(VAR2, VAR12, VAR49, VAR48, 1);
            }
            break;
        case 0x17e:
            if (VAR2->VAR46 == 2)
            {
                FUN24(FUN7(VAR41, VAR45[VAR15]));
                FUN8(VAR2, VAR12, VAR47, VAR48, 1);
            }
            else
            {
                FUN25(FUN7(VAR41, VAR45[VAR15]));
                FUN8(VAR2, VAR12, VAR49, VAR48, 1);
            }
            break;
        case 0x27e:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(0)), FUN7(VAR41, VAR45[VAR14].FUN21(0)));
            }
            FUN26(FUN7(VAR41, VAR45[VAR15].FUN21(1)));
            break;
        case 0x7f:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR42[VAR15].VAR43));
            }
            else
            {
                VAR14 = (VAR12 & 7);
                FUN13(FUN7(VAR41, VAR42[VAR14].VAR43), FUN7(VAR41, VAR42[VAR15].VAR43));
            }
            break;
        case 0x011:
        case 0x111:
        case 0x029:
        case 0x129:
        case 0x17f:
        case 0x27f:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR44[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15]));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN15(FUN7(VAR41, VAR45[VAR14]), FUN7(VAR41, VAR45[VAR15]));
            }
            break;
        case 0x211:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                FUN27(FUN7(VAR41, VAR45[VAR15].FUN18(0)));
                FUN28(VAR49 + VAR2->VAR40);
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN20(FUN7(VAR41, VAR45[VAR14].FUN18(0)), FUN7(VAR41, VAR45[VAR15].FUN18(0)));
            }
            break;
        case 0x311:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR14].FUN21(0)), FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            break;
        case 0x013:
        case 0x113:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                goto VAR27;
            }
            break;
        case 0x017:
        case 0x117:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(1)));
            }
            else
            {
                goto VAR27;
            }
            break;
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x171:
        case 0x172:
        case 0x173:
            VAR10 = FUN5(VAR2->VAR37++);
            if (VAR9)
            {
                FUN29(VAR10);
                FUN17(FUN7(VAR41, VAR52.FUN18(0)));
                FUN19();
                FUN17(FUN7(VAR41, VAR52.FUN18(1)));
                VAR7 = FUN7(VAR41, VAR52);
            }
            else
            {
                FUN29(VAR10);
                FUN17(FUN7(VAR41, VAR53.FUN30(0)));
                FUN19();
                FUN17(FUN7(VAR41, VAR53.FUN30(1)));
                VAR7 = FUN7(VAR41, VAR53);
            }
            VAR19 = VAR54[((VAR3 - 1) & 3) * 8 + (((VAR12 >> 3)) & 7)][VAR6];
            if (!VAR19)
                goto VAR27;
            if (VAR9)
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                VAR8 = FUN7(VAR41, VAR45[VAR14]);
            }
            else
            {
                VAR14 = (VAR12 & 7);
                VAR8 = FUN7(VAR41, VAR42[VAR14].VAR43);
            }
            FUN31(VAR8, VAR7);
            break;
        case 0x050:
            VAR14 = (VAR12 & 7) | FUN14(VAR2);
            FUN32(FUN7(VAR41, VAR45[VAR14]));
            FUN33(VAR49, VAR15);
            break;
        case 0x150:
            VAR14 = (VAR12 & 7) | FUN14(VAR2);
            FUN34(FUN7(VAR41, VAR45[VAR14]));
            FUN33(VAR49, VAR15);
            break;
        case 0x02a:
        case 0x12a:
            FUN4();
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR8 = FUN7(VAR41, VAR53);
                VAR50[VAR2->VAR40 >> 2](VAR8);
            }
            else
            {
                VAR14 = (VAR12 & 7);
                VAR8 = FUN7(VAR41, VAR42[VAR14].VAR43);
            }
            VAR7 = FUN7(VAR41, VAR45[VAR15]);
            switch (VAR3 >> 8)
            {
            case 0x0:
                FUN35(VAR7, VAR8);
                break;
            default:
            case 0x1:
                FUN36(VAR7, VAR8);
                break;
            }
            break;
        case 0x22a:
        case 0x32a:
            VAR11 = (VAR2->VAR46 == 2) ? VAR47 : VAR49;
            FUN8(VAR2, VAR12, VAR11, VAR48, 0);
            VAR7 = FUN7(VAR41, VAR45[VAR15]);
            VAR55[(VAR2->VAR46 == 2) * 2 + ((VAR3 >> 8) - 2)](VAR7);
            break;
        case 0x02c:
        case 0x12c:
        case 0x02d:
        case 0x12d:
            FUN4();
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR8 = FUN7(VAR41, VAR52);
                VAR51[VAR2->VAR40 >> 2](VAR8);
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                VAR8 = FUN7(VAR41, VAR45[VAR14]);
            }
            VAR7 = FUN7(VAR41, VAR42[VAR15 & 7].VAR43);
            switch (VAR3)
            {
            case 0x02c:
                FUN37(VAR7, VAR8);
                break;
            case 0x12c:
                FUN38(VAR7, VAR8);
                break;
            case 0x02d:
                FUN39(VAR7, VAR8);
                break;
            case 0x12d:
                FUN40(VAR7, VAR8);
                break;
            }
            break;
        case 0x22c:
        case 0x32c:
        case 0x22d:
        case 0x32d:
            VAR11 = (VAR2->VAR46 == 2) ? VAR47 : VAR49;
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                if ((VAR3 >> 8) & 1)
                {
                    VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR52.FUN21(0)));
                }
                else
                {
                    FUN16(VAR49 + VAR2->VAR40);
                    FUN17(FUN7(VAR41, VAR52.FUN18(0)));
                }
                VAR8 = FUN7(VAR41, VAR52);
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                VAR8 = FUN7(VAR41, VAR45[VAR14]);
            }
            VAR55[(VAR2->VAR46 == 2) * 2 + ((VAR3 >> 8) - 2) + 4 + (VAR3 & 1) * 4](VAR8);
            FUN33(VAR11, VAR15);
            break;
        case 0xc4:
        case 0x1c4:
            VAR2->VAR56 = 1;
            FUN8(VAR2, VAR12, VAR57, VAR48, 0);
            VAR10 = FUN5(VAR2->VAR37++);
            if (VAR6)
            {
                VAR10 &= 7;
                FUN41(FUN7(VAR41, VAR45[VAR15]), VAR10);
            }
            else
            {
                VAR10 &= 3;
                FUN42(FUN7(VAR41, VAR42[VAR15].VAR43), VAR10);
            }
            break;
        case 0xc5:
        case 0x1c5:
            if (VAR13 != 3)
                goto VAR27;
            VAR10 = FUN5(VAR2->VAR37++);
            if (VAR6)
            {
                VAR10 &= 7;
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN43(FUN7(VAR41, VAR45[VAR14]), VAR10);
            }
            else
            {
                VAR10 &= 3;
                VAR14 = (VAR12 & 7);
                FUN44(FUN7(VAR41, VAR42[VAR14].VAR43), VAR10);
            }
            VAR15 = ((VAR12 >> 3) & 7) | VAR5;
            FUN33(VAR49, VAR15);
            break;
        case 0x1d6:
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR39[VAR2->VAR40 >> 2](FUN7(VAR41, VAR45[VAR15].FUN21(0)));
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN13(FUN7(VAR41, VAR45[VAR14].FUN21(0)), FUN7(VAR41, VAR45[VAR15].FUN21(0)));
                FUN26(FUN7(VAR41, VAR45[VAR14].FUN21(1)));
            }
            break;
        case 0x2d6:
            FUN4();
            VAR14 = (VAR12 & 7);
            FUN13(FUN7(VAR41, VAR45[VAR15].FUN21(0)), FUN7(VAR41, VAR42[VAR14].VAR43));
            FUN26(FUN7(VAR41, VAR45[VAR15].FUN21(1)));
            break;
        case 0x3d6:
            FUN4();
            VAR14 = (VAR12 & 7) | FUN14(VAR2);
            FUN13(FUN7(VAR41, VAR42[VAR15 & 7].VAR43), FUN7(VAR41, VAR45[VAR14].FUN21(0)));
            break;
        case 0xd7:
        case 0x1d7:
            if (VAR13 != 3)
                goto VAR27;
            if (VAR6)
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                FUN45(FUN7(VAR41, VAR45[VAR14]));
            }
            else
            {
                VAR14 = (VAR12 & 7);
                FUN46(FUN7(VAR41, VAR42[VAR14].VAR43));
            }
            VAR15 = ((VAR12 >> 3) & 7) | VAR5;
            FUN33(VAR49, VAR15);
            break;
        default:
            goto VAR27;
        }
    }
    else
    {
        switch (VAR3)
        {
        case 0xf7:
            if (VAR13 != 3)
                goto VAR27;
            if (VAR2->VAR58 == 2)
            {
                FUN47(VAR59);
            }
            else
            {
                FUN48(VAR59);
                if (VAR2->VAR58 == 0)
                    FUN49();
            }
            FUN50(VAR2);
            break;
        case 0x70:
        case 0xc6:
        case 0xc2:
            VAR2->VAR56 = 1;
            break;
        default:
            break;
        }
        if (VAR9)
        {
            VAR7 = FUN7(VAR41, VAR45[VAR15]);
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR8 = FUN7(VAR41, VAR52);
                if (VAR6 >= 2 && ((VAR3 >= 0x50 && VAR3 <= 0x5f && VAR3 != 0x5b) || VAR3 == 0xc2))
                {
                    if (VAR6 == 2)
                    {
                        FUN16(VAR49 + VAR2->VAR40);
                        FUN17(FUN7(VAR41, VAR52.FUN18(0)));
                    }
                    else
                    {
                        VAR50[VAR2->VAR40 >> 2](FUN7(VAR41, VAR52.FUN51(0)));
                    }
                }
                else
                {
                    VAR51[VAR2->VAR40 >> 2](VAR8);
                }
            }
            else
            {
                VAR14 = (VAR12 & 7) | FUN14(VAR2);
                VAR8 = FUN7(VAR41, VAR45[VAR14]);
            }
        }
        else
        {
            VAR7 = FUN7(VAR41, VAR42[VAR15].VAR43);
            if (VAR13 != 3)
            {
                FUN6(VAR2, VAR12, &VAR16, &VAR17);
                VAR8 = FUN7(VAR41, VAR53);
                VAR50[VAR2->VAR40 >> 2](VAR8);
            }
            else
            {
                VAR14 = (VAR12 & 7);
                VAR8 = FUN7(VAR41, VAR42[VAR14].VAR43);
            }
        }
        switch (VAR3)
        {
        case 0x0f:
            if (!(VAR2->VAR35 & VAR36))
                goto VAR27;
            VAR10 = FUN5(VAR2->VAR37++);
            VAR19 = VAR60[VAR10];
            if (!VAR19)
                goto VAR27;
            FUN31(VAR7, VAR8);
            break;
        case 0x70:
        case 0xc6:
            VAR10 = FUN5(VAR2->VAR37++);
            VAR21 = (VAR20 *)VAR19;
            FUN52(VAR7, VAR8, VAR10);
            break;
        case 0xc2:
            VAR10 = FUN5(VAR2->VAR37++);
            if (VAR10 >= 8)
                goto VAR27;
            VAR19 = VAR61[VAR10][VAR6];
            FUN31(VAR7, VAR8);
            break;
        default:
            FUN31(VAR7, VAR8);
            break;
        }
        if (VAR3 == 0x2e || VAR3 == 0x2f)
        {
            VAR2->VAR62 = VAR63;
        }
    }
}