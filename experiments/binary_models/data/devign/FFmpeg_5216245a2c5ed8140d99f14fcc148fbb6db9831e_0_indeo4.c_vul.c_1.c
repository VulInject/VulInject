static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21, *VAR22;
    int VAR23 = VAR4->VAR24 * VAR4->VAR25;
    VAR21 = VAR6->VAR26;
    VAR22 = VAR6->VAR27;
    VAR14 = VAR6->VAR28 * VAR4->VAR25 + VAR6->VAR29;
    VAR16 = VAR4->VAR24 != VAR4->VAR30 ? 4 : 1;
    VAR18 = VAR2->VAR31 == VAR32 ? 2 : 1;
    VAR17 = (VAR2->VAR33[0].VAR34[0].VAR24 >> 3) - (VAR4->VAR24 >> 3);
    VAR11 = VAR12 = 0;
    if (((VAR6->VAR35 + VAR4->VAR24 - 1) / VAR4->VAR24) * ((VAR6->VAR36 + VAR4->VAR24 - 1) / VAR4->VAR24) != VAR6->VAR37)
    {
        FUN2(VAR8, VAR38, "", VAR6->VAR35, VAR6->VAR36, VAR4->VAR24, VAR6->VAR37);
        return -1;
    }
    for (VAR10 = VAR6->VAR28; VAR10 < VAR6->VAR28 + VAR6->VAR36; VAR10 += VAR4->VAR24)
    {
        VAR15 = VAR14;
        for (VAR9 = VAR6->VAR29; VAR9 < VAR6->VAR29 + VAR6->VAR35; VAR9 += VAR4->VAR24)
        {
            VAR21->VAR29 = VAR9;
            VAR21->VAR28 = VAR10;
            VAR21->VAR39 = VAR15;
            if (FUN3(&VAR2->VAR40))
            {
                if (VAR2->VAR31 == VAR41)
                {
                    FUN2(VAR8, VAR38, "");
                    return VAR42;
                }
                VAR21->VAR43 = 1;
                VAR21->VAR44 = 0;
                VAR21->VAR45 = 0;
                if (!VAR4->VAR46 && !VAR4->VAR47 && VAR2->VAR48)
                {
                    VAR21->VAR45 = FUN4(&VAR2->VAR40, VAR2->VAR49.VAR50->VAR51, VAR52, 1);
                    VAR21->VAR45 = FUN5(VAR21->VAR45);
                }
                VAR21->VAR11 = VAR21->VAR12 = 0;
                if (VAR4->VAR53)
                {
                    if (VAR17)
                    {
                        VAR21->VAR11 = FUN6(VAR22->VAR11, VAR17);
                        VAR21->VAR12 = FUN6(VAR22->VAR12, VAR17);
                    }
                    else
                    {
                        VAR21->VAR11 = VAR22->VAR11;
                        VAR21->VAR12 = VAR22->VAR12;
                    }
                }
            }
            else
            {
                if (VAR4->VAR53 && VAR22)
                {
                    VAR21->VAR43 = VAR22->VAR43;
                }
                else if (VAR2->VAR31 == VAR41)
                {
                    VAR21->VAR43 = 0;
                }
                else
                {
                    VAR21->VAR43 = FUN7(&VAR2->VAR40, VAR18);
                }
                VAR21->VAR44 = FUN7(&VAR2->VAR40, VAR16);
                VAR21->VAR45 = 0;
                if (VAR4->VAR54)
                {
                    if (VAR22)
                        VAR21->VAR45 = VAR22->VAR45;
                }
                else if (VAR21->VAR44 || (!VAR4->VAR46 && !VAR4->VAR47 && VAR2->VAR48))
                {
                    VAR21->VAR45 = FUN4(&VAR2->VAR40, VAR2->VAR49.VAR50->VAR51, VAR52, 1);
                    VAR21->VAR45 = FUN5(VAR21->VAR45);
                }
                if (!VAR21->VAR43)
                {
                    VAR21->VAR11 = VAR21->VAR12 = 0;
                }
                else
                {
                    if (VAR4->VAR53)
                    {
                        if (VAR17)
                        {
                            VAR21->VAR11 = FUN6(VAR22->VAR11, VAR17);
                            VAR21->VAR12 = FUN6(VAR22->VAR12, VAR17);
                        }
                        else
                        {
                            VAR21->VAR11 = VAR22->VAR11;
                            VAR21->VAR12 = VAR22->VAR12;
                        }
                    }
                    else
                    {
                        VAR13 = FUN4(&VAR2->VAR40, VAR2->VAR49.VAR50->VAR51, VAR52, 1);
                        VAR12 += FUN5(VAR13);
                        VAR13 = FUN4(&VAR2->VAR40, VAR2->VAR49.VAR50->VAR51, VAR52, 1);
                        VAR11 += FUN5(VAR13);
                        VAR21->VAR11 = VAR11;
                        VAR21->VAR12 = VAR12;
                    }
                }
            }
            VAR19 = VAR4->VAR55;
            if (VAR21->VAR43)
                if (VAR9 + (VAR21->VAR11 >> VAR19) + (VAR10 + (VAR21->VAR12 >> VAR19)) * VAR4->VAR25 < 0 || VAR9 + ((VAR21->VAR11 + VAR19) >> VAR19) + VAR4->VAR24 - 1 + (VAR10 + VAR4->VAR24 - 1 + ((VAR21->VAR12 + VAR19) >> VAR19)) * VAR4->VAR25 > VAR4->VAR56 - 1)
                {
                    FUN2(VAR8, VAR38, "", VAR9 * VAR19 + VAR21->VAR11, VAR10 * VAR19 + VAR21->VAR12);
                    return VAR42;
                }
            VAR21++;
            if (VAR22)
                VAR22++;
            VAR15 += VAR4->VAR24;
        }
        VAR14 += VAR23;
    }
    FUN8(&VAR2->VAR40);
    return 0;
}