static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = 0;
    for (;;)
    {
        int VAR12;
        if (FUN2(VAR4))
            return VAR13;
        if (VAR8->VAR14 < VAR15)
        {
            int VAR12 = VAR8->VAR14 + VAR8->VAR16;
            assert(VAR12 >= 0);
            FUN3(VAR4, VAR12);
            VAR8->VAR17 = FUN4(VAR4);
            if (VAR8->VAR18 != (VAR19)-1 && (VAR8->VAR17 - VAR8->VAR20 >= VAR8->VAR18))
                return VAR13;
            return 1;
        }
        if (VAR8->VAR21 == 0)
        {
            if (FUN5(VAR2, VAR4) < 0)
            {
                VAR8->VAR21 = VAR8->VAR22 = 0;
                continue;
            }
            if (VAR8->VAR23 < 0 || VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR26 || (!VAR8->VAR27 && (VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR28 || VAR8->VAR24[VAR2->VAR24[VAR8->VAR23]->VAR29].VAR30)))
            {
                VAR8->VAR21 = 0;
                FUN3(VAR4, VAR8->VAR31);
                VAR8->VAR14 -= VAR8->VAR31;
                if (VAR8->VAR23 < 0)
                    FUN6(VAR2, VAR32, "", VAR8->VAR31);
                continue;
            }
            VAR8->VAR11 = &VAR8->VAR24[VAR2->VAR24[VAR8->VAR23]->VAR29];
            VAR8->VAR11->VAR30 = 0;
        }
        VAR11 = VAR8->VAR11;
        FUN7(VAR11);
        if (VAR8->VAR33 == 1)
        {
            VAR8->VAR34 = VAR8->VAR21;
            VAR8->VAR21 += VAR8->VAR35;
            VAR11->VAR36 = VAR8->VAR31 = FUN8(VAR4);
            VAR8->VAR14--;
            VAR8->VAR37--;
            if (VAR8->VAR37 < VAR11->VAR36)
            {
                VAR8->VAR21 = 0;
                FUN3(VAR4, VAR8->VAR37);
                VAR8->VAR14 -= VAR8->VAR37;
                continue;
            }
            VAR8->VAR37 -= VAR11->VAR36;
        }
        if (VAR11->VAR6.VAR38 != VAR11->VAR36 || VAR11->VAR39 + VAR8->VAR31 > VAR11->VAR6.VAR38)
        {
            if (VAR11->VAR6.VAR40)
            {
                FUN6(VAR2, VAR41, "", VAR11->VAR6.VAR38, VAR11->VAR36);
                VAR11->VAR39 = 0;
                FUN9(&VAR11->VAR6);
            }
            FUN10(&VAR11->VAR6, VAR11->VAR36);
            VAR11->VAR42 = VAR8->VAR43;
            VAR11->VAR6.VAR44 = VAR8->VAR34 - VAR8->VAR45.VAR46;
            VAR11->VAR6.VAR23 = VAR8->VAR23;
            VAR11->VAR6.VAR47 = VAR11->VAR17 = VAR8->VAR17;
            if (VAR11->VAR6.VAR40 && VAR11->VAR48)
            {
                VAR49 *VAR50;
                VAR50 = FUN11(&VAR11->VAR6, VAR51, VAR52);
                if (!VAR50)
                {
                    FUN6(VAR2, VAR32, "");
                }
                else
                {
                    memcpy(VAR50, VAR11->VAR53, VAR52);
                    VAR11->VAR48 = 0;
                }
            }
            FUN12(VAR8, "", VAR8->VAR23, VAR8->VAR27, VAR11->VAR6.VAR54 & VAR55, VAR2->VAR24[VAR8->VAR23]->VAR56->VAR57 == VAR58, VAR11->VAR36);
            if (VAR2->VAR24[VAR8->VAR23]->VAR56->VAR57 == VAR58)
                VAR8->VAR27 = 1;
            if (VAR8->VAR27)
                VAR11->VAR6.VAR54 |= VAR55;
        }
        FUN12(VAR8, "", VAR2->VAR59, VAR11->VAR6.VAR38, VAR8->VAR60, VAR11->VAR39, VAR8->VAR31, VAR11->VAR6.VAR40);
        VAR8->VAR14 -= VAR8->VAR31;
        if (VAR8->VAR14 < 0)
            continue;
        if (VAR8->VAR60 >= VAR11->VAR6.VAR38 || VAR8->VAR31 > VAR11->VAR6.VAR38 - VAR8->VAR60)
        {
            FUN6(VAR2, VAR32, "", VAR8->VAR60, VAR8->VAR31, VAR11->VAR6.VAR38);
            continue;
        }
        if (VAR8->VAR60 != VAR11->VAR39 && !VAR11->VAR61)
        {
            memset(VAR11->VAR6.VAR40 + VAR11->VAR39, 0, VAR11->VAR6.VAR38 - VAR11->VAR39);
            VAR11->VAR61 = 1;
        }
        VAR12 = FUN13(VAR4, VAR11->VAR6.VAR40 + VAR8->VAR60, VAR8->VAR31);
        if (VAR12 != VAR8->VAR31)
        {
            if (VAR12 < 0 || VAR8->VAR60 + VAR12 == 0)
                return VAR12 < 0 ? VAR12 : VAR13;
            if (VAR11->VAR62 > 1)
            {
                memset(VAR11->VAR6.VAR40 + VAR8->VAR60 + VAR12, 0, VAR8->VAR31 - VAR12);
                VAR12 = VAR8->VAR31;
            }
            else
            {
                FUN14(&VAR11->VAR6, VAR8->VAR60 + VAR12);
            }
        }
        if (VAR2->VAR63 && VAR2->VAR64 == 20)
            FUN15(VAR2->VAR63, VAR11->VAR6.VAR40 + VAR8->VAR60, VAR12);
        VAR11->VAR39 += VAR12;
        if (VAR11->VAR39 == VAR11->VAR6.VAR38)
        {
            if (VAR2->VAR24[VAR8->VAR23]->VAR56->VAR65 == VAR66 && VAR11->VAR6.VAR38 > 100)
            {
                int VAR67;
                for (VAR67 = 0; VAR67 < VAR11->VAR6.VAR38 && !VAR11->VAR6.VAR40[VAR67]; VAR67++)
                    ;
                if (VAR67 == VAR11->VAR6.VAR38)
                {
                    FUN6(VAR2, VAR68, "");
                    VAR11->VAR39 = 0;
                    FUN9(&VAR11->VAR6);
                    continue;
                }
            }
            if (VAR11->VAR62 > 1)
            {
                if (VAR11->VAR6.VAR38 != VAR11->VAR69 * VAR11->VAR62)
                {
                    FUN6(VAR2, VAR32, "", VAR11->VAR6.VAR38, VAR11->VAR69, VAR11->VAR62);
                }
                else
                {
                    VAR70 *VAR71 = FUN16(VAR11->VAR6.VAR38 + VAR72);
                    if (VAR71)
                    {
                        VAR49 *VAR73 = VAR71->VAR40;
                        int VAR74 = 0;
                        memset(VAR73 + VAR11->VAR6.VAR38, 0, VAR72);
                        while (VAR74 < VAR11->VAR6.VAR38)
                        {
                            int VAR75 = VAR74 / VAR11->VAR76;
                            int VAR77 = VAR75 / VAR11->VAR62;
                            int VAR78 = VAR75 % VAR11->VAR62;
                            int VAR79 = VAR77 + VAR78 * VAR11->VAR69 / VAR11->VAR76;
                            assert(VAR74 + VAR11->VAR76 <= VAR11->VAR6.VAR38);
                            assert(VAR79 + 1 <= VAR11->VAR6.VAR38 / VAR11->VAR76);
                            memcpy(VAR73 + VAR74, VAR11->VAR6.VAR40 + VAR79 * VAR11->VAR76, VAR11->VAR76);
                            VAR74 += VAR11->VAR76;
                        }
                        FUN17(&VAR11->VAR6.VAR71);
                        VAR11->VAR6.VAR71 = VAR71;
                        VAR11->VAR6.VAR40 = VAR71->VAR40;
                    }
                }
            }
            VAR11->VAR39 = 0;
            *VAR6 = VAR11->VAR6;
            FF_DISABLE_DEPRECATION_WARNINGS VAR11->VAR6.VAR80 = NULL;
            FF_ENABLE_DEPRECATION_WARNINGS VAR11->VAR6.VAR71 = 0;
            VAR11->VAR6.VAR38 = 0;
            VAR11->VAR6.VAR40 = 0;
            VAR11->VAR6.VAR81 = 0;
            VAR11->VAR6.VAR82 = NULL;
            break;
        }
    }
    return 0;