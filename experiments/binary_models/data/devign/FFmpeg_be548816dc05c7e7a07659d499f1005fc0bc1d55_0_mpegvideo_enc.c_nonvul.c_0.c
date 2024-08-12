static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5 = NULL;
    int64_t VAR6;
    int VAR7;
    const int VAR8 = VAR2->VAR9;
    int VAR10 = 1;
    if (VAR4)
    {
        VAR6 = VAR4->VAR6;
        VAR4->VAR11 = VAR2->VAR12++;
        if (VAR6 != VAR13)
        {
            if (VAR2->VAR14 != VAR13)
            {
                int64_t VAR15 = VAR6;
                int64_t VAR16 = VAR2->VAR14;
                if (VAR15 <= VAR16)
                {
                    FUN2(VAR2->VAR17, VAR18, "" VAR19 "" VAR19 "", VAR6, VAR2->VAR14);
                    return -1;
                }
            }
            VAR2->VAR14 = VAR6;
        }
        else
        {
            if (VAR2->VAR14 != VAR13)
            {
                VAR2->VAR14 = VAR6 = VAR2->VAR14 + 1;
                FUN2(VAR2->VAR17, VAR20, "" VAR19 "", VAR6);
            }
            else
            {
                VAR6 = VAR4->VAR11;
            }
        }
    }
    if (VAR4)
    {
        if (VAR8 && !(VAR2->VAR21 & VAR22))
            VAR10 = 0;
        if (VAR4->VAR23[0] != VAR2->VAR23)
            VAR10 = 0;
        if (VAR4->VAR23[1] != VAR2->VAR24)
            VAR10 = 0;
        if (VAR4->VAR23[2] != VAR2->VAR24)
            VAR10 = 0;
        if (VAR10)
        {
            VAR7 = FUN3(VAR2, 1);
            VAR5 = (VAR3 *)&VAR2->VAR25[VAR7];
            VAR5->VAR26 = 3;
            for (VAR7 = 0; VAR7 < 4; VAR7++)
            {
                VAR5->VAR27[VAR7] = VAR4->VAR27[VAR7];
                VAR5->VAR23[VAR7] = VAR4->VAR23[VAR7];
            }
            if (FUN4(VAR2, (VAR28 *)VAR5, 1) < 0)
            {
                return -1;
            }
        }
        else
        {
            VAR7 = FUN3(VAR2, 0);
            VAR5 = (VAR3 *)&VAR2->VAR25[VAR7];
            VAR5->VAR26 = 3;
            if (FUN4(VAR2, (VAR28 *)VAR5, 0) < 0)
            {
                return -1;
            }
            if (VAR5->VAR27[0] + VAR29 == VAR4->VAR27[0] && VAR5->VAR27[1] + VAR29 == VAR4->VAR27[1] && VAR5->VAR27[2] + VAR29 == VAR4->VAR27[2])
            {
            }
            else
            {
                int VAR30, VAR31;
                FUN5(VAR2->VAR17->VAR32, &VAR30, &VAR31);
                for (VAR7 = 0; VAR7 < 3; VAR7++)
                {
                    int VAR33 = VAR4->VAR23[VAR7];
                    int VAR34 = VAR7 ? VAR2->VAR24 : VAR2->VAR23;
                    int VAR35 = VAR7 ? VAR30 : 0;
                    int VAR36 = VAR7 ? VAR31 : 0;
                    int VAR37 = VAR2->VAR38 >> VAR35;
                    int VAR39 = VAR2->VAR40 >> VAR36;
                    VAR41 *VAR42 = VAR4->VAR27[VAR7];
                    VAR41 *VAR43 = VAR5->VAR27[VAR7];
                    if (!VAR2->VAR17->VAR44)
                        VAR43 += VAR29;
                    if (VAR33 == VAR34)
                        memcpy(VAR43, VAR42, VAR33 * VAR39);
                    else
                    {
                        while (VAR39--)
                        {
                            memcpy(VAR43, VAR42, VAR37);
                            VAR43 += VAR34;
                            VAR42 += VAR33;
                        }
                    }
                }
            }
        }
        FUN6(VAR2, VAR5, VAR4);
        VAR5->VAR6 = VAR6;
    }
    for (VAR7 = 1; VAR7 < VAR45; VAR7++)
        VAR2->VAR46[VAR7 - 1] = VAR2->VAR46[VAR7];
    VAR2->VAR46[VAR8] = (VAR28 *)VAR5;
    return 0;
}