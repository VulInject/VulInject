static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    VAR6 *const VAR7 = &VAR5->VAR7;
    const int VAR8 = VAR7->VAR9 ? (VAR10 | VAR11) : 0x7F;
    int VAR12 = VAR7->VAR13;
    VAR7->VAR14 = -1;
    VAR5->VAR15 = VAR16 || VAR7->VAR17 != VAR18 || VAR7->VAR19 != VAR20 || (VAR21 && (VAR7->VAR22 & VAR23));
    if (VAR5->VAR24.VAR25)
    {
        FUN2(&VAR7->VAR26);
        FUN3(&VAR5->VAR25);
        FUN4(&VAR5->VAR25, VAR7->VAR26.VAR27 + FUN5(&VAR7->VAR26) / 8, (FUN6(&VAR7->VAR26) + 7) / 8);
        FUN7(VAR5);
        for (;;)
        {
            int VAR28 = FUN8(VAR5);
            int VAR29;
            if (VAR28 >= 0)
                FUN9(VAR5);
            if (VAR28 >= 0 && VAR16)
            {
                VAR7->VAR30++;
                VAR28 = FUN8(VAR5);
                if (VAR28 >= 0)
                    FUN9(VAR5);
                VAR7->VAR30--;
            }
            VAR29 = FUN10(&VAR5->VAR25);
            if ((VAR7->VAR31 & VAR32) && VAR5->VAR25.VAR33 > VAR5->VAR25.VAR34 + 2)
            {
                FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                if (VAR7->VAR13 >= VAR12)
                    FUN12(VAR5, VAR12, VAR7->VAR13 + 1);
                return 0;
            }
            if (VAR28 < 0 || VAR5->VAR25.VAR33 > VAR5->VAR25.VAR34 + 2)
            {
                FUN13(VAR5->VAR7.VAR2, VAR39, "", VAR7->VAR13, VAR7->VAR30, VAR5->VAR25.VAR34 - VAR5->VAR25.VAR33);
                FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR11 | VAR40 | VAR41) & VAR8);
                return -1;
            }
            if (++VAR7->VAR13 >= VAR7->VAR42)
            {
                FUN12(VAR5, VAR12, VAR7->VAR13);
                VAR7->VAR13 = VAR12 = 0;
                FUN14(VAR5);
                ++VAR7->VAR30;
                if (VAR43)
                {
                    ++VAR7->VAR30;
                    if (VAR16 && VAR7->VAR30 < VAR7->VAR44)
                        FUN15(VAR5);
                }
            }
            if (VAR29 || VAR7->VAR30 >= VAR7->VAR44)
            {
                FUN16(VAR7->VAR2, "", FUN5(&VAR7->VAR26), VAR7->VAR26.VAR45);
                FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                if (VAR7->VAR13 > VAR12)
                    FUN12(VAR5, VAR12, VAR7->VAR13);
                return 0;
            }
        }
    }
    else
    {
        for (;;)
        {
            int VAR28 = FUN17(VAR5);
            if (VAR28 >= 0)
                FUN9(VAR5);
            if (VAR28 >= 0 && VAR16)
            {
                VAR7->VAR30++;
                VAR28 = FUN17(VAR5);
                if (VAR28 >= 0)
                    FUN9(VAR5);
                VAR7->VAR30--;
            }
            if (VAR28 < 0)
            {
                FUN13(VAR5->VAR7.VAR2, VAR39, "", VAR7->VAR13, VAR7->VAR30);
                FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR11 | VAR40 | VAR41) & VAR8);
                return -1;
            }
            if (++VAR7->VAR13 >= VAR7->VAR42)
            {
                FUN12(VAR5, VAR12, VAR7->VAR13);
                VAR7->VAR13 = VAR12 = 0;
                FUN14(VAR5);
                ++VAR7->VAR30;
                if (VAR43)
                {
                    ++VAR7->VAR30;
                    if (VAR16 && VAR7->VAR30 < VAR7->VAR44)
                        FUN15(VAR5);
                }
                if (VAR7->VAR30 >= VAR7->VAR44)
                {
                    FUN16(VAR7->VAR2, "", FUN5(&VAR7->VAR26), VAR7->VAR26.VAR45);
                    if (FUN5(&VAR7->VAR26) == VAR7->VAR26.VAR45)
                    {
                        FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                        return 0;
                    }
                    else
                    {
                        FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                        return -1;
                    }
                }
            }
            if (FUN5(&VAR7->VAR26) >= VAR7->VAR26.VAR45 && VAR7->VAR14 <= 0)
            {
                FUN16(VAR7->VAR2, "", FUN5(&VAR7->VAR26), VAR7->VAR26.VAR45);
                if (FUN5(&VAR7->VAR26) == VAR7->VAR26.VAR45)
                {
                    FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                    if (VAR7->VAR13 > VAR12)
                        FUN12(VAR5, VAR12, VAR7->VAR13);
                    return 0;
                }
                else
                {
                    FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR11 | VAR40 | VAR41) & VAR8);
                    return -1;
                }
            }
        }
    }
    for (; VAR7->VAR30 < VAR7->VAR44; VAR7->VAR30++)
    {
        for (; VAR7->VAR13 < VAR7->VAR42; VAR7->VAR13++)
        {
            int VAR28 = FUN18(VAR5);
            FUN9(VAR5);
            if (VAR28 < 0)
            {
                FUN13(VAR7->VAR2, VAR39, "", VAR7->VAR13, VAR7->VAR30);
                FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR11 | VAR40 | VAR41) & VAR8);
                return -1;
            }
            if (++VAR7->VAR13 >= VAR7->VAR42)
            {
                VAR7->VAR13 = 0;
                if (++VAR7->VAR30 >= VAR7->VAR44)
                {
                    if (FUN5(VAR7->VAR26) == VAR7->VAR26.VAR45)
                    {
                        FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                        return 0;
                    }
                    else
                    {
                        FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                        return -1;
                    }
                }
            } if ( FUN5 ( VAR7 -> ? VAR26 ) >= VAR7 -> VAR26 ? . VAR45 )
            {
                if (FUN5(VAR7->VAR26) == VAR7->VAR26.VAR45)
                {
                    FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13 - 1, VAR7->VAR30, (VAR10 | VAR37 | VAR38) & VAR8);
                    return 0;
                }
                else
                {
                    FUN11(VAR7, VAR7->VAR35, VAR7->VAR36, VAR7->VAR13, VAR7->VAR30, (VAR11 | VAR40 | VAR41) & VAR8);
                    return -1;
                }
            }
        }
        VAR7->VAR13 = 0;
        FUN19(VAR7, 16 * VAR7->VAR30, 16);
    }
}