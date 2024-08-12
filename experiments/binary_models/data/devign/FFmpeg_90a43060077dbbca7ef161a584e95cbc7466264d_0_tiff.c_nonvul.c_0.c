static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12;
    const VAR3 *VAR13 = VAR6;
    int VAR14 = ((VAR2->VAR14 * VAR2->VAR15) + 7) >> 3;
    if (VAR7 <= 0)
        return VAR16;
    if (VAR2->VAR17 == VAR18 || VAR2->VAR17 == VAR19)
    {
        VAR3 *VAR20;
        unsigned long VAR21;
        int VAR22;
        VAR21 = VAR14 * VAR8;
        VAR20 = FUN2(VAR21);
        if (!VAR20)
            return FUN3(VAR23);
        VAR22 = FUN4(VAR20, &VAR21, VAR6, VAR7);
        if (VAR22 != VAR24)
        {
            FUN5(VAR2->VAR25, VAR26, "", VAR21, (unsigned long)VAR14 * VAR8, VAR22);
            FUN6(VAR20);
            return -1;
        }
        VAR6 = VAR20;
        for (VAR10 = 0; VAR10 < VAR8; VAR10++)
        {
            memcpy(VAR4, VAR6, VAR14);
            VAR4 += VAR5;
            VAR6 += VAR14;
        }
        FUN6(VAR20);
        return 0;
    }
    if (VAR2->VAR17 == VAR27)
    {
        if (FUN7(VAR2->VAR28, 8, VAR6, VAR7, VAR29) < 0)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
    }
    if (VAR2->VAR17 == VAR30 || VAR2->VAR17 == VAR31 || VAR2->VAR17 == VAR32)
    {
        int VAR33, VAR22 = 0;
        VAR3 *VAR34 = FUN2((unsigned)VAR7 + VAR35);
        if (!VAR34)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return FUN3(VAR23);
        }
        if (VAR2->VAR36 & 2)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            FUN6(VAR34);
            return -1;
        }
        if (!VAR2->VAR37)
        {
            memcpy(VAR34, VAR6, VAR7);
        }
        else
        {
            for (VAR33 = 0; VAR33 < VAR7; VAR33++)
                VAR34[VAR33] = VAR38[VAR6[VAR33]];
        }
        memset(VAR34 + VAR7, 0, VAR35);
        switch (VAR2->VAR17)
        {
        case VAR30:
        case VAR31:
        case VAR32:
            VAR22 = FUN8(VAR2->VAR25, VAR34, VAR7, VAR4, VAR8, VAR5, VAR2->VAR17, VAR2->VAR36);
            break;
        }
        FUN6(VAR34);
        return VAR22;
    }
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        if (VAR6 - VAR13 > VAR7)
        {
            FUN5(VAR2->VAR25, VAR26, "");
            return -1;
        }
        switch (VAR2->VAR17)
        {
        case VAR39:
            if (VAR13 + VAR7 - VAR6 < VAR14)
                return VAR16;
            if (!VAR2->VAR37)
            {
                memcpy(VAR4, VAR6, VAR14);
            }
            else
            {
                int VAR33;
                for (VAR33 = 0; VAR33 < VAR14; VAR33++)
                    VAR4[VAR33] = VAR38[VAR6[VAR33]];
            }
            VAR6 += VAR14;
            break;
        case VAR40:
            for (VAR11 = 0; VAR11 < VAR14;)
            {
                VAR12 = (VAR41)*VAR6++;
                if (VAR12 >= 0)
                {
                    VAR12++;
                    if (VAR11 + VAR12 > VAR14)
                    {
                        FUN5(VAR2->VAR25, VAR26, "");
                        return -1;
                    }
                    memcpy(VAR4 + VAR11, VAR6, VAR12);
                    VAR6 += VAR12;
                    VAR11 += VAR12;
                }
                else if (VAR12 != -128)
                {
                    VAR12 = (-VAR12) + 1;
                    if (VAR11 + VAR12 > VAR14)
                    {
                        FUN5(VAR2->VAR25, VAR26, "");
                        return -1;
                    }
                    VAR9 = *VAR6++;
                    memset(VAR4 + VAR11, VAR9, VAR12);
                    VAR11 += VAR12;
                }
            }
            break;
        case VAR27:
            VAR11 = FUN9(VAR2->VAR28, VAR4, VAR14);
            if (VAR11 < VAR14)
            {
                FUN5(VAR2->VAR25, VAR26, "", VAR11, VAR14);
                return -1;
            }
            break;
        }
        VAR4 += VAR5;
    }
    return 0;
}