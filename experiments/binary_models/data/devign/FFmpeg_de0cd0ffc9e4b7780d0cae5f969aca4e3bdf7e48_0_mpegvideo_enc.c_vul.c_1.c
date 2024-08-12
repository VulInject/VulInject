static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int64_t VAR7;
    int VAR8, VAR9 = 0, VAR10;
    int VAR11 = VAR2->VAR12 ? VAR2->VAR12 : (VAR2->VAR13 ? 0 : 1);
    int VAR14 = 1;
    int VAR15 = 1;
    if (VAR4)
    {
        VAR7 = VAR4->VAR7;
        VAR9 = VAR2->VAR16++;
        if (VAR7 != VAR17)
        {
            if (VAR2->VAR18 != VAR17)
            {
                int64_t VAR19 = VAR2->VAR18;
                if (VAR7 <= VAR19)
                {
                    FUN2(VAR2->VAR20, VAR21, "" VAR22 "" VAR22 "", VAR7, VAR19);
                    return FUN3(VAR23);
                }
                if (!VAR2->VAR13 && VAR9 == 1)
                    VAR2->VAR24 = VAR7 - VAR19;
            }
            VAR2->VAR18 = VAR7;
        }
        else
        {
            if (VAR2->VAR18 != VAR17)
            {
                VAR2->VAR18 = VAR7 = VAR2->VAR18 + 1;
                FUN2(VAR2->VAR20, VAR25, "" VAR22 "", VAR7);
            }
            else
            {
                VAR7 = VAR9;
            }
        }
        if (!VAR4->VAR26[0] || VAR4->VAR27[0] != VAR2->VAR27 || VAR4->VAR27[1] != VAR2->VAR28 || VAR4->VAR27[2] != VAR2->VAR28)
            VAR15 = 0;
        if ((VAR2->VAR29 & 15) || (VAR2->VAR30 & 15))
            VAR15 = 0;
        if (((VAR31)(VAR4->VAR32[0])) & (VAR33 - 1))
            VAR15 = 0;
        if (VAR2->VAR27 & (VAR33 - 1))
            VAR15 = 0;
        FUN4(VAR2->VAR20, "" VAR34 "" VAR34 "", VAR4->VAR27[0], VAR4->VAR27[1], VAR2->VAR27, VAR2->VAR28);
        VAR8 = FUN5(VAR2->VAR20, VAR2->VAR35, VAR15);
        if (VAR8 < 0)
            return VAR8;
        VAR6 = &VAR2->VAR35[VAR8];
        VAR6->VAR36 = 3;
        if (VAR15)
        {
            if ((VAR10 = FUN6(VAR6->VAR37, VAR4)) < 0)
                return VAR10;
        }
        VAR10 = FUN7(VAR2, VAR6, VAR15);
        if (VAR10 < 0)
            return VAR10;
        if (!VAR15)
        {
            if (VAR6->VAR37->VAR32[0] + VAR38 == VAR4->VAR32[0] && VAR6->VAR37->VAR32[1] + VAR38 == VAR4->VAR32[1] && VAR6->VAR37->VAR32[2] + VAR38 == VAR4->VAR32[2])
            {
            }
            else
            {
                int VAR39, VAR40;
                FUN8(VAR2->VAR20->VAR41, &VAR39, &VAR40);
                for (VAR8 = 0; VAR8 < 3; VAR8++)
                {
                    int VAR42 = VAR4->VAR27[VAR8];
                    int VAR43 = VAR8 ? VAR2->VAR28 : VAR2->VAR27;
                    int VAR44 = VAR8 ? VAR39 : 0;
                    int VAR45 = VAR8 ? VAR40 : 0;
                    int VAR46 = VAR2->VAR29 >> VAR44;
                    int VAR47 = VAR2->VAR30 >> VAR45;
                    VAR48 *VAR49 = VAR4->VAR32[VAR8];
                    VAR48 *VAR50 = VAR6->VAR37->VAR32[VAR8];
                    int VAR51 = 16;
                    if (VAR2->VAR52 == VAR53 && !VAR2->VAR54 && FUN9(VAR2->VAR30, 32) - VAR2->VAR30 > 16)
                        VAR51 = 32;
                    if (!VAR2->VAR20->VAR55)
                        VAR50 += VAR38;
                    if (VAR42 == VAR43)
                        memcpy(VAR50, VAR49, VAR42 * VAR47);
                    else
                    {
                        int VAR56 = VAR47;
                        VAR48 *VAR57 = VAR50;
                        while (VAR56--)
                        {
                            memcpy(VAR57, VAR49, VAR46);
                            VAR57 += VAR43;
                            VAR49 += VAR42;
                        }
                    }
                    if ((VAR2->VAR29 & 15) || (VAR2->VAR30 & (VAR51 - 1)))
                    {
                        VAR2->VAR58.FUN10(VAR50, VAR43, VAR46, VAR47, 16 >> VAR44, VAR51 >> VAR45, VAR59);
                    }
                }
            }
        }
        VAR10 = FUN11(VAR6->VAR37, VAR4);
        if (VAR10 < 0)
            return VAR10;
        VAR6->VAR37->VAR9 = VAR9;
        VAR6->VAR37->VAR7 = VAR7;
    }
    else
    {
        for (VAR14 = 0; VAR14 < VAR11 + 1; VAR14++)
            if (VAR2->VAR60[VAR14])
                break;
        if (VAR14 <= 1)
            VAR14 = 1;
        else
            VAR11 = VAR11 - VAR14 + 1;
    }
    for (VAR8 = VAR14; VAR8 < VAR61; VAR8++)
        VAR2->VAR60[VAR8 - VAR14] = VAR2->VAR60[VAR8];
    VAR2->VAR60[VAR11] = (VAR5 *)VAR6;
    return 0;