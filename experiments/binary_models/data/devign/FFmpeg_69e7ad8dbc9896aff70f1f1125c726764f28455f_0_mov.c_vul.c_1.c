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
        if (VAR6->VAR19 && VAR6->VAR20 && VAR6->VAR19[0].VAR21 / VAR6->VAR20[0].VAR21 > 16)
        {
            VAR6->VAR22 = 1;
            VAR4->VAR23->VAR24 = 1;
        }
    }
    if (!(VAR4->VAR23->VAR25 == VAR26 && VAR6->VAR27 == 1 && VAR6->VAR20[0].VAR21 == 1))
    {
        unsigned int VAR28 = 0;
        unsigned int VAR29 = 0;
        unsigned int VAR30;
        unsigned int VAR31 = 0;
        int VAR32 = VAR6->VAR33 && VAR6->VAR33[0] == 1;
        VAR9 -= VAR6->VAR34;
        if (VAR6->VAR35 >= VAR36 / sizeof(*VAR4->VAR37))
            return;
        VAR4->VAR37 = FUN3(VAR6->VAR35 * sizeof(*VAR4->VAR37));
        if (!VAR4->VAR37)
            return;
        VAR4->VAR38 = VAR6->VAR35 * sizeof(*VAR4->VAR37);
        for (VAR14 = 0; VAR14 < VAR6->VAR39; VAR14++)
        {
            VAR8 = VAR6->VAR40[VAR14];
            while (VAR11 + 1 < VAR6->VAR41 && VAR14 + 1 == VAR6->VAR42[VAR11 + 1].VAR43)
                VAR11++;
            for (VAR15 = 0; VAR15 < VAR6->VAR42[VAR11].VAR44; VAR15++)
            {
                int VAR45 = 0;
                if (VAR28 >= VAR6->VAR35)
                {
                    FUN4(VAR2->VAR46, VAR47, "");
                    return;
                }
                if (!VAR6->VAR48 || VAR28 + VAR32 == VAR6->VAR33[VAR12])
                {
                    VAR45 = 1;
                    if (VAR12 + 1 < VAR6->VAR48)
                        VAR12++;
                }
                else if (VAR6->VAR49 && VAR28 + VAR32 == VAR6->VAR50[VAR13])
                {
                    VAR45 = 1;
                    if (VAR13 + 1 < VAR6->VAR49)
                        VAR13++;
                }
                if (VAR45)
                    VAR31 = 0;
                VAR30 = VAR6->VAR30 > 0 ? VAR6->VAR30 : VAR6->VAR51[VAR28];
                if (VAR6->VAR52 == -1 || VAR6->VAR42[VAR11].VAR53 - 1 == VAR6->VAR52)
                {
                    VAR54 *VAR55 = &VAR4->VAR37[VAR4->VAR56++];
                    VAR55->VAR57 = VAR8;
                    VAR55->VAR58 = VAR9;
                    VAR55->VAR59 = VAR30;
                    VAR55->VAR60 = VAR31;
                    VAR55->VAR61 = VAR45 ? VAR62 : 0;
                    FUN5(VAR2->VAR46, "" VAR63 "" VAR64 ""
                                     "",
                            VAR4->VAR65, VAR28, VAR8, VAR9, VAR30, VAR31, VAR45);
                }
                VAR8 += VAR30;
                VAR16 += VAR30;
                VAR9 += VAR6->VAR20[VAR10].VAR21;
                VAR31++;
                VAR29++;
                VAR28++;
                if (VAR10 + 1 < VAR6->VAR27 && VAR29 == VAR6->VAR20[VAR10].VAR44)
                {
                    VAR29 = 0;
                    VAR10++;
                }
            }
        }
        if (VAR4->VAR21 > 0)
            VAR4->VAR23->VAR66 = VAR16 * 8 * VAR6->VAR18 / VAR4->VAR21;
    }
    else
    {
        unsigned VAR67, VAR68 = 0;
        for (VAR14 = 0; VAR14 < VAR6->VAR41; VAR14++)
        {
            unsigned VAR44, VAR39;
            VAR67 = VAR6->VAR42[VAR14].VAR44;
            if (VAR6->VAR69 && VAR67 % VAR6->VAR69)
            {
                FUN4(VAR2->VAR46, VAR47, "");
                return;
            }
            if (VAR6->VAR69 >= 160)
            {
                VAR44 = VAR67 / VAR6->VAR69;
            }
            else if (VAR6->VAR69 > 1)
            {
                unsigned VAR70 = (1024 / VAR6->VAR69) * VAR6->VAR69;
                VAR44 = (VAR67 + VAR70 - 1) / VAR70;
            }
            else
            {
                VAR44 = (VAR67 + 1023) / 1024;
            }
            if (VAR14 < VAR6->VAR41 - 1)
                VAR39 = VAR6->VAR42[VAR14 + 1].VAR43 - VAR6->VAR42[VAR14].VAR43;
            else
                VAR39 = VAR6->VAR39 - (VAR6->VAR42[VAR14].VAR43 - 1);
            VAR68 += VAR39 * VAR44;
        }
        FUN5(VAR2->VAR46, "", VAR68);
        if (VAR68 >= VAR36 / sizeof(*VAR4->VAR37))
            return;
        VAR4->VAR37 = FUN3(VAR68 * sizeof(*VAR4->VAR37));
        if (!VAR4->VAR37)
            return;
        VAR4->VAR38 = VAR68 * sizeof(*VAR4->VAR37);
        for (VAR14 = 0; VAR14 < VAR6->VAR39; VAR14++)
        {
            VAR8 = VAR6->VAR40[VAR14];
            if (VAR11 + 1 < VAR6->VAR41 && VAR14 + 1 == VAR6->VAR42[VAR11 + 1].VAR43)
                VAR11++;
            VAR67 = VAR6->VAR42[VAR11].VAR44;
            while (VAR67 > 0)
            {
                VAR54 *VAR55;
                unsigned VAR59, VAR70;
                if (VAR6->VAR69 >= 160)
                {
                    VAR70 = VAR6->VAR69;
                    VAR59 = VAR6->VAR71;
                }
                else
                {
                    if (VAR6->VAR69 > 1)
                    {
                        VAR70 = FUN6((1024 / VAR6->VAR69) * VAR6->VAR69, VAR67);
                        VAR59 = (VAR70 / VAR6->VAR69) * VAR6->VAR71;
                    }
                    else
                    {
                        VAR70 = FUN6(1024, VAR67);
                        VAR59 = VAR70 * VAR6->VAR30;
                    }
                }
                if (VAR4->VAR56 >= VAR68)
                {
                    FUN4(VAR2->VAR46, VAR47, "", VAR68);
                    return;
                }
                VAR55 = &VAR4->VAR37[VAR4->VAR56++];
                VAR55->VAR57 = VAR8;
                VAR55->VAR58 = VAR9;
                VAR55->VAR59 = VAR59;
                VAR55->VAR60 = 0;
                VAR55->VAR61 = VAR62;
                FUN5(VAR2->VAR46, "" VAR63 "" VAR64 ""
                                 "",
                        VAR4->VAR65, VAR14, VAR8, VAR9, VAR59, VAR70);
                VAR8 += VAR59;
                VAR9 += VAR70;
                VAR67 -= VAR70;
            }
        }
    }
}