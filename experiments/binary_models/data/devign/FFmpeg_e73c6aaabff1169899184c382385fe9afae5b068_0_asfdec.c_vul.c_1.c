static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = 0;
    for (;;)
    {
        int VAR12;
        if (VAR4->VAR13)
            return VAR14;
        if (VAR8->VAR15 < VAR16 || VAR8->VAR17 < 1)
        {
            int VAR12 = VAR8->VAR15 + VAR8->VAR18;
            assert(VAR12 >= 0);
            FUN2(VAR4, VAR12);
            VAR8->VAR19 = FUN3(VAR4);
            if (VAR8->VAR20 != (VAR21)-1 && (VAR8->VAR19 - VAR8->VAR22 >= VAR8->VAR20))
                return VAR14;
            return 1;
        }
        if (VAR8->VAR23 == 0)
        {
            if (FUN4(VAR2, VAR4) < 0)
            {
                VAR8->VAR17 = 0;
                continue;
            }
            if (VAR8->VAR24 < 0 || VAR2->VAR25[VAR8->VAR24]->VAR26 >= VAR27 || (!VAR8->VAR28 && VAR2->VAR25[VAR8->VAR24]->VAR26 >= VAR29))
            {
                VAR8->VAR23 = 0;
                FUN2(VAR4, VAR8->VAR30);
                VAR8->VAR15 -= VAR8->VAR30;
                if (VAR8->VAR24 < 0)
                    FUN5(VAR2, VAR31, "", VAR8->VAR30);
                continue;
            }
            VAR8->VAR11 = VAR2->VAR25[VAR8->VAR24]->VAR9;
        }
        VAR11 = VAR8->VAR11;
        if (VAR8->VAR32 == 1)
        {
            VAR8->VAR33 = VAR8->VAR23;
            VAR8->VAR23 += VAR8->VAR34;
            VAR8->VAR35 = VAR8->VAR30 = FUN6(VAR4);
            VAR8->VAR15--;
            VAR8->VAR36--;
            if (VAR8->VAR36 < VAR8->VAR35)
            {
                VAR8->VAR23 = 0;
                FUN2(VAR4, VAR8->VAR36);
                VAR8->VAR15 -= VAR8->VAR36;
                continue;
            }
            VAR8->VAR36 -= VAR8->VAR35;
        }
        if (VAR11->VAR37 + VAR8->VAR30 <= VAR11->VAR6.VAR38 && VAR11->VAR37 + VAR8->VAR30 > VAR8->VAR35)
        {
            FUN5(VAR2, VAR39, "", VAR11->VAR37, VAR8->VAR30, VAR8->VAR35, VAR11->VAR6.VAR38);
            VAR8->VAR35 = VAR11->VAR6.VAR38;
        }
        if (VAR11->VAR6.VAR38 != VAR8->VAR35 || VAR11->VAR37 + VAR8->VAR30 > VAR11->VAR6.VAR38)
        {
            if (VAR11->VAR6.VAR40)
            {
                FUN5(VAR2, VAR39, "", VAR11->VAR6.VAR38, VAR8->VAR35);
                VAR11->VAR37 = 0;
                FUN7(&VAR11->VAR6);
            }
            FUN8(&VAR11->VAR6, VAR8->VAR35);
            VAR11->VAR41 = VAR8->VAR42;
            VAR11->VAR6.VAR43 = VAR8->VAR33 - VAR8->VAR44.VAR45;
            VAR11->VAR6.VAR24 = VAR8->VAR24;
            VAR11->VAR6.VAR46 = VAR11->VAR19 = VAR8->VAR19;
            if (VAR11->VAR6.VAR40 && VAR11->VAR47)
            {
                VAR48 *VAR49;
                VAR49 = FUN9(&VAR11->VAR6, VAR50, VAR51);
                if (!VAR49)
                {
                    FUN5(VAR2, VAR31, "");
                }
                else
                {
                    memcpy(VAR49, VAR11->VAR52, VAR51);
                    VAR11->VAR47 = 0;
                }
            }
            if (VAR2->VAR25[VAR8->VAR24]->VAR53->VAR54 == VAR55)
                VAR8->VAR28 = 1;
            if (VAR8->VAR28)
                VAR11->VAR6.VAR56 |= VAR57;
        }
        VAR8->VAR15 -= VAR8->VAR30;
        if (VAR8->VAR15 < 0)
            continue;
        if (VAR8->VAR58 >= VAR11->VAR6.VAR38 || VAR8->VAR30 > VAR11->VAR6.VAR38 - VAR8->VAR58)
        {
            FUN5(VAR2, VAR31, "", VAR8->VAR58, VAR8->VAR30, VAR11->VAR6.VAR38);
            continue;
        }
        VAR12 = FUN10(VAR4, VAR11->VAR6.VAR40 + VAR8->VAR58, VAR8->VAR30);
        if (VAR12 != VAR8->VAR30)
        {
            if (VAR12 < 0 || VAR8->VAR58 + VAR12 == 0)
                return VAR12 < 0 ? VAR12 : VAR14;
            if (VAR11->VAR59 > 1)
            {
                memset(VAR11->VAR6.VAR40 + VAR8->VAR58 + VAR12, 0, VAR8->VAR30 - VAR12);
                VAR12 = VAR8->VAR30;
            }
            else
                FUN11(&VAR11->VAR6, VAR8->VAR58 + VAR12);
        }
        if (VAR2->VAR60 && VAR2->VAR61 == 20)
            FUN12(VAR2->VAR60, VAR11->VAR6.VAR40 + VAR8->VAR58, VAR12);
        VAR11->VAR37 += VAR12;
        if (VAR11->VAR37 == VAR11->VAR6.VAR38)
        {
            if (VAR2->VAR25[VAR8->VAR24]->VAR53->VAR62 == VAR63 && VAR11->VAR6.VAR38 > 100)
            {
                int VAR64;
                for (VAR64 = 0; VAR64 < VAR11->VAR6.VAR38 && !VAR11->VAR6.VAR40[VAR64]; VAR64++)
                    ;
                if (VAR64 == VAR11->VAR6.VAR38)
                {
                    FUN5(VAR2, VAR65, "");
                    VAR11->VAR37 = 0;
                    FUN7(&VAR11->VAR6);
                    continue;
                }
            }
            if (VAR11->VAR59 > 1)
            {
                if (VAR11->VAR6.VAR38 != VAR11->VAR66 * VAR11->VAR59)
                {
                    FUN5(VAR2, VAR31, "", VAR11->VAR6.VAR38, VAR11->VAR66, VAR11->VAR59);
                }
                else
                {
                    VAR48 *VAR67 = FUN13(VAR11->VAR6.VAR38 + VAR68);
                    if (VAR67)
                    {
                        int VAR69 = 0;
                        memset(VAR67 + VAR11->VAR6.VAR38, 0, VAR68);
                        while (VAR69 < VAR11->VAR6.VAR38)
                        {
                            int VAR70 = VAR69 / VAR11->VAR71;
                            int VAR72 = VAR70 / VAR11->VAR59;
                            int VAR73 = VAR70 % VAR11->VAR59;
                            int VAR74 = VAR72 + VAR73 * VAR11->VAR66 / VAR11->VAR71;
                            assert(VAR69 + VAR11->VAR71 <= VAR11->VAR6.VAR38);
                            assert(VAR74 + 1 <= VAR11->VAR6.VAR38 / VAR11->VAR71);
                            memcpy(VAR67 + VAR69, VAR11->VAR6.VAR40 + VAR74 * VAR11->VAR71, VAR11->VAR71);
                            VAR69 += VAR11->VAR71;
                        }
                        FUN14(VAR11->VAR6.VAR40);
                        VAR11->VAR6.VAR40 = VAR67;
                    }
                }
            }
            VAR11->VAR37 = 0;
            *VAR6 = VAR11->VAR6;
            VAR11->VAR6.VAR38 = 0;
            VAR11->VAR6.VAR40 = 0;
            break;
        }
    }
    return 0;