static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    const VAR3 *VAR14 = VAR6;
    int VAR15 = ((VAR2->VAR15 * VAR2->VAR16) + 7) >> 3;
    if (VAR7 <= 0)
        return VAR17;
    if (VAR2->VAR18 == VAR19 || VAR2->VAR18 == VAR20)
    {
        return FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR15, VAR8);
        FUN3(VAR2->VAR21, VAR22, ""
                                       "");
        return FUN4(VAR23);
    }
    if (VAR2->VAR18 == VAR24)
    {
        if ((VAR13 = FUN5(VAR2->VAR25, 8, VAR6, VAR7, VAR26)) < 0)
        {
            FUN3(VAR2->VAR21, VAR22, "");
            return VAR13;
        }
    }
    if (VAR2->VAR18 == VAR27 || VAR2->VAR18 == VAR28 || VAR2->VAR18 == VAR29)
    {
        return FUN6(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
    }
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        if (VAR6 - VAR14 > VAR7)
        {
            FUN3(VAR2->VAR21, VAR22, "");
            return VAR17;
        }
        switch (VAR2->VAR18)
        {
        case VAR30:
            if (VAR14 + VAR7 - VAR6 < VAR15)
                return VAR17;
            if (!VAR2->VAR31)
            {
                memcpy(VAR4, VAR6, VAR15);
            }
            else
            {
                int VAR32;
                for (VAR32 = 0; VAR32 < VAR15; VAR32++)
                    VAR4[VAR32] = VAR33[VAR6[VAR32]];
            }
            VAR6 += VAR15;
            break;
        case VAR34:
            for (VAR11 = 0; VAR11 < VAR15;)
            {
                VAR12 = (VAR35)*VAR6++;
                if (VAR12 >= 0)
                {
                    VAR12++;
                    if (VAR11 + VAR12 > VAR15)
                    {
                        FUN3(VAR2->VAR21, VAR22, "");
                        return VAR17;
                    }
                    memcpy(VAR4 + VAR11, VAR6, VAR12);
                    VAR6 += VAR12;
                    VAR11 += VAR12;
                }
                else if (VAR12 != -128)
                {
                    VAR12 = (-VAR12) + 1;
                    if (VAR11 + VAR12 > VAR15)
                    {
                        FUN3(VAR2->VAR21, VAR22, "");
                        return VAR17;
                    }
                    VAR9 = *VAR6++;
                    memset(VAR4 + VAR11, VAR9, VAR12);
                    VAR11 += VAR12;
                }
            }
            break;
        case VAR24:
            VAR11 = FUN7(VAR2->VAR25, VAR4, VAR15);
            if (VAR11 < VAR15)
            {
                FUN3(VAR2->VAR21, VAR22, "", VAR11, VAR15);
                return VAR17;
            }
            break;
        }
        VAR4 += VAR5;
    }
    return 0;
}