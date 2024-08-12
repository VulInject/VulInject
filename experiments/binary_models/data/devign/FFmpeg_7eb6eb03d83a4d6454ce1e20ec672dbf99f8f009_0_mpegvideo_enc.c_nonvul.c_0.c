static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    int64_t VAR7;
    int VAR8, VAR9 = 0, VAR10;
    const int VAR11 = VAR2->VAR12 ? VAR2->VAR12 : (VAR2->VAR13 ? 0 : 1);
    int VAR14 = 1;
    if (VAR4)
    {
        VAR7 = VAR4->VAR7;
        VAR9 = VAR2->VAR15++;
        if (VAR7 != VAR16)
        {
            if (VAR2->VAR17 != VAR16)
            {
                int64_t VAR18 = VAR2->VAR17;
                if (VAR7 <= VAR18)
                {
                    FUN2(VAR2->VAR19, VAR20, "" VAR21 "" VAR21 "", VAR7, VAR18);
                    return FUN3(VAR22);
                }
                if (!VAR2->VAR13 && VAR9 == 1)
                    VAR2->VAR23 = VAR7 - VAR18;
            }
            VAR2->VAR17 = VAR7;
        }
        else
        {
            if (VAR2->VAR17 != VAR16)
            {
                VAR2->VAR17 = VAR7 = VAR2->VAR17 + 1;
                FUN2(VAR2->VAR19, VAR24, "" VAR21 "", VAR7);
            }
            else
            {
                VAR7 = VAR9;
            }
        }
    }
    if (VAR4)
    {
        if (!VAR4->VAR25[0])
            VAR14 = 0;
        if (VAR4->VAR26[0] != VAR2->VAR26)
            VAR14 = 0;
        if (VAR4->VAR26[1] != VAR2->VAR27)
            VAR14 = 0;
        if (VAR4->VAR26[2] != VAR2->VAR27)
            VAR14 = 0;
        FUN4(VAR2->VAR19, "", VAR4->VAR26[0], VAR4->VAR26[1], VAR2->VAR26, VAR2->VAR27);
        if (VAR14)
        {
            VAR8 = FUN5(VAR2, 1);
            if (VAR8 < 0)
                return VAR8;
            VAR6 = &VAR2->VAR28[VAR8];
            VAR6->VAR29 = 3;
            if ((VAR10 = FUN6(&VAR6->VAR30, VAR4)) < 0)
                return VAR10;
            if (FUN7(VAR2, VAR6, 1) < 0)
            {
                return -1;
            }
        }
        else
        {
            VAR8 = FUN5(VAR2, 0);
            if (VAR8 < 0)
                return VAR8;
            VAR6 = &VAR2->VAR28[VAR8];
            VAR6->VAR29 = 3;
            if (FUN7(VAR2, VAR6, 0) < 0)
            {
                return -1;
            }
            if (VAR6->VAR30.VAR31[0] + VAR32 == VAR4->VAR31[0] && VAR6->VAR30.VAR31[1] + VAR32 == VAR4->VAR31[1] && VAR6->VAR30.VAR31[2] + VAR32 == VAR4->VAR31[2])
            {
            }
            else
            {
                int VAR33, VAR34;
                FUN8(VAR2->VAR19->VAR35, &VAR33, &VAR34);
                for (VAR8 = 0; VAR8 < 3; VAR8++)
                {
                    int VAR36 = VAR4->VAR26[VAR8];
                    int VAR37 = VAR8 ? VAR2->VAR27 : VAR2->VAR26;
                    int VAR38 = VAR8 ? VAR33 : 0;
                    int VAR39 = VAR8 ? VAR34 : 0;
                    int VAR40 = VAR2->VAR41 >> VAR38;
                    int VAR42 = VAR2->VAR43 >> VAR39;
                    VAR44 *VAR45 = VAR4->VAR31[VAR8];
                    VAR44 *VAR46 = VAR6->VAR30.VAR31[VAR8];
                    if (VAR2->VAR47 == VAR48 && !(VAR2->VAR19->VAR49 & VAR50))
                    {
                        VAR42 = ((VAR2->VAR43 + 15) / 16 * 16) >> VAR39;
                    }
                    if (!VAR2->VAR19->VAR51)
                        VAR46 += VAR32;
                    if (VAR36 == VAR37)
                        memcpy(VAR46, VAR45, VAR36 * VAR42);
                    else
                    {
                        int VAR52 = VAR42;
                        VAR44 *VAR53 = VAR46;
                        while (VAR52--)
                        {
                            memcpy(VAR53, VAR45, VAR40);
                            VAR53 += VAR37;
                            VAR45 += VAR36;
                        }
                    }
                    if ((VAR2->VAR41 & 15) || (VAR2->VAR43 & 15))
                    {
                        VAR2->VAR54.FUN9(VAR46, VAR37, VAR40, VAR42, 16 >> VAR38, 16 >> VAR39, VAR55);
                    }
                }
            }
        }
        FUN10(VAR2, &VAR6->VAR30, VAR4);
        VAR6->VAR30.VAR9 = VAR9;
        VAR6->VAR30.VAR7 = VAR7;
    }
    for (VAR8 = 1; VAR8 < VAR56; VAR8++)
        VAR2->VAR57[VAR8 - 1] = VAR2->VAR57[VAR8];
    VAR2->VAR57[VAR11] = (VAR5 *)VAR6;
    return 0;
}