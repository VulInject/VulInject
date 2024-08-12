static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = 0;
    for (;;)
    {
        int VAR12;
        if (FUN2(VAR4))
            return VAR13;
        if (VAR8->VAR14 < VAR15 || VAR8->VAR16 < 1 && VAR8->VAR17 == 0)
        {
            int VAR12 = VAR8->VAR14 + VAR8->VAR18;
            assert(VAR12 >= 0);
            FUN3(VAR4, VAR12);
            VAR8->VAR19 = FUN4(VAR4);
            if (VAR8->VAR20 != (VAR21)-1 && (VAR8->VAR19 - VAR8->VAR22 >= VAR8->VAR20))
                return VAR13;
            return 1;
        }
        if (VAR8->VAR17 == 0)
        {
            if (FUN5(VAR2, VAR4) < 0)
            {
                VAR8->VAR17 = VAR8->VAR16 = 0;
                continue;
            }
            if (VAR8->VAR23 < 0 || VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR26 || (!VAR8->VAR27 && (VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR28 || VAR8->VAR24[VAR2->VAR24[VAR8->VAR23]->VAR29].VAR30)))
            {
                VAR8->VAR17 = 0;
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
        if (!VAR11->VAR33 && VAR8->VAR34)
        {
            FUN8(VAR2, ""
                       "",
                    VAR8->VAR23, VAR11->VAR33, VAR8->VAR34);
            FUN3(VAR4, VAR8->VAR31);
            VAR8->VAR14 -= VAR8->VAR31;
            continue;
        }
        if (VAR8->VAR35 == 1)
        {
            VAR8->VAR36 = VAR8->VAR17;
            VAR8->VAR17 += VAR8->VAR37;
            VAR11->VAR38 = VAR8->VAR31 = FUN9(VAR4);
            VAR8->VAR14--;
            VAR8->VAR39--;
            if (VAR8->VAR39 < VAR11->VAR38)
            {
                VAR8->VAR17 = 0;
                FUN3(VAR4, VAR8->VAR39);
                VAR8->VAR14 -= VAR8->VAR39;
                continue;
            }
            VAR8->VAR39 -= VAR11->VAR38;
        }
        if (VAR11->VAR6.VAR40 != VAR11->VAR38 || VAR11->VAR33 + VAR8->VAR31 > VAR11->VAR6.VAR40)
        {
            int VAR12;
            if (VAR11->VAR6.VAR41)
            {
                FUN6(VAR2, VAR42, "", VAR11->VAR6.VAR40, VAR11->VAR38);
                VAR11->VAR33 = 0;
                FUN10(&VAR11->VAR6);
            }
            if ((VAR12 = FUN11(&VAR11->VAR6, VAR11->VAR38)) < 0)
                return VAR12;
            VAR11->VAR43 = VAR8->VAR44;
            if (VAR8->VAR45)
            {
                VAR11->VAR6.VAR46 = VAR8->VAR36 - VAR8->VAR47.VAR48;
            }
            else
                VAR11->VAR6.VAR49 = VAR8->VAR36 - VAR8->VAR47.VAR48;
            VAR11->VAR6.VAR23 = VAR8->VAR23;
            VAR11->VAR6.VAR50 = VAR11->VAR19 = VAR8->VAR19;
            VAR11->VAR51 = 0;
            if (VAR11->VAR6.VAR41 && VAR11->VAR52)
            {
                VAR53 *VAR54;
                VAR54 = FUN12(&VAR11->VAR6, VAR55, VAR56);
                if (!VAR54)
                {
                    FUN6(VAR2, VAR32, "");
                }
                else
                {
                    memcpy(VAR54, VAR11->VAR57, VAR56);
                    VAR11->VAR52 = 0;
                }
            }
            FUN8(VAR8, "", VAR8->VAR23, VAR8->VAR27, VAR11->VAR6.VAR58 & VAR59, VAR2->VAR24[VAR8->VAR23]->VAR60->VAR61 == VAR62, VAR11->VAR38);
            if (VAR2->VAR24[VAR8->VAR23]->VAR60->VAR61 == VAR62)
                VAR8->VAR27 = 1;
            if (VAR8->VAR27)
                VAR11->VAR6.VAR58 |= VAR59;
        }
        FUN8(VAR8, "", VAR2->VAR63, VAR11->VAR6.VAR40, VAR8->VAR34, VAR11->VAR33, VAR8->VAR31, VAR11->VAR6.VAR41);
        VAR8->VAR14 -= VAR8->VAR31;
        if (VAR8->VAR14 < 0)
            continue;
        if (VAR8->VAR34 >= VAR11->VAR6.VAR40 || VAR8->VAR31 > VAR11->VAR6.VAR40 - VAR8->VAR34)
        {
            FUN6(VAR2, VAR32, "", VAR8->VAR34, VAR8->VAR31, VAR11->VAR6.VAR40);
            continue;
        }
        if (VAR8->VAR34 != VAR11->VAR33 && !VAR11->VAR51)
        {
            memset(VAR11->VAR6.VAR41 + VAR11->VAR33, 0, VAR11->VAR6.VAR40 - VAR11->VAR33);
            VAR11->VAR51 = 1;
        }
        VAR12 = FUN13(VAR4, VAR11->VAR6.VAR41 + VAR8->VAR34, VAR8->VAR31);
        if (VAR12 != VAR8->VAR31)
        {
            if (VAR12 < 0 || VAR8->VAR34 + VAR12 == 0)
                return VAR12 < 0 ? VAR12 : VAR13;
            if (VAR11->VAR64 > 1)
            {
                memset(VAR11->VAR6.VAR41 + VAR8->VAR34 + VAR12, 0, VAR8->VAR31 - VAR12);
                VAR12 = VAR8->VAR31;
            }
            else
            {
                FUN14(&VAR11->VAR6, VAR8->VAR34 + VAR12);
            }
        }
        if (VAR2->VAR65 && VAR2->VAR66 == 20)
            FUN15(VAR2->VAR65, VAR11->VAR6.VAR41 + VAR8->VAR34, VAR12);
        VAR11->VAR33 += VAR12;
        if (VAR11->VAR33 == VAR11->VAR6.VAR40)
        {
            if (VAR2->VAR24[VAR8->VAR23]->VAR60->VAR67 == VAR68 && VAR11->VAR6.VAR40 > 100)
            {
                int VAR69;
                for (VAR69 = 0; VAR69 < VAR11->VAR6.VAR40 && !VAR11->VAR6.VAR41[VAR69]; VAR69++)
                    ;
                if (VAR69 == VAR11->VAR6.VAR40)
                {
                    FUN6(VAR2, VAR70, "");
                    VAR11->VAR33 = 0;
                    FUN10(&VAR11->VAR6);
                    continue;
                }
            }
            if (VAR11->VAR64 > 1)
            {
                if (VAR11->VAR6.VAR40 != VAR11->VAR71 * VAR11->VAR64)
                {
                    FUN6(VAR2, VAR32, "", VAR11->VAR6.VAR40, VAR11->VAR71, VAR11->VAR64);
                }
                else
                {
                    VAR72 *VAR73 = FUN16(VAR11->VAR6.VAR40 + VAR74);
                    if (VAR73)
                    {
                        VAR53 *VAR75 = VAR73->VAR41;
                        int VAR76 = 0;
                        memset(VAR75 + VAR11->VAR6.VAR40, 0, VAR74);
                        while (VAR76 < VAR11->VAR6.VAR40)
                        {
                            int VAR77 = VAR76 / VAR11->VAR78;
                            int VAR79 = VAR77 / VAR11->VAR64;
                            int VAR80 = VAR77 % VAR11->VAR64;
                            int VAR81 = VAR79 + VAR80 * VAR11->VAR71 / VAR11->VAR78;
                            assert(VAR76 + VAR11->VAR78 <= VAR11->VAR6.VAR40);
                            assert(VAR81 + 1 <= VAR11->VAR6.VAR40 / VAR11->VAR78);
                            memcpy(VAR75 + VAR76, VAR11->VAR6.VAR41 + VAR81 * VAR11->VAR78, VAR11->VAR78);
                            VAR76 += VAR11->VAR78;
                        }
                        FUN17(&VAR11->VAR6.VAR73);
                        VAR11->VAR6.VAR73 = VAR73;
                        VAR11->VAR6.VAR41 = VAR73->VAR41;
                    }
                }
            }
            VAR11->VAR33 = 0;
            *VAR6 = VAR11->VAR6;
            FF_DISABLE_DEPRECATION_WARNINGS VAR11->VAR6.VAR82 = NULL;
            FF_ENABLE_DEPRECATION_WARNINGS VAR11->VAR6.VAR73 = 0;
            VAR11->VAR6.VAR40 = 0;
            VAR11->VAR6.VAR41 = 0;
            VAR11->VAR6.VAR83 = 0;
            VAR11->VAR6.VAR84 = NULL;
            break;
        }
    }
    return 0;
}