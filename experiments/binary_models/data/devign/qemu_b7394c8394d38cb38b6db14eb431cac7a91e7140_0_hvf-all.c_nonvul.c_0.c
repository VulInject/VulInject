int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7 = 0;
    uint64_t VAR8 = 0;
    VAR2->VAR9 = 0;
    if (FUN3(VAR2))
    {
        return VAR10;
    }
    do
    {
        if (VAR2->VAR11)
        {
            FUN4(VAR2);
            VAR2->VAR11 = false;
        }
        if (FUN5(VAR2))
        {
            return VAR12;
        }
        FUN6(VAR2);
        FUN7();
        if (!FUN8(FUN2(VAR2)) && VAR2->VAR9)
        {
            FUN9();
            return VAR10;
        }
        hv_return_t VAR13 = FUN10(VAR2->VAR14);
        FUN11(VAR13);
        uint64_t VAR15 = FUN12(VAR2->VAR14, VAR16);
        uint64_t VAR17 = FUN12(VAR2->VAR14, VAR18);
        uint32_t VAR19 = (VAR20)FUN12(VAR2->VAR14, VAR21);
        uint64_t VAR22 = FUN12(VAR2->VAR14, VAR23);
        FUN13(VAR2, VAR19, VAR22);
        VAR8 = FUN14(VAR2->VAR14, VAR24);
        FUN15(VAR6) = FUN14(VAR2->VAR14, VAR25);
        VAR6->VAR26 = FUN15(VAR6);
        FUN9();
        FUN16(VAR2);
        VAR27 = VAR2;
        VAR7 = 0;
        switch (VAR15)
        {
        case VAR28:
        {
            FUN17(VAR2, VAR8 + VAR19);
            if (!((VAR2->VAR29 & VAR30) && (FUN18(VAR6) & VAR31)) && !(VAR2->VAR29 & VAR32) && !(VAR22 & VAR33))
            {
                VAR2->VAR9 = 1;
                VAR7 = VAR10;
            }
            VAR7 = VAR12;
            break;
        }
        case VAR34:
        {
            VAR7 = VAR12;
            break;
        }
        case VAR35:
        {
            VAR36 *VAR37;
            addr_t VAR38 = FUN12(VAR2->VAR14, VAR39);
            if (((VAR22 & VAR33) == 0) && ((VAR17 & VAR40) != 0))
            {
                FUN19(VAR2);
            }
            VAR37 = FUN20(VAR38, VAR38);
            if (FUN21(VAR37, VAR38, VAR17))
            {
                struct x86_decode VAR41;
                FUN22(VAR2);
                VAR6->VAR42->VAR43 = VAR8;
                FUN23(VAR6, &VAR41);
                FUN24(VAR6, &VAR41);
                FUN25(VAR2);
                break;
            }
            break;
        }
        case VAR44:
        {
            uint32_t VAR45 = (VAR17 & 8) != 0;
            uint32_t VAR46 = (VAR17 & 7) + 1;
            uint32_t VAR47 = (VAR17 & 16) != 0;
            uint32_t VAR48 = VAR17 >> 16;
            if (!VAR47 && VAR45)
            {
                uint64_t VAR49 = 0;
                FUN22(VAR2);
                FUN26(VAR6, VAR48, &VAR49, 0, VAR46, 1);
                if (VAR46 == 1)
                {
                    FUN27(VAR6) = VAR49;
                }
                else if (VAR46 == 2)
                {
                    FUN28(VAR6) = VAR49;
                }
                else if (VAR46 == 4)
                {
                    FUN29(VAR6) = (VAR20)VAR49;
                }
                else
                {
                    FUN30("");
                }
                FUN31(VAR6) += VAR19;
                FUN25(VAR2);
                break;
            }
            else if (!VAR47 && !VAR45)
            {
                FUN29(VAR6) = FUN14(VAR2->VAR14, VAR50);
                FUN26(VAR6, VAR48, &FUN29(VAR6), 1, VAR46, 1);
                FUN17(VAR2, VAR8 + VAR19);
                break;
            }
            struct x86_decode VAR41;
            FUN22(VAR2);
            VAR6->VAR42->VAR43 = VAR8;
            FUN23(VAR6, &VAR41);
            FUN32(VAR19 != VAR41.VAR51);
            FUN24(VAR6, &VAR41);
            FUN25(VAR2);
            break;
        }
        case VAR52:
        {
            uint32_t VAR53 = (VAR20)FUN14(VAR2->VAR14, VAR50);
            uint32_t VAR54 = (VAR20)FUN14(VAR2->VAR14, VAR55);
            uint32_t VAR56 = (VAR20)FUN14(VAR2->VAR14, VAR57);
            uint32_t VAR58 = (VAR20)FUN14(VAR2->VAR14, VAR59);
            FUN33(VAR6, VAR53, VAR56, &VAR53, &VAR54, &VAR56, &VAR58);
            FUN34(VAR2->VAR14, VAR50, VAR53);
            FUN34(VAR2->VAR14, VAR55, VAR54);
            FUN34(VAR2->VAR14, VAR57, VAR56);
            FUN34(VAR2->VAR14, VAR59, VAR58);
            FUN17(VAR2, VAR8 + VAR19);
            break;
        }
        case VAR60:
        {
            VAR3 *VAR4 = FUN2(VAR2);
            VAR5 *VAR6 = &VAR4->VAR6;
            uint32_t VAR61 = (VAR20)FUN14(VAR2->VAR14, VAR50);
            uint32_t VAR62 = (VAR20)FUN14(VAR2->VAR14, VAR57);
            uint32_t VAR63 = (VAR20)FUN14(VAR2->VAR14, VAR59);
            if (VAR62)
            {
                FUN17(VAR2, VAR8 + VAR19);
                break;
            }
            VAR6->VAR64 = ((VAR65)VAR63 << 32) | VAR61;
            FUN34(VAR2->VAR14, VAR66, VAR6->VAR64 | 1);
            FUN17(VAR2, VAR8 + VAR19);
            break;
        }
        case VAR67:
            FUN35(VAR2);
            VAR7 = VAR12;
            break;
        case VAR68:
            FUN36(VAR2);
            VAR7 = VAR12;
            break;
        case VAR69:
            VAR7 = VAR12;
            break;
        case VAR70:
        case VAR71:
        {
            FUN22(VAR2);
            if (VAR15 == VAR70)
            {
                FUN37(VAR2);
            }
            else
            {
                FUN38(VAR2);
            }
            FUN31(VAR6) += FUN12(VAR2->VAR14, VAR21);
            FUN25(VAR2);
            break;
        }
        case VAR72:
        {
            int VAR73;
            int VAR74;
            FUN22(VAR2);
            VAR73 = VAR17 & 15;
            VAR74 = (VAR17 >> 8) & 15;
            switch (VAR73)
            {
            case 0x0:
            {
                FUN39(VAR2->VAR14, FUN40(VAR6, VAR74));
                break;
            }
            case 4:
            {
                FUN41(VAR2->VAR14, FUN40(VAR6, VAR74));
                break;
            }
            case 8:
            {
                VAR3 *VAR4 = FUN2(VAR2);
                if (VAR17 & 0x10)
                {
                    FUN40(VAR6, VAR74) = FUN42(VAR4->VAR75);
                }
                else
                {
                    int VAR76 = FUN40(VAR6, VAR74);
                    FUN43(VAR4->VAR75, VAR76);
                    VAR7 = VAR12;
                }
                break;
            }
            default:
                FUN44("", VAR73);
                FUN45();
            }
            FUN31(VAR6) += VAR19;
            FUN25(VAR2);
            break;
        }
        case VAR77:
        {
            struct x86_decode VAR41;
            FUN22(VAR2);
            VAR6->VAR42->VAR43 = VAR8;
            FUN23(VAR6, &VAR41);
            FUN24(VAR6, &VAR41);
            FUN25(VAR2);
            break;
        }
        case VAR78:
        {
            VAR7 = 1;
            break;
        }
        case VAR79:
        {
            uint64_t VAR80 = FUN12(VAR2->VAR14, VAR23);
            x68_segment_selector VAR81 = {.VAR81 = VAR17 & 0xffff};
            FUN46(VAR2, VAR81, (VAR17 >> 30) & 0x3, VAR80 & VAR82, VAR80 & VAR83, VAR80 & VAR84);
            break;
        }
        case VAR85:
        {
            FUN47(VAR86);
            VAR7 = VAR12;
            break;
        }
        case VAR87:
            FUN34(VAR2->VAR14, VAR50, 0);
            FUN34(VAR2->VAR14, VAR59, 0);
            FUN17(VAR2, VAR8 + VAR19);
            break;
        case VAR88:
            break;
        default:
            FUN44("", VAR8, VAR15);
        }
    } while (VAR7 == 0);
    return VAR7;
}