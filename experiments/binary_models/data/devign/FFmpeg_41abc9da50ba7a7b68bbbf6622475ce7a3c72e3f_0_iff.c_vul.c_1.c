static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR12 >= 2 ? VAR6->VAR3 + FUN2(VAR6->VAR3) : NULL;
    const int VAR13 = VAR6->VAR12 >= 2 ? VAR6->VAR12 - FUN2(VAR6->VAR3) : 0;
    const VAR10 *VAR14 = VAR11 + VAR13;
    int VAR15, VAR16, VAR17;
    if ((VAR17 = FUN3(VAR2, VAR6)) < 0)
        return VAR17;
    if (VAR8->VAR18)
    {
        if ((VAR17 = VAR2->FUN4(VAR2, &VAR8->VAR19)) < 0)
        {
            FUN5(VAR2, VAR20, "");
            return VAR17;
        }
    }
    else if ((VAR17 = VAR2->FUN6(VAR2, &VAR8->VAR19)) < 0)
    {
        FUN5(VAR2, VAR20, "");
        return VAR17;
    }
    else if (VAR2->VAR21 <= 8 && VAR2->VAR22 != VAR23)
    {
        if ((VAR17 = FUN7(VAR2, (VAR24 *)VAR8->VAR19.VAR3[1])) < 0)
            return VAR17;
    }
    VAR8->VAR18 = 1;
    if (VAR2->VAR25 == FUN8('', '', '', ''))
    {
        if (VAR2->VAR22 == VAR26 || VAR2->VAR22 == VAR23)
        {
            memset(VAR8->VAR19.VAR3[0], 0, VAR2->VAR27 * VAR8->VAR19.VAR28[0]);
            for (VAR16 = 0; VAR16 < VAR8->VAR29; VAR16++)
            {
                for (VAR15 = 0; VAR15 < VAR2->VAR27 && VAR11 < VAR14; VAR15++)
                {
                    VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                    FUN9(VAR30, VAR11, FUN10(VAR8->VAR31, VAR14 - VAR11), VAR16);
                    VAR11 += VAR8->VAR31;
                }
            }
        }
        else if (VAR8->VAR32)
        {
            memset(VAR8->VAR19.VAR3[0], 0, VAR2->VAR27 * VAR8->VAR19.VAR28[0]);
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memset(VAR8->VAR33, 0, VAR8->VAR31 * 8);
                for (VAR16 = 0; VAR16 < VAR8->VAR29; VAR16++)
                {
                    const VAR10 *VAR34 = VAR11 + (VAR16 * VAR2->VAR27 + VAR15) * VAR8->VAR31;
                    if (VAR34 >= VAR14)
                        break;
                    FUN9(VAR8->VAR33, VAR34, FUN10(VAR8->VAR31, VAR14 - VAR34), VAR16);
                }
                FUN11((VAR24 *)VAR30, VAR8->VAR33, VAR8->VAR35, VAR8->VAR31);
            }
        }
    }
    else if (VAR2->VAR25 == FUN8('', '', '', ''))
    {
        int VAR36 = VAR2->VAR37 * (FUN12(&VAR38[VAR2->VAR22]) >> 3);
        int VAR39;
        for (VAR15 = 0; VAR15 < VAR2->VAR27 && VAR11 < VAR14; VAR15++)
        {
            VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
            memcpy(VAR30, VAR11, FUN10(VAR36, VAR14 - VAR11));
            VAR11 += VAR36;
            if (VAR2->VAR22 == VAR40)
            {
                for (VAR39 = 0; VAR39 < VAR2->VAR37; VAR39++)
                    VAR30[4 * VAR39 + 3] = VAR30[4 * VAR39 + 3] & 0xF0 | (VAR30[4 * VAR39 + 3] >> 4);
            }
        }
    }
    else if (VAR2->VAR25 == FUN8('', '', '', ''))
    {
        if (VAR2->VAR22 == VAR26 || VAR2->VAR22 == VAR23)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memset(VAR30, 0, VAR2->VAR37);
                for (VAR16 = 0; VAR16 < VAR8->VAR29 && VAR11 < VAR14; VAR16++)
                {
                    FUN9(VAR30, VAR11, FUN10(VAR8->VAR31, VAR14 - VAR11), VAR16);
                    VAR11 += VAR8->VAR31;
                }
            }
        }
        else if (VAR8->VAR32)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memset(VAR8->VAR33, 0, VAR8->VAR31 * 8);
                for (VAR16 = 0; VAR16 < VAR8->VAR29 && VAR11 < VAR14; VAR16++)
                {
                    FUN9(VAR8->VAR33, VAR11, FUN10(VAR8->VAR31, VAR14 - VAR11), VAR16);
                    VAR11 += VAR8->VAR31;
                }
                FUN11((VAR24 *)VAR30, VAR8->VAR33, VAR8->VAR35, VAR8->VAR31);
            }
        }
        else
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memset(VAR30, 0, VAR2->VAR37 << 2);
                for (VAR16 = 0; VAR16 < VAR8->VAR29 && VAR11 < VAR14; VAR16++)
                {
                    FUN13((VAR24 *)VAR30, VAR11, FUN10(VAR8->VAR31, VAR14 - VAR11), VAR16);
                    VAR11 += VAR8->VAR31;
                }
            }
        }
    }
    else if (VAR2->VAR25 == FUN8('', '', '', ''))
    {
        if (VAR2->VAR22 == VAR26 || VAR2->VAR22 == VAR23)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memcpy(VAR30, VAR11, FUN10(VAR2->VAR37, VAR14 - VAR11));
                VAR11 += VAR2->VAR37 + (VAR2->VAR37 % 2);
            }
        }
        else if (VAR8->VAR32)
        {
            for (VAR15 = 0; VAR15 < VAR2->VAR27; VAR15++)
            {
                VAR10 *VAR30 = &VAR8->VAR19.VAR3[0][VAR15 * VAR8->VAR19.VAR28[0]];
                memcpy(VAR8->VAR33, VAR11, FUN10(VAR2->VAR37, VAR14 - VAR11));
                VAR11 += VAR2->VAR37 + (VAR2->VAR37 & 1);
                FUN11((VAR24 *)VAR30, VAR8->VAR33, VAR8->VAR35, VAR8->VAR31);
            }
        }
        else
        {
            FUN14(VAR2, "");
            return VAR41;
        }
    }
    *VAR4 = sizeof(VAR42);
    *(VAR42 *)VAR3 = VAR8->VAR19;
    return VAR13;
}