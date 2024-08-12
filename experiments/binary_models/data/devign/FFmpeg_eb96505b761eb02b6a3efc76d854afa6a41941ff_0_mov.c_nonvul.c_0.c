static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    int64_t VAR8;
    int64_t VAR9 = 0;
    unsigned int VAR10 = 0;
    unsigned int VAR11 = 0;
    unsigned int VAR12 = 0;
    unsigned int VAR13 = 0;
    unsigned int VAR14, VAR15;
    uint64_t VAR16 = 0;
    if (VAR6->VAR17 && VAR2->VAR18 > 0)
    {
        if (VAR6->VAR17 < 0)
            VAR6->VAR17 = FUN2(VAR6->VAR17, VAR6->VAR18, VAR2->VAR18);
        VAR9 = -VAR6->VAR17;
        if (VAR6->VAR19 && VAR6->VAR20 && VAR6->VAR20[0].VAR21 && VAR6->VAR19[0].VAR21 / VAR6->VAR20[0].VAR21 > 16)
            VAR4->VAR22->VAR23->VAR24 = 1;
    }
    if (!(VAR4->VAR25->VAR26 == VAR27 && VAR6->VAR28 == 1 && VAR6->VAR20[0].VAR21 == 1))
    {
        unsigned int VAR29 = 0;
        unsigned int VAR30 = 0;
        unsigned int VAR31;
        unsigned int VAR32 = 0;
        unsigned int VAR33 = 0;
        unsigned int VAR34 = 0;
        int VAR35 = VAR6->VAR36 && VAR6->VAR37;
        int VAR38 = (VAR6->VAR39 && VAR6->VAR39[0] > 0) || (VAR6->VAR40 && VAR6->VAR40[0] > 0);
        VAR9 -= VAR6->VAR41;
        if (!VAR6->VAR42)
            return;
        if (VAR6->VAR42 >= VAR43 / sizeof(*VAR4->VAR44) - VAR4->VAR45)
            return;
        if (FUN3(&VAR4->VAR44, VAR4->VAR45 + VAR6->VAR42, sizeof(*VAR4->VAR44)) < 0)
        {
            VAR4->VAR45 = 0;
            return;
        }
        VAR4->VAR46 = (VAR4->VAR45 + VAR6->VAR42) * sizeof(*VAR4->VAR44);
        for (VAR14 = 0; VAR14 < VAR6->VAR47; VAR14++)
        {
            VAR8 = VAR6->VAR48[VAR14];
            while (FUN4(VAR11, VAR6->VAR49) && VAR14 + 1 == VAR6->VAR50[VAR11 + 1].VAR51)
                VAR11++;
            for (VAR15 = 0; VAR15 < VAR6->VAR50[VAR11].VAR52; VAR15++)
            {
                int VAR53 = 0;
                if (VAR29 >= VAR6->VAR42)
                {
                    FUN5(VAR2->VAR54, VAR55, "");
                    return;
                }
                if (!VAR6->VAR56 && (!VAR6->VAR57 || VAR29 + VAR38 == VAR6->VAR39[VAR12]))
                {
                    VAR53 = 1;
                    if (VAR12 + 1 < VAR6->VAR57)
                        VAR12++;
                }
                else if (VAR6->VAR58 && VAR29 + VAR38 == VAR6->VAR40[VAR13])
                {
                    VAR53 = 1;
                    if (VAR13 + 1 < VAR6->VAR58)
                        VAR13++;
                }
                if (VAR35 && VAR33 < VAR6->VAR36)
                {
                    if (VAR6->VAR37[VAR33].VAR59 > 0)
                        VAR53 = 1;
                    if (++VAR34 == VAR6->VAR37[VAR33].VAR52)
                    {
                        VAR34 = 0;
                        VAR33++;
                    }
                }
                if (VAR53)
                    VAR32 = 0;
                VAR31 = VAR6->VAR31 > 0 ? VAR6->VAR31 : VAR6->VAR60[VAR29];
                if (VAR6->VAR61 == -1 || VAR6->VAR50[VAR11].VAR62 - 1 == VAR6->VAR61)
                {
                    VAR63 *VAR64 = &VAR4->VAR44[VAR4->VAR45++];
                    VAR64->VAR65 = VAR8;
                    VAR64->VAR66 = VAR9;
                    VAR64->VAR67 = VAR31;
                    VAR64->VAR68 = VAR32;
                    VAR64->VAR69 = VAR53 ? VAR70 : 0;
                    FUN5(VAR2->VAR54, VAR71, "" VAR72 "" VAR73 ""
                                                  "",
                           VAR4->VAR59, VAR29, VAR8, VAR9, VAR31, VAR32, VAR53);
                }
                VAR8 += VAR31;
                VAR16 += VAR31;
                VAR9 += VAR6->VAR20[VAR10].VAR21;
                VAR32++;
                VAR30++;
                VAR29++;
                if (VAR10 + 1 < VAR6->VAR28 && VAR30 == VAR6->VAR20[VAR10].VAR52)
                {
                    VAR30 = 0;
                    VAR10++;
                }
            }
        }
        if (VAR4->VAR21 > 0)
            VAR4->VAR25->VAR74 = VAR16 * 8 * VAR6->VAR18 / VAR4->VAR21;
    }
    else
    {
        unsigned VAR75, VAR76 = 0;
        for (VAR14 = 0; VAR14 < VAR6->VAR49; VAR14++)
        {
            unsigned VAR52, VAR47;
            VAR75 = VAR6->VAR50[VAR14].VAR52;
            if (VAR14 != VAR6->VAR49 - 1 && VAR6->VAR77 && VAR75 % VAR6->VAR77)
            {
                FUN5(VAR2->VAR54, VAR55, "");
                return;
            }
            if (VAR6->VAR77 >= 160)
            {
                VAR52 = VAR75 / VAR6->VAR77;
            }
            else if (VAR6->VAR77 > 1)
            {
                unsigned VAR78 = (1024 / VAR6->VAR77) * VAR6->VAR77;
                VAR52 = (VAR75 + VAR78 - 1) / VAR78;
            }
            else
            {
                VAR52 = (VAR75 + 1023) / 1024;
            }
            if (FUN4(VAR14, VAR6->VAR49))
                VAR47 = VAR6->VAR50[VAR14 + 1].VAR51 - VAR6->VAR50[VAR14].VAR51;
            else
                VAR47 = VAR6->VAR47 - (VAR6->VAR50[VAR14].VAR51 - 1);
            VAR76 += VAR47 * VAR52;
        }
        FUN5(VAR2->VAR54, VAR71, "", VAR76);
        if (VAR76 >= VAR43 / sizeof(*VAR4->VAR44) - VAR4->VAR45)
            return;
        if (FUN3(&VAR4->VAR44, VAR4->VAR45 + VAR76, sizeof(*VAR4->VAR44)) < 0)
        {
            VAR4->VAR45 = 0;
            return;
        }
        VAR4->VAR46 = (VAR4->VAR45 + VAR76) * sizeof(*VAR4->VAR44);
        for (VAR14 = 0; VAR14 < VAR6->VAR47; VAR14++)
        {
            VAR8 = VAR6->VAR48[VAR14];
            if (FUN4(VAR11, VAR6->VAR49) && VAR14 + 1 == VAR6->VAR50[VAR11 + 1].VAR51)
                VAR11++;
            VAR75 = VAR6->VAR50[VAR11].VAR52;
            while (VAR75 > 0)
            {
                VAR63 *VAR64;
                unsigned VAR67, VAR78;
                if (VAR6->VAR77 > 1 && !VAR6->VAR79)
                {
                    FUN6(VAR2->VAR54, "", VAR6->VAR77);
                    return;
                }
                if (VAR6->VAR77 >= 160)
                {
                    VAR78 = VAR6->VAR77;
                    VAR67 = VAR6->VAR79;
                }
                else
                {
                    if (VAR6->VAR77 > 1)
                    {
                        VAR78 = FUN7((1024 / VAR6->VAR77) * VAR6->VAR77, VAR75);
                        VAR67 = (VAR78 / VAR6->VAR77) * VAR6->VAR79;
                    }
                    else
                    {
                        VAR78 = FUN7(1024, VAR75);
                        VAR67 = VAR78 * VAR6->VAR31;
                    }
                }
                if (VAR4->VAR45 >= VAR76)
                {
                    FUN5(VAR2->VAR54, VAR55, "", VAR76);
                    return;
                }
                VAR64 = &VAR4->VAR44[VAR4->VAR45++];
                VAR64->VAR65 = VAR8;
                VAR64->VAR66 = VAR9;
                VAR64->VAR67 = VAR67;
                VAR64->VAR68 = 0;
                VAR64->VAR69 = VAR70;
                FUN5(VAR2->VAR54, VAR71, "" VAR72 "" VAR73 ""
                                              "",
                       VAR4->VAR59, VAR14, VAR8, VAR9, VAR67, VAR78);
                VAR8 += VAR67;
                VAR9 += VAR78;
                VAR75 -= VAR78;
            }
        }
    }
}