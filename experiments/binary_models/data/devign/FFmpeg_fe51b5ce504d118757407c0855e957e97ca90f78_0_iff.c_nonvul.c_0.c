static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    unsigned VAR12 = VAR6->VAR13;
    const VAR10 *VAR14 = VAR11 + VAR12;
    unsigned VAR15, VAR16, VAR17;
    if (VAR2->FUN2(VAR2, &VAR8->VAR18) < 0)
    {
        FUN3(VAR2, VAR19, "");
        return -1;
    }
    if (VAR2->VAR20 == FUN4('', '', '', ''))
    {
        if (VAR2->VAR21 == VAR22)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR23; VAR15++)
            {
                VAR10 *VAR24 = &VAR8->VAR18.VAR3[0][VAR15 * VAR8->VAR18.VAR25[0]];
                memset(VAR24, 0, VAR2->VAR26);
                for (VAR16 = 0; VAR16 < VAR2->VAR27; VAR16++)
                {
                    for (VAR17 = 0; VAR17 < VAR8->VAR28 && VAR11 < VAR14;)
                    {
                        int8_t VAR29 = *VAR11++;
                        unsigned VAR30;
                        if (VAR29 >= 0)
                        {
                            VAR30 = VAR29 + 1;
                            memcpy(VAR8->VAR31 + VAR17, VAR11, FUN5(VAR30, VAR8->VAR28 - VAR17, VAR14 - VAR11));
                            VAR11 += VAR30;
                        }
                        else if (VAR29 > -128)
                        {
                            VAR30 = -VAR29 + 1;
                            memset(VAR8->VAR31 + VAR17, *VAR11++, FUN6(VAR30, VAR8->VAR28 - VAR17));
                        }
                        else
                        {
                            continue;
                        }
                        VAR17 += VAR30;
                    }
                    FUN7(VAR24, VAR8->VAR31, VAR8->VAR28, VAR2->VAR27, VAR16);
                }
            }
        }
        else
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR23; VAR15++)
            {
                VAR10 *VAR24 = &VAR8->VAR18.VAR3[0][VAR15 * VAR8->VAR18.VAR25[0]];
                memset(VAR24, 0, VAR2->VAR26 << 2);
                for (VAR16 = 0; VAR16 < VAR2->VAR27; VAR16++)
                {
                    for (VAR17 = 0; VAR17 < VAR8->VAR28 && VAR11 < VAR14;)
                    {
                        int8_t VAR29 = *VAR11++;
                        unsigned VAR30;
                        if (VAR29 >= 0)
                        {
                            VAR30 = VAR29 + 1;
                            memcpy(VAR8->VAR31 + VAR17, VAR11, FUN5(VAR30, VAR8->VAR28 - VAR17, VAR14 - VAR11));
                            VAR11 += VAR30;
                        }
                        else if (VAR29 > -128)
                        {
                            VAR30 = -VAR29 + 1;
                            memset(VAR8->VAR31 + VAR17, *VAR11++, FUN6(VAR30, VAR8->VAR28 - VAR17));
                        }
                        else
                        {
                            continue;
                        }
                        VAR17 += VAR30;
                    }
                    FUN8((VAR32 *)VAR24, VAR8->VAR31, VAR8->VAR28, VAR2->VAR27, VAR16);
                }
            }
        }
    }
    else
    {
        for (VAR15 = 0; VAR15 < VAR2->VAR23; VAR15++)
        {
            VAR10 *VAR24 = &VAR8->VAR18.VAR3[0][VAR15 * VAR8->VAR18.VAR25[0]];
            for (VAR17 = 0; VAR17 < VAR2->VAR26 && VAR11 < VAR14;)
            {
                int8_t VAR29 = *VAR11++;
                unsigned VAR30;
                if (VAR29 >= 0)
                {
                    VAR30 = VAR29 + 1;
                    memcpy(VAR24 + VAR17, VAR11, FUN5(VAR30, VAR14 - VAR11, VAR2->VAR26 - VAR17));
                    VAR11 += VAR30;
                }
                else if (VAR29 > -128)
                {
                    VAR30 = -VAR29 + 1;
                    memset(VAR24 + VAR17, *VAR11++, FUN6(VAR30, VAR2->VAR26 - VAR17));
                }
                else
                {
                    continue;
                }
                VAR17 += VAR30;
            }
        }
    }
    *VAR4 = sizeof(VAR33);
    *(VAR33 *)VAR3 = VAR8->VAR18;
    return VAR12;
}