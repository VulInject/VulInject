static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    int VAR6 = VAR5->VAR7;
    VAR5->VAR8 = -1;
    FUN2(VAR5->VAR9[15] == (4 * ((VAR10[15] - VAR10[0]) & 7) << VAR5->VAR11) + 4 * VAR5->VAR12 * ((VAR10[15] - VAR10[0]) >> 3));
    VAR5->VAR13 = FUN3(VAR5) || VAR5->VAR14 != VAR15 || VAR2->VAR16 != VAR17 || (VAR18 && (VAR5->VAR19 & VAR20));
    if (!(VAR5->VAR2->VAR21 & VAR22) && VAR5->VAR14 == VAR15)
    {
        const int VAR23 = FUN4(VAR5->VAR24 + VAR5->VAR25 * VAR5->VAR26, 0, VAR5->VAR27 - 1);
        if (VAR23)
        {
            int VAR28 = VAR5->VAR29.VAR30[VAR5->VAR29.VAR31[VAR23 - 1]];
            VAR28 &= ~VAR32;
            if (VAR28 != (VAR33 | VAR34 | VAR35))
                VAR5->VAR29.VAR36 = 1;
        }
    }
    if (VAR5->VAR37.VAR38)
    {
        FUN5(&VAR5->VAR39);
        FUN6(&VAR5->VAR38, VAR5->VAR39.VAR40 + FUN7(&VAR5->VAR39) / 8, (FUN8(&VAR5->VAR39) + 7) / 8);
        FUN9(VAR5);
        for (;;)
        {
            int VAR41 = FUN10(VAR5);
            int VAR42;
            if (VAR41 >= 0)
                FUN11(VAR5);
            if (VAR41 >= 0 && FUN3(VAR5))
            {
                VAR5->VAR43++;
                VAR41 = FUN10(VAR5);
                if (VAR41 >= 0)
                    FUN11(VAR5);
                VAR5->VAR43--;
            }
            VAR42 = FUN12(&VAR5->VAR38);
            if ((VAR5->VAR44 & VAR45) && VAR5->VAR38.VAR46 > VAR5->VAR38.VAR47 + 2)
            {
                FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7 - 1, VAR5->VAR43, VAR48);
                if (VAR5->VAR7 >= VAR6)
                    FUN14(VAR5, VAR6, VAR5->VAR7 + 1);
                return 0;
            }
            if (VAR5->VAR38.VAR46 > VAR5->VAR38.VAR47 + 2)
                FUN15(VAR5->VAR2, VAR49, "", VAR5->VAR38.VAR47 - VAR5->VAR38.VAR46);
            if (VAR41 < 0 || VAR5->VAR38.VAR46 > VAR5->VAR38.VAR47 + 4)
            {
                FUN15(VAR5->VAR2, VAR50, "", VAR5->VAR7, VAR5->VAR43, VAR5->VAR38.VAR47 - VAR5->VAR38.VAR46);
                FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7, VAR5->VAR43, VAR51);
                return -1;
            }
            if (++VAR5->VAR7 >= VAR5->VAR26)
            {
                FUN14(VAR5, VAR6, VAR5->VAR7);
                VAR5->VAR7 = VAR6 = 0;
                FUN16(VAR5);
                ++VAR5->VAR43;
                if (FUN17(VAR5))
                {
                    ++VAR5->VAR43;
                    if (FUN3(VAR5) && VAR5->VAR43 < VAR5->VAR52)
                        FUN18(VAR5);
                }
            }
            if (VAR42 || VAR5->VAR43 >= VAR5->VAR52)
            {
                FUN19(VAR5->VAR2, "", FUN7(&VAR5->VAR39), VAR5->VAR39.VAR53);
                FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7 - 1, VAR5->VAR43, VAR48);
                if (VAR5->VAR7 > VAR6)
                    FUN14(VAR5, VAR6, VAR5->VAR7);
                return 0;
            }
        }
    }
    else
    {
        for (;;)
        {
            int VAR41 = FUN20(VAR5);
            if (VAR41 >= 0)
                FUN11(VAR5);
            if (VAR41 >= 0 && FUN3(VAR5))
            {
                VAR5->VAR43++;
                VAR41 = FUN20(VAR5);
                if (VAR41 >= 0)
                    FUN11(VAR5);
                VAR5->VAR43--;
            }
            if (VAR41 < 0)
            {
                FUN15(VAR5->VAR2, VAR50, "", VAR5->VAR7, VAR5->VAR43);
                FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7, VAR5->VAR43, VAR51);
                return -1;
            }
            if (++VAR5->VAR7 >= VAR5->VAR26)
            {
                FUN14(VAR5, VAR6, VAR5->VAR7);
                VAR5->VAR7 = VAR6 = 0;
                FUN16(VAR5);
                ++VAR5->VAR43;
                if (FUN17(VAR5))
                {
                    ++VAR5->VAR43;
                    if (FUN3(VAR5) && VAR5->VAR43 < VAR5->VAR52)
                        FUN18(VAR5);
                }
                if (VAR5->VAR43 >= VAR5->VAR52)
                {
                    FUN19(VAR5->VAR2, "", FUN7(&VAR5->VAR39), VAR5->VAR39.VAR53);
                    if (FUN8(&VAR5->VAR39) == 0 || FUN8(&VAR5->VAR39) > 0 && !(VAR5->VAR2->VAR54 & VAR55))
                    {
                        FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7 - 1, VAR5->VAR43, VAR48);
                        return 0;
                    }
                    else
                    {
                        FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7, VAR5->VAR43, VAR48);
                        return -1;
                    }
                }
            }
            if (FUN8(&VAR5->VAR39) <= 0 && VAR5->VAR8 <= 0)
            {
                FUN19(VAR5->VAR2, "", FUN7(&VAR5->VAR39), VAR5->VAR39.VAR53);
                if (FUN8(&VAR5->VAR39) == 0)
                {
                    FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7 - 1, VAR5->VAR43, VAR48);
                    if (VAR5->VAR7 > VAR6)
                        FUN14(VAR5, VAR6, VAR5->VAR7);
                    return 0;
                }
                else
                {
                    FUN13(VAR5, VAR5->VAR24, VAR5->VAR25, VAR5->VAR7, VAR5->VAR43, VAR51);
                    return -1;
                }
            }
        }
    }
}