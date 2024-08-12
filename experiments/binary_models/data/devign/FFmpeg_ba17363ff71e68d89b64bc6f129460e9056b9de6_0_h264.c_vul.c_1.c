static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 ? (VAR7 | VAR8) : 0x7F;
    VAR4->VAR9 = -1;
    if (VAR2->VAR10.VAR11)
    {
        int VAR12;
        FUN2(&VAR4->VAR13);
        FUN3(&VAR2->VAR11, VAR14, VAR15, VAR16, 64);
        FUN4(&VAR2->VAR11, VAR4->VAR13.VAR17 + FUN5(&VAR4->VAR13) / 8, (VAR4->VAR13.VAR18 - FUN5(&VAR4->VAR13) + 7) / 8);
        for (VAR12 = 0; VAR12 < 460; VAR12++)
        {
            int VAR19;
            if (VAR2->VAR20 == VAR21)
                VAR19 = FUN6(((VAR22[VAR12][0] * VAR4->VAR23) >> 4) + VAR22[VAR12][1], 1, 126);
            else
                VAR19 = FUN6(((VAR24[VAR2->VAR25][VAR12][0] * VAR4->VAR23) >> 4) + VAR24[VAR2->VAR25][VAR12][1], 1, 126);
            if (VAR19 <= 63)
                VAR2->VAR26[VAR12] = 2 * (63 - VAR19) + 0;
            else
                VAR2->VAR26[VAR12] = 2 * (VAR19 - 64) + 1;
        }
        for (;;)
        {
            int VAR27 = FUN7(VAR2);
            int VAR28;
            if (VAR27 >= 0)
                FUN8(VAR2);
            if (VAR27 >= 0 && VAR2->VAR29)
            {
                VAR4->VAR30++;
                if (VAR27 >= 0)
                    VAR27 = FUN7(VAR2);
                FUN8(VAR2);
                VAR4->VAR30--;
            }
            VAR28 = FUN9(&VAR2->VAR11);
            if (VAR27 < 0 || VAR2->VAR11.VAR31 > VAR2->VAR11.VAR32 + 1)
            {
                FUN10(VAR2->VAR4.VAR33, VAR34, "", VAR4->VAR35, VAR4->VAR30);
                FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR8 | VAR38 | VAR39) & VAR5);
                return -1;
            }
            if (++VAR4->VAR35 >= VAR4->VAR40)
            {
                VAR4->VAR35 = 0;
                FUN12(VAR4, 16 * VAR4->VAR30, 16);
                ++VAR4->VAR30;
                if (VAR2->VAR29)
                {
                    ++VAR4->VAR30;
                }
            }
            if (VAR28 || VAR4->VAR30 >= VAR4->VAR41)
            {
                FUN13("", FUN5(&VAR4->VAR13), VAR4->VAR13.VAR18);
                FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35 - 1, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                return 0;
            }
        }
    }
    else
    {
        for (;;)
        {
            int VAR27 = FUN14(VAR2);
            if (VAR27 >= 0)
                FUN8(VAR2);
            if (VAR27 >= 0 && VAR2->VAR29)
            {
                VAR4->VAR30++;
                VAR27 = FUN14(VAR2);
                if (VAR27 >= 0)
                    FUN8(VAR2);
                VAR4->VAR30--;
            }
            if (VAR27 < 0)
            {
                FUN10(VAR2->VAR4.VAR33, VAR34, "", VAR4->VAR35, VAR4->VAR30);
                FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR8 | VAR38 | VAR39) & VAR5);
                return -1;
            }
            if (++VAR4->VAR35 >= VAR4->VAR40)
            {
                VAR4->VAR35 = 0;
                FUN12(VAR4, 16 * VAR4->VAR30, 16);
                ++VAR4->VAR30;
                if (VAR2->VAR29)
                {
                    ++VAR4->VAR30;
                }
                if (VAR4->VAR30 >= VAR4->VAR41)
                {
                    FUN13("", FUN5(&VAR4->VAR13), VAR4->VAR13.VAR18);
                    if (FUN5(&VAR4->VAR13) == VAR4->VAR13.VAR18)
                    {
                        FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35 - 1, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                        return 0;
                    }
                    else
                    {
                        FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                        return -1;
                    }
                }
            }
            if (FUN5(&VAR4->VAR13) >= VAR4->VAR13.VAR18 && VAR4->VAR9 <= 0)
            {
                FUN13("", FUN5(&VAR4->VAR13), VAR4->VAR13.VAR18);
                if (FUN5(&VAR4->VAR13) == VAR4->VAR13.VAR18)
                {
                    FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35 - 1, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                    return 0;
                }
                else
                {
                    FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR8 | VAR38 | VAR39) & VAR5);
                    return -1;
                }
            }
        }
    }
    for (; VAR4->VAR30 < VAR4->VAR41; VAR4->VAR30++)
    {
        for (; VAR4->VAR35 < VAR4->VAR40; VAR4->VAR35++)
        {
            int VAR27 = FUN15(VAR2);
            FUN8(VAR2);
            if (VAR27 < 0)
            {
                fprintf(VAR44, "", VAR4->VAR35, VAR4->VAR30);
                FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR8 | VAR38 | VAR39) & VAR5);
                return -1;
            }
            if (++VAR4->VAR35 >= VAR4->VAR40)
            {
                VAR4->VAR35 = 0;
                if (++VAR4->VAR30 >= VAR4->VAR41)
                {
                    if (FUN5(VAR4->VAR13) == VAR4->VAR13.VAR18)
                    {
                        FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35 - 1, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                        return 0;
                    }
                    else
                    {
                        FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                        return -1;
                    }
                }
            } if ( FUN5 ( VAR4 -> ? VAR13 ) >= VAR4 -> VAR13 ? . VAR18 )
            {
                if (FUN5(VAR4->VAR13) == VAR4->VAR13.VAR18)
                {
                    FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35 - 1, VAR4->VAR30, (VAR7 | VAR42 | VAR43) & VAR5);
                    return 0;
                }
                else
                {
                    FUN11(VAR4, VAR4->VAR36, VAR4->VAR37, VAR4->VAR35, VAR4->VAR30, (VAR8 | VAR38 | VAR39) & VAR5);
                    return -1;
                }
            }
        }
        VAR4->VAR35 = 0;
        FUN12(VAR4, 16 * VAR4->VAR30, 16);
    }
    return -1;
}