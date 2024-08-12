static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4, VAR5, VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    TCGv_i32 VAR18;
    TCGv_i32 VAR19;
    TCGv_i32 VAR20;
    TCGv_i64 VAR21;
    if (VAR2->VAR22)
    {
        FUN2(VAR2, 4, VAR23, FUN3(1, 0xe, VAR2->VAR24), VAR2->VAR22);
        return 0;
    }
    if (!VAR2->VAR25)
        return 1;
    FUN4(VAR4, VAR3);
    VAR5 = (VAR3 >> 16) & 0xf;
    VAR6 = VAR3 & 0xf;
    VAR15 = (VAR3 & (1 << 21)) != 0;
    if ((VAR3 & (1 << 23)) == 0)
    {
        VAR7 = (VAR3 >> 8) & 0xf;
        VAR12 = (VAR3 >> 6) & 3;
        if (VAR7 > 10)
            return 1;
        switch (VAR7 & 0xc)
        {
        case 4:
            if (((VAR3 >> 5) & 1) == 1)
            {
                return 1;
            }
            break;
        case 8:
            if (((VAR3 >> 4) & 3) == 3)
            {
                return 1;
            }
            break;
        default:
            break;
        }
        VAR8 = VAR26[VAR7].VAR8;
        VAR9 = VAR26[VAR7].VAR9;
        VAR10 = VAR26[VAR7].VAR10;
        if (VAR12 == 3 && (VAR9 | VAR10) != 1)
            return 1;
        VAR18 = FUN5();
        FUN6(VAR2, VAR18, VAR5);
        VAR11 = (1 << VAR12) * VAR9;
        for (VAR13 = 0; VAR13 < VAR8; VAR13++)
        {
            if (VAR9 > 2 || (VAR9 == 2 && VAR8 == 2))
            {
                FUN6(VAR2, VAR18, VAR5);
                FUN7(VAR18, VAR18, (1 << VAR12) * VAR13);
            }
            else if (VAR9 == 2 && VAR8 == 4 && VAR13 == 2)
            {
                FUN6(VAR2, VAR18, VAR5);
                FUN7(VAR18, VAR18, 1 << VAR12);
            }
            if (VAR12 == 3)
            {
                VAR21 = FUN8();
                if (VAR15)
                {
                    FUN9(VAR21, VAR18, FUN10(VAR2));
                    FUN11(VAR21, VAR4);
                }
                else
                {
                    FUN12(VAR21, VAR4);
                    FUN13(VAR21, VAR18, FUN10(VAR2));
                }
                FUN14(VAR21);
                FUN7(VAR18, VAR18, VAR11);
            }
            else
            {
                for (VAR14 = 0; VAR14 < 2; VAR14++)
                {
                    if (VAR12 == 2)
                    {
                        if (VAR15)
                        {
                            VAR19 = FUN5();
                            FUN15(VAR19, VAR18, FUN10(VAR2));
                            FUN16(VAR4, VAR14, VAR19);
                        }
                        else
                        {
                            VAR19 = FUN17(VAR4, VAR14);
                            FUN18(VAR19, VAR18, FUN10(VAR2));
                            FUN19(VAR19);
                        }
                        FUN7(VAR18, VAR18, VAR11);
                    }
                    else if (VAR12 == 1)
                    {
                        if (VAR15)
                        {
                            VAR19 = FUN5();
                            FUN20(VAR19, VAR18, FUN10(VAR2));
                            FUN7(VAR18, VAR18, VAR11);
                            VAR20 = FUN5();
                            FUN20(VAR20, VAR18, FUN10(VAR2));
                            FUN7(VAR18, VAR18, VAR11);
                            FUN21(VAR20, VAR20, 16);
                            FUN22(VAR19, VAR19, VAR20);
                            FUN19(VAR20);
                            FUN16(VAR4, VAR14, VAR19);
                        }
                        else
                        {
                            VAR19 = FUN17(VAR4, VAR14);
                            VAR20 = FUN5();
                            FUN23(VAR20, VAR19, 16);
                            FUN24(VAR19, VAR18, FUN10(VAR2));
                            FUN19(VAR19);
                            FUN7(VAR18, VAR18, VAR11);
                            FUN24(VAR20, VAR18, FUN10(VAR2));
                            FUN19(VAR20);
                            FUN7(VAR18, VAR18, VAR11);
                        }
                    }
                    else
                    {
                        if (VAR15)
                        {
                            FUN25(VAR20);
                            for (VAR17 = 0; VAR17 < 4; VAR17++)
                            {
                                VAR19 = FUN5();
                                FUN26(VAR19, VAR18, FUN10(VAR2));
                                FUN7(VAR18, VAR18, VAR11);
                                if (VAR17 == 0)
                                {
                                    VAR20 = VAR19;
                                }
                                else
                                {
                                    FUN21(VAR19, VAR19, VAR17 * 8);
                                    FUN22(VAR20, VAR20, VAR19);
                                    FUN19(VAR19);
                                }
                            }
                            FUN16(VAR4, VAR14, VAR20);
                        }
                        else
                        {
                            VAR20 = FUN17(VAR4, VAR14);
                            for (VAR17 = 0; VAR17 < 4; VAR17++)
                            {
                                VAR19 = FUN5();
                                if (VAR17 == 0)
                                {
                                    FUN27(VAR19, VAR20);
                                }
                                else
                                {
                                    FUN23(VAR19, VAR20, VAR17 * 8);
                                }
                                FUN28(VAR19, VAR18, FUN10(VAR2));
                                FUN19(VAR19);
                                FUN7(VAR18, VAR18, VAR11);
                            }
                            FUN19(VAR20);
                        }
                    }
                }
            }
            VAR4 += VAR10;
        }
        FUN19(VAR18);
        VAR11 = VAR8 * 8;
    }
    else
    {
        VAR12 = (VAR3 >> 10) & 3;
        if (VAR12 == 3)
        {
            int VAR27 = (VAR3 >> 4) & 1;
            if (!VAR15)
            {
                return 1;
            }
            VAR12 = (VAR3 >> 6) & 3;
            VAR8 = ((VAR3 >> 8) & 3) + 1;
            if (VAR12 == 3)
            {
                if (VAR8 != 4 || VAR27 == 0)
                {
                    return 1;
                }
                VAR12 = 2;
            }
            if (VAR8 == 1 && VAR27 == 1 && VAR12 == 0)
            {
                return 1;
            }
            if (VAR8 == 3 && VAR27 == 1)
            {
                return 1;
            }
            VAR18 = FUN5();
            FUN6(VAR2, VAR18, VAR5);
            if (VAR8 == 1)
            {
                VAR19 = FUN29(VAR2, VAR18, VAR12);
                FUN30(VAR19, VAR28, FUN31(VAR4, 0));
                FUN30(VAR19, VAR28, FUN31(VAR4, 1));
                if (VAR3 & (1 << 5))
                {
                    FUN30(VAR19, VAR28, FUN31(VAR4 + 1, 0));
                    FUN30(VAR19, VAR28, FUN31(VAR4 + 1, 1));
                }
                FUN19(VAR19);
            }
            else
            {
                VAR11 = (VAR3 & (1 << 5)) ? 2 : 1;
                for (VAR13 = 0; VAR13 < VAR8; VAR13++)
                {
                    VAR19 = FUN29(VAR2, VAR18, VAR12);
                    FUN30(VAR19, VAR28, FUN31(VAR4, 0));
                    FUN30(VAR19, VAR28, FUN31(VAR4, 1));
                    FUN19(VAR19);
                    FUN7(VAR18, VAR18, 1 << VAR12);
                    VAR4 += VAR11;
                }
            }
            FUN19(VAR18);
            VAR11 = (1 << VAR12) * VAR8;
        }
        else
        {
            int VAR29 = (VAR3 >> 4) & 0xf;
            VAR14 = (VAR3 >> 7) & 1;
            switch (VAR12)
            {
            case 0:
                VAR16 = ((VAR3 >> 5) & 3) * 8;
                VAR11 = 1;
                break;
            case 1:
                VAR16 = ((VAR3 >> 6) & 1) * 16;
                VAR11 = (VAR3 & (1 << 5)) ? 2 : 1;
                break;
            case 2:
                VAR16 = 0;
                VAR11 = (VAR3 & (1 << 6)) ? 2 : 1;
                break;
            default:
                FUN32();
            }
            VAR8 = ((VAR3 >> 8) & 3) + 1;
            switch (VAR8)
            {
            case 1:
                if (((VAR29 & (1 << VAR12)) != 0) || (VAR12 == 2 && ((VAR29 & 3) == 1 || (VAR29 & 3) == 2)))
                {
                    return 1;
                }
                break;
            case 3:
                if ((VAR29 & 1) != 0)
                {
                    return 1;
                }
            case 2:
                if (VAR12 == 2 && (VAR29 & 2) != 0)
                {
                    return 1;
                }
                break;
            case 4:
                if ((VAR12 == 2) && ((VAR29 & 3) == 3))
                {
                    return 1;
                }
                break;
            default:
                FUN32();
            }
            if ((VAR4 + VAR11 * (VAR8 - 1)) > 31)
            {
                return 1;
            }
            VAR18 = FUN5();
            FUN6(VAR2, VAR18, VAR5);
            for (VAR13 = 0; VAR13 < VAR8; VAR13++)
            {
                if (VAR15)
                {
                    VAR19 = FUN5();
                    switch (VAR12)
                    {
                    case 0:
                        FUN26(VAR19, VAR18, FUN10(VAR2));
                        break;
                    case 1:
                        FUN20(VAR19, VAR18, FUN10(VAR2));
                        break;
                    case 2:
                        FUN15(VAR19, VAR18, FUN10(VAR2));
                        break;
                    default:
                        FUN32();
                    }
                    if (VAR12 != 2)
                    {
                        VAR20 = FUN17(VAR4, VAR14);
                        FUN33(VAR19, VAR20, VAR19, VAR16, VAR12 ? 16 : 8);
                        FUN19(VAR20);
                    }
                    FUN16(VAR4, VAR14, VAR19);
                }
                else
                {
                    VAR19 = FUN17(VAR4, VAR14);
                    if (VAR16)
                        FUN23(VAR19, VAR19, VAR16);
                    switch (VAR12)
                    {
                    case 0:
                        FUN28(VAR19, VAR18, FUN10(VAR2));
                        break;
                    case 1:
                        FUN24(VAR19, VAR18, FUN10(VAR2));
                        break;
                    case 2:
                        FUN18(VAR19, VAR18, FUN10(VAR2));
                        break;
                    }
                    FUN19(VAR19);
                }
                VAR4 += VAR11;
                FUN7(VAR18, VAR18, 1 << VAR12);
            }
            FUN19(VAR18);
            VAR11 = VAR8 * (1 << VAR12);
        }
    }
    if (VAR6 != 15)
    {
        TCGv_i32 VAR30;
        VAR30 = FUN34(VAR2, VAR5);
        if (VAR6 == 13)
        {
            FUN7(VAR30, VAR30, VAR11);
        }
        else
        {
            TCGv_i32 VAR31;
            VAR31 = FUN34(VAR2, VAR6);
            FUN35(VAR30, VAR30, VAR31);
            FUN19(VAR31);
        }
        FUN36(VAR2, VAR5, VAR30);
    }
    return 0;
}