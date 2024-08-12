static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    const VAR13 *VAR14;
    VAR4 = (VAR3 >> 8) & 0xf;
    if (FUN2(VAR2, VAR15) && (VAR4 < 2))
    {
        if (FUN3(VAR2->VAR16, VAR4, 1) == 0)
        {
            return 1;
        }
        if (FUN2(VAR2, VAR17))
        {
            return FUN4(VAR2, VAR3);
        }
        else if (FUN2(VAR2, VAR15))
        {
            return FUN5(VAR2, VAR3);
        }
        return 1;
    }
    VAR5 = (VAR3 & (1 << 25)) == 0;
    if (!VAR5 && ((VAR3 & (1 << 4)) == 0))
    {
        return 1;
    }
    VAR7 = VAR3 & 0xf;
    if (VAR5)
    {
        VAR6 = 0;
        VAR8 = (VAR3 >> 4) & 0xf;
        VAR9 = 0;
        VAR12 = (VAR3 >> 16) & 0xf;
    }
    else
    {
        VAR6 = (VAR3 >> 16) & 0xf;
        VAR8 = (VAR3 >> 21) & 7;
        VAR9 = (VAR3 >> 5) & 7;
        VAR12 = 0;
    }
    VAR10 = (VAR3 >> 20) & 1;
    VAR11 = (VAR3 >> 12) & 0xf;
    VAR14 = FUN6(VAR2->VAR18, FUN7(VAR4, VAR5, VAR2->VAR19, VAR6, VAR7, VAR8, VAR9));
    if (VAR14)
    {
        if (!FUN8(VAR2->VAR20, VAR14, VAR10))
        {
            return 1;
        }
        if (VAR14->VAR21 || (FUN2(VAR2, VAR15) && VAR4 < 14))
        {
            TCGv_ptr VAR22;
            TCGv_i32 VAR23;
            uint32_t VAR24;
            switch (VAR4)
            {
            case 14:
                if (VAR5)
                {
                    VAR24 = FUN9(1, 0xe, VAR8, VAR7, VAR11, VAR12, VAR10, VAR2->VAR25);
                }
                else
                {
                    VAR24 = FUN10(1, 0xe, VAR8, VAR9, VAR6, VAR7, VAR11, VAR10, VAR2->VAR25);
                }
                break;
            case 15:
                if (VAR5)
                {
                    VAR24 = FUN11(1, 0xe, VAR8, VAR7, VAR11, VAR12, VAR10, VAR2->VAR25);
                }
                else
                {
                    VAR24 = FUN12(1, 0xe, VAR8, VAR9, VAR6, VAR7, VAR11, VAR10, VAR2->VAR25);
                }
                break;
            default:
                assert(!FUN2(VAR2, VAR26));
                VAR24 = FUN13();
                break;
            }
            FUN14(VAR2, VAR2->VAR27);
            VAR22 = FUN15(VAR14);
            VAR23 = FUN16(VAR24);
            FUN17(VAR28, VAR22, VAR23);
            FUN18(VAR22);
            FUN19(VAR23);
        }
        switch (VAR14->VAR29 & ~(VAR30 & ~VAR31))
        {
        case VAR32:
            return 0;
        case VAR33:
            if (VAR10)
            {
                return 1;
            }
            FUN14(VAR2, VAR2->VAR27);
            VAR2->VAR34 = VAR35;
            return 0;
        default:
            break;
        }
        if ((VAR2->VAR36->VAR37 & VAR38) && (VAR14->VAR29 & VAR39))
        {
            FUN20();
        }
        if (VAR10)
        {
            if (VAR5)
            {
                TCGv_i64 VAR40;
                TCGv_i32 VAR41;
                if (VAR14->VAR29 & VAR42)
                {
                    VAR40 = FUN21(VAR14->VAR43);
                }
                else if (VAR14->VAR44)
                {
                    TCGv_ptr VAR22;
                    VAR40 = FUN22();
                    VAR22 = FUN15(VAR14);
                    FUN23(VAR40, VAR28, VAR22);
                    FUN18(VAR22);
                }
                else
                {
                    VAR40 = FUN22();
                    FUN24(VAR40, VAR28, VAR14->VAR45);
                }
                VAR41 = FUN25();
                FUN26(VAR41, VAR40);
                FUN27(VAR2, VAR11, VAR41);
                FUN28(VAR40, VAR40, 32);
                VAR41 = FUN25();
                FUN26(VAR41, VAR40);
                FUN29(VAR40);
                FUN27(VAR2, VAR12, VAR41);
            }
            else
            {
                TCGv_i32 VAR41;
                if (VAR14->VAR29 & VAR42)
                {
                    VAR41 = FUN16(VAR14->VAR43);
                }
                else if (VAR14->VAR44)
                {
                    TCGv_ptr VAR22;
                    VAR41 = FUN25();
                    VAR22 = FUN15(VAR14);
                    FUN30(VAR41, VAR28, VAR22);
                    FUN18(VAR22);
                }
                else
                {
                    VAR41 = FUN31(VAR14->VAR45);
                }
                if (VAR11 == 15)
                {
                    FUN32(VAR41);
                    FUN19(VAR41);
                }
                else
                {
                    FUN27(VAR2, VAR11, VAR41);
                }
            }
        }
        else
        {
            if (VAR14->VAR29 & VAR42)
            {
                return 0;
            }
            if (VAR5)
            {
                TCGv_i32 VAR46, VAR47;
                TCGv_i64 VAR40 = FUN22();
                VAR46 = FUN33(VAR2, VAR11);
                VAR47 = FUN33(VAR2, VAR12);
                FUN34(VAR40, VAR46, VAR47);
                FUN19(VAR46);
                FUN19(VAR47);
                if (VAR14->VAR48)
                {
                    TCGv_ptr VAR22 = FUN15(VAR14);
                    FUN35(VAR28, VAR22, VAR40);
                    FUN18(VAR22);
                }
                else
                {
                    FUN36(VAR40, VAR28, VAR14->VAR45);
                }
                FUN29(VAR40);
            }
            else
            {
                if (VAR14->VAR48)
                {
                    TCGv_i32 VAR41;
                    TCGv_ptr VAR22;
                    VAR41 = FUN33(VAR2, VAR11);
                    VAR22 = FUN15(VAR14);
                    FUN37(VAR28, VAR22, VAR41);
                    FUN18(VAR22);
                    FUN19(VAR41);
                }
                else
                {
                    TCGv_i32 VAR41 = FUN33(VAR2, VAR11);
                    FUN38(VAR41, VAR14->VAR45);
                }
            }
        }
        if ((VAR2->VAR36->VAR37 & VAR38) && (VAR14->VAR29 & VAR39))
        {
            FUN39();
            FUN40(VAR2);
        }
        else if (!VAR10 && !(VAR14->VAR29 & VAR49))
        {
            FUN40(VAR2);
        }
        return 0;
    }
    if (VAR5)
    {
        FUN41(VAR50, ""
                                 ""
                                 "",
                      VAR10 ? "" : "", VAR4, VAR8, VAR7, VAR2->VAR19 ? "" : "");
    }
    else
    {
        FUN41(VAR50, ""
                                 ""
                                 "",
                      VAR10 ? "" : "", VAR4, VAR8, VAR6, VAR7, VAR9, VAR2->VAR19 ? "" : "");
    }
    return 1;
}