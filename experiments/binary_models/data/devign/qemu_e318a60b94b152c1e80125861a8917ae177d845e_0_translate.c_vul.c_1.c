static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    TCGv VAR20;
    TCGv VAR21;
    TCGv VAR22;
    TCGv_i64 VAR23;
    if (!VAR4->VAR24)
        return 1;
    FUN2(VAR6, VAR5);
    VAR7 = (VAR5 >> 16) & 0xf;
    VAR8 = VAR5 & 0xf;
    VAR17 = (VAR5 & (1 << 21)) != 0;
    VAR20 = FUN3();
    if ((VAR5 & (1 << 23)) == 0)
    {
        VAR9 = (VAR5 >> 8) & 0xf;
        VAR14 = (VAR5 >> 6) & 3;
        if (VAR9 > 10)
            return 1;
        VAR10 = VAR25[VAR9].VAR10;
        VAR11 = VAR25[VAR9].VAR11;
        VAR12 = VAR25[VAR9].VAR12;
        if (VAR14 == 3 && (VAR11 | VAR12) != 1)
            return 1;
        FUN4(VAR4, VAR20, VAR7);
        VAR13 = (1 << VAR14) * VAR11;
        for (VAR15 = 0; VAR15 < VAR10; VAR15++)
        {
            if (VAR11 > 2 || (VAR11 == 2 && VAR10 == 2))
            {
                FUN4(VAR4, VAR20, VAR7);
                FUN5(VAR20, VAR20, (1 << VAR14) * VAR15);
            }
            else if (VAR11 == 2 && VAR10 == 4 && VAR15 == 2)
            {
                FUN4(VAR4, VAR20, VAR7);
                FUN5(VAR20, VAR20, 1 << VAR14);
            }
            if (VAR14 == 3)
            {
                if (VAR17)
                {
                    VAR23 = FUN6(VAR20, FUN7(VAR4));
                    FUN8(VAR23, VAR6);
                    FUN9(VAR23);
                }
                else
                {
                    VAR23 = FUN10();
                    FUN11(VAR23, VAR6);
                    FUN12(VAR23, VAR20, FUN7(VAR4));
                }
                FUN5(VAR20, VAR20, VAR13);
            }
            else
            {
                for (VAR16 = 0; VAR16 < 2; VAR16++)
                {
                    if (VAR14 == 2)
                    {
                        if (VAR17)
                        {
                            VAR21 = FUN13(VAR20, FUN7(VAR4));
                            FUN14(VAR6, VAR16, VAR21);
                        }
                        else
                        {
                            VAR21 = FUN15(VAR6, VAR16);
                            FUN16(VAR21, VAR20, FUN7(VAR4));
                        }
                        FUN5(VAR20, VAR20, VAR13);
                    }
                    else if (VAR14 == 1)
                    {
                        if (VAR17)
                        {
                            VAR21 = FUN17(VAR20, FUN7(VAR4));
                            FUN5(VAR20, VAR20, VAR13);
                            VAR22 = FUN17(VAR20, FUN7(VAR4));
                            FUN5(VAR20, VAR20, VAR13);
                            FUN18(VAR22, VAR22, 16);
                            FUN19(VAR21, VAR21, VAR22);
                            FUN20(VAR22);
                            FUN14(VAR6, VAR16, VAR21);
                        }
                        else
                        {
                            VAR21 = FUN15(VAR6, VAR16);
                            VAR22 = FUN3();
                            FUN21(VAR22, VAR21, 16);
                            FUN22(VAR21, VAR20, FUN7(VAR4));
                            FUN5(VAR20, VAR20, VAR13);
                            FUN22(VAR22, VAR20, FUN7(VAR4));
                            FUN5(VAR20, VAR20, VAR13);
                        }
                    }
                    else
                    {
                        if (VAR17)
                        {
                            FUN23(VAR22);
                            for (VAR19 = 0; VAR19 < 4; VAR19++)
                            {
                                VAR21 = FUN24(VAR20, FUN7(VAR4));
                                FUN5(VAR20, VAR20, VAR13);
                                if (VAR19 == 0)
                                {
                                    VAR22 = VAR21;
                                }
                                else
                                {
                                    FUN18(VAR21, VAR21, VAR19 * 8);
                                    FUN19(VAR22, VAR22, VAR21);
                                    FUN20(VAR21);
                                }
                            }
                            FUN14(VAR6, VAR16, VAR22);
                        }
                        else
                        {
                            VAR22 = FUN15(VAR6, VAR16);
                            for (VAR19 = 0; VAR19 < 4; VAR19++)
                            {
                                VAR21 = FUN3();
                                if (VAR19 == 0)
                                {
                                    FUN25(VAR21, VAR22);
                                }
                                else
                                {
                                    FUN21(VAR21, VAR22, VAR19 * 8);
                                }
                                FUN26(VAR21, VAR20, FUN7(VAR4));
                                FUN5(VAR20, VAR20, VAR13);
                            }
                            FUN20(VAR22);
                        }
                    }
                }
            }
            VAR6 += VAR12;
        }
        VAR13 = VAR10 * 8;
    }
    else
    {
        VAR14 = (VAR5 >> 10) & 3;
        if (VAR14 == 3)
        {
            int VAR26 = (VAR5 >> 4) & 1;
            if (!VAR17)
            {
                return 1;
            }
            VAR14 = (VAR5 >> 6) & 3;
            VAR10 = ((VAR5 >> 8) & 3) + 1;
            if (VAR14 == 3)
            {
                if (VAR10 != 4 || VAR26 == 0)
                {
                    return 1;
                }
                VAR14 = 2;
            }
            if (VAR10 == 1 && VAR26 == 1 && VAR14 == 0)
            {
                return 1;
            }
            if (VAR10 == 3 && VAR26 == 1)
            {
                return 1;
            }
            FUN4(VAR4, VAR20, VAR7);
            if (VAR10 == 1)
            {
                VAR21 = FUN27(VAR4, VAR20, VAR14);
                FUN28(VAR21, VAR27, FUN29(VAR6, 0));
                FUN28(VAR21, VAR27, FUN29(VAR6, 1));
                if (VAR5 & (1 << 5))
                {
                    FUN28(VAR21, VAR27, FUN29(VAR6 + 1, 0));
                    FUN28(VAR21, VAR27, FUN29(VAR6 + 1, 1));
                }
                FUN20(VAR21);
            }
            else
            {
                VAR13 = (VAR5 & (1 << 5)) ? 2 : 1;
                for (VAR15 = 0; VAR15 < VAR10; VAR15++)
                {
                    VAR21 = FUN27(VAR4, VAR20, VAR14);
                    FUN28(VAR21, VAR27, FUN29(VAR6, 0));
                    FUN28(VAR21, VAR27, FUN29(VAR6, 1));
                    FUN20(VAR21);
                    FUN5(VAR20, VAR20, 1 << VAR14);
                    VAR6 += VAR13;
                }
            }
            VAR13 = (1 << VAR14) * VAR10;
        }
        else
        {
            VAR16 = (VAR5 >> 7) & 1;
            switch (VAR14)
            {
            case 0:
                VAR18 = ((VAR5 >> 5) & 3) * 8;
                VAR13 = 1;
                break;
            case 1:
                VAR18 = ((VAR5 >> 6) & 1) * 16;
                VAR13 = (VAR5 & (1 << 5)) ? 2 : 1;
                break;
            case 2:
                VAR18 = 0;
                VAR13 = (VAR5 & (1 << 6)) ? 2 : 1;
                break;
            default:
                FUN30();
            }
            VAR10 = ((VAR5 >> 8) & 3) + 1;
            FUN4(VAR4, VAR20, VAR7);
            for (VAR15 = 0; VAR15 < VAR10; VAR15++)
            {
                if (VAR17)
                {
                    switch (VAR14)
                    {
                    case 0:
                        VAR21 = FUN24(VAR20, FUN7(VAR4));
                        break;
                    case 1:
                        VAR21 = FUN17(VAR20, FUN7(VAR4));
                        break;
                    case 2:
                        VAR21 = FUN13(VAR20, FUN7(VAR4));
                        break;
                    default:
                        FUN30();
                    }
                    if (VAR14 != 2)
                    {
                        VAR22 = FUN15(VAR6, VAR16);
                        FUN31(VAR21, VAR22, VAR21, VAR18, VAR14 ? 0xffff : 0xff);
                        FUN20(VAR22);
                    }
                    FUN14(VAR6, VAR16, VAR21);
                }
                else
                {
                    VAR21 = FUN15(VAR6, VAR16);
                    if (VAR18)
                        FUN21(VAR21, VAR21, VAR18);
                    switch (VAR14)
                    {
                    case 0:
                        FUN26(VAR21, VAR20, FUN7(VAR4));
                        break;
                    case 1:
                        FUN22(VAR21, VAR20, FUN7(VAR4));
                        break;
                    case 2:
                        FUN16(VAR21, VAR20, FUN7(VAR4));
                        break;
                    }
                }
                VAR6 += VAR13;
                FUN5(VAR20, VAR20, 1 << VAR14);
            }
            VAR13 = VAR10 * (1 << VAR14);
        }
    }
    FUN20(VAR20);
    if (VAR8 != 15)
    {
        TCGv VAR28;
        VAR28 = FUN32(VAR4, VAR7);
        if (VAR8 == 13)
        {
            FUN5(VAR28, VAR28, VAR13);
        }
        else
        {
            TCGv VAR29;
            VAR29 = FUN32(VAR4, VAR8);
            FUN33(VAR28, VAR28, VAR29);
            FUN20(VAR29);
        }
        FUN34(VAR4, VAR7, VAR28);
    }
    return 0;
}