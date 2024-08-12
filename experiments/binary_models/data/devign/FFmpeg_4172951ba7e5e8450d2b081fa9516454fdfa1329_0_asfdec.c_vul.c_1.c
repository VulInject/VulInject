static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = 0;
    for (;;)
    {
        if (FUN2(VAR4))
            return VAR12;
        if (VAR8->VAR13 < VAR14 || VAR8->VAR15 < 1)
        {
            int VAR16 = VAR8->VAR13 + VAR8->VAR17;
            assert(VAR16 >= 0);
            FUN3(VAR4, VAR16);
            VAR8->VAR18 = FUN4(VAR4);
            if (VAR8->VAR19 != (VAR20)-1 && (VAR8->VAR18 - VAR8->VAR21 >= VAR8->VAR19))
                return VAR12;
            return 1;
        }
        if (VAR8->VAR22 == 0)
        {
            if (FUN5(VAR2, VAR4) < 0)
            {
                VAR8->VAR15 = 0;
                continue;
            }
            if (VAR8->VAR23 < 0 || VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR26 || (!VAR8->VAR27 && VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR28))
            {
                VAR8->VAR22 = 0;
                FUN3(VAR4, VAR8->VAR29);
                VAR8->VAR13 -= VAR8->VAR29;
                if (VAR8->VAR23 < 0)
                    FUN6(VAR2, VAR30, "", VAR8->VAR29);
                continue;
            }
            VAR8->VAR11 = VAR2->VAR24[VAR8->VAR23]->VAR9;
        }
        VAR11 = VAR8->VAR11;
        if (VAR8->VAR31 == 1)
        {
            VAR8->VAR32 = VAR8->VAR22;
            VAR8->VAR22 += VAR8->VAR33;
            VAR8->VAR34 = VAR8->VAR29 = FUN7(VAR4);
            VAR8->VAR13--;
            VAR8->VAR35--;
            if (VAR8->VAR35 < VAR8->VAR34)
            {
                VAR8->VAR22 = 0;
                FUN3(VAR4, VAR8->VAR35);
                VAR8->VAR13 -= VAR8->VAR35;
                continue;
            }
            VAR8->VAR35 -= VAR8->VAR34;
        }
        if (VAR11->VAR36 + VAR8->VAR29 <= VAR11->VAR6.VAR37 && VAR11->VAR36 + VAR8->VAR29 > VAR8->VAR34)
        {
            FUN6(VAR2, VAR38, "", VAR11->VAR36, VAR8->VAR29, VAR8->VAR34, VAR11->VAR6.VAR37);
            VAR8->VAR34 = VAR11->VAR6.VAR37;
        }
        if (VAR11->VAR6.VAR37 != VAR8->VAR34 || VAR11->VAR36 + VAR8->VAR29 > VAR11->VAR6.VAR37)
        {
            if (VAR11->VAR6.VAR39)
            {
                FUN6(VAR2, VAR38, "", VAR11->VAR6.VAR37, VAR8->VAR34);
                VAR11->VAR36 = 0;
                FUN8(&VAR11->VAR6);
            }
            FUN9(&VAR11->VAR6, VAR8->VAR34);
            VAR11->VAR40 = VAR8->VAR41;
            VAR11->VAR6.VAR42 = VAR8->VAR32;
            VAR11->VAR6.VAR23 = VAR8->VAR23;
            VAR11->VAR6.VAR43 = VAR11->VAR18 = VAR8->VAR18;
            if (VAR2->VAR24[VAR8->VAR23]->VAR44->VAR45 == VAR46)
                VAR8->VAR27 = 1;
            if (VAR8->VAR27)
                VAR11->VAR6.VAR47 |= VAR48;
        }
        VAR8->VAR13 -= VAR8->VAR29;
        if (VAR8->VAR13 < 0)
            continue;
        if (VAR8->VAR49 >= VAR11->VAR6.VAR37 || VAR8->VAR29 > VAR11->VAR6.VAR37 - VAR8->VAR49)
        {
            FUN6(VAR2, VAR30, "", VAR8->VAR49, VAR8->VAR29, VAR11->VAR6.VAR37);
            continue;
        }
        FUN10(VAR4, VAR11->VAR6.VAR39 + VAR8->VAR49, VAR8->VAR29);
        if (VAR2->VAR50 && VAR2->VAR51 == 20)
            FUN11(VAR2->VAR50, VAR11->VAR6.VAR39 + VAR8->VAR49, VAR8->VAR29);
        VAR11->VAR36 += VAR8->VAR29;
        if (VAR11->VAR36 == VAR11->VAR6.VAR37)
        {
            if (VAR2->VAR24[VAR8->VAR23]->VAR44->VAR52 == VAR53 && VAR11->VAR6.VAR37 > 100)
            {
                int VAR54;
                for (VAR54 = 0; VAR54 < VAR11->VAR6.VAR37 && !VAR11->VAR6.VAR39[VAR54]; VAR54++)
                    ;
                if (VAR54 == VAR11->VAR6.VAR37)
                {
                    FUN6(VAR2, VAR55, "");
                    VAR11->VAR36 = 0;
                    FUN8(&VAR11->VAR6);
                    continue;
                }
            }
            if (VAR11->VAR56 > 1)
            {
                if (VAR11->VAR6.VAR37 != VAR11->VAR57 * VAR11->VAR56)
                {
                    FUN6(VAR2, VAR30, "", VAR11->VAR6.VAR37, VAR11->VAR57, VAR11->VAR56);
                }
                else
                {
                    VAR58 *VAR59 = FUN12(VAR11->VAR6.VAR37 + VAR60);
                    if (VAR59)
                    {
                        int VAR61 = 0;
                        memset(VAR59 + VAR11->VAR6.VAR37, 0, VAR60);
                        while (VAR61 < VAR11->VAR6.VAR37)
                        {
                            int VAR62 = VAR61 / VAR11->VAR63;
                            int VAR64 = VAR62 / VAR11->VAR56;
                            int VAR65 = VAR62 % VAR11->VAR56;
                            int VAR66 = VAR64 + VAR65 * VAR11->VAR57 / VAR11->VAR63;
                            assert(VAR61 + VAR11->VAR63 <= VAR11->VAR6.VAR37);
                            assert(VAR66 + 1 <= VAR11->VAR6.VAR37 / VAR11->VAR63);
                            memcpy(VAR59 + VAR61, VAR11->VAR6.VAR39 + VAR66 * VAR11->VAR63, VAR11->VAR63);
                            VAR61 += VAR11->VAR63;
                        }
                        FUN13(VAR11->VAR6.VAR39);
                        VAR11->VAR6.VAR39 = VAR59;
                    }
                }
            }
            VAR11->VAR36 = 0;
            *VAR6 = VAR11->VAR6;
            VAR11->VAR6.VAR37 = 0;
            VAR11->VAR6.VAR39 = 0;
            break;
        }
    }
    return 0;
}