static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    const VAR7 *VAR16, *VAR17;
    const VAR7 *VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    VAR17 = VAR8;
    VAR16 = VAR8 + VAR9;
    VAR15->VAR22 = 0;
    VAR12->VAR23 = 0;
    while (VAR17 < VAR16)
    {
        VAR20 = FUN2(VAR15, &VAR17, VAR16, &VAR18, &VAR19);
        if (VAR20 < 0)
            goto VAR24;
        {
            FUN3(&VAR15->VAR25, VAR18, VAR19 * 8);
            if (VAR20 >= VAR26 && VAR20 <= VAR27)
            {
                FUN4(VAR12, VAR18, VAR19);
            }
            switch (VAR20)
            {
            case VAR28:
                if (VAR15->VAR22)
                    goto VAR24;
                break;
            case VAR29:
                goto VAR24;
            case VAR30:
                VAR21 = FUN5(VAR15);
                if (VAR21 < 0)
                {
                    FUN6(VAR2, VAR31, "");
                    return VAR21;
                }
                break;
            case VAR32:
                VAR21 = FUN7(VAR15);
                if (VAR21 < 0)
                {
                    FUN6(VAR2, VAR31, "");
                    return VAR21;
                }
                break;
            case VAR33:
                VAR21 = FUN8(VAR12, VAR18, VAR19);
                if (VAR21 < 0)
                    return VAR21;
                break;
            case VAR34:
                VAR12->VAR35 = 0;
                VAR21 = FUN9(VAR15);
                if (VAR21 < 0)
                {
                    FUN6(VAR2, VAR31, "");
                    return VAR21;
                }
                if (VAR15->VAR36)
                {
                    FUN6(VAR2, VAR31, "");
                    return FUN10(VAR37);
                }
                VAR12->VAR35 = 1;
                break;
            case VAR38:
                if (!VAR12->VAR35)
                {
                    FUN6(VAR2, VAR39, "");
                    break;
                }
                if (!VAR15->VAR22)
                {
                    if (VAR15->VAR40)
                    {
                        FUN6(VAR2, VAR39, "");
                        break;
                    }
                    if (!VAR12->VAR23)
                    {
                        FUN6(VAR2, VAR39, "");
                        break;
                    }
                    FUN11(VAR15->VAR41);
                    if ((VAR21 = FUN12(VAR2, VAR15->VAR41, VAR42)) < 0)
                        return VAR21;
                    VAR15->VAR41->VAR43 = VAR44;
                    VAR15->VAR41->VAR45 = 0;
                    VAR15->VAR22 = 1;
                }
                else
                {
                    VAR15->VAR41->VAR43 = VAR46;
                    VAR15->VAR41->VAR45 = 1;
                }
                if (VAR12->VAR23)
                {
                    VAR47 *VAR48 = VAR12->VAR49[VAR12->VAR50 ^ 1];
                    if (FUN13(VAR12, VAR15, VAR48) < 0)
                        break;
                    if (!VAR48->VAR3[0] && (VAR21 = FUN12(VAR2, VAR48, VAR42)) < 0)
                        return VAR21;
                    VAR21 = FUN14(VAR15, VAR12->VAR51, VAR48);
                    if (VAR21 < 0 && (VAR2->VAR52 & VAR53))
                        return VAR21;
                }
                else
                {
                    VAR21 = FUN14(VAR15, NULL, NULL);
                    if (VAR21 < 0 && (VAR2->VAR52 & VAR53))
                        return VAR21;
                }
                break;
            }
            VAR17 += (FUN15(&VAR15->VAR25) + 7) >> 3;
        }
    }
VAR24:
    if (VAR15->VAR22)
    {
        int VAR21 = FUN16(VAR3, VAR15->VAR41);
        if (VAR21 < 0)
            return VAR21;
        *VAR4 = 1;
        VAR12->VAR50 ^= 1;
        VAR15->VAR41 = VAR12->VAR49[VAR12->VAR50];
        if (!VAR12->VAR54)
        {
            if (!VAR12->VAR23)
                VAR12->VAR54 = 1;
            else
                *VAR4 = 0;
        }
    }
    return VAR17 - VAR8;
}