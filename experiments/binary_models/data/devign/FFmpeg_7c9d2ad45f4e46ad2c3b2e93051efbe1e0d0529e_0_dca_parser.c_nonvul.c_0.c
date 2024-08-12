static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6, int *VAR7, int *VAR8)
{
    VAR9 *VAR10 = &VAR2->VAR11.VAR12[0];
    GetBitContext VAR13;
    DCACoreFrameHeader VAR14;
    uint8_t VAR15[VAR16 + VAR17] = {0};
    int VAR18, VAR19;
    if (VAR5 < VAR16)
        return VAR20;
    if (FUN2(VAR4) == VAR21)
    {
        if ((VAR18 = FUN3(&VAR2->VAR11, VAR4, VAR5)) < 0)
            return VAR18;
        if (VAR10->VAR22 & VAR23)
        {
            if ((VAR18 = FUN4(&VAR13, VAR4 + VAR10->VAR24, VAR10->VAR25)) < 0)
                return VAR18;
            if (FUN5(&VAR13, 32) != VAR26)
                return VAR20;
            switch (FUN6(&VAR13, 8))
            {
            case VAR27:
                VAR2->VAR28 = FUN6(&VAR13, 8);
            case VAR29:
                break;
            default:
                return VAR20;
            }
            if (VAR2->VAR28 >= FUN7(VAR30))
                return VAR20;
            *VAR7 = VAR30[VAR2->VAR28];
            *VAR6 = 1024 << VAR31[VAR2->VAR28];
            *VAR8 = VAR32;
            return 0;
        }
        if (VAR10->VAR22 & VAR33)
        {
            int VAR34;
            if ((VAR18 = FUN4(&VAR13, VAR4 + VAR10->VAR35, VAR10->VAR36)) < 0)
                return VAR18;
            if (FUN5(&VAR13, 32) != VAR37)
                return VAR20;
            if (FUN6(&VAR13, 4))
                return VAR20;
            FUN8(&VAR13, 8);
            FUN9(&VAR13, FUN6(&VAR13, 5) + 1);
            FUN8(&VAR13, 4);
            VAR34 = FUN6(&VAR13, 4) + FUN6(&VAR13, 4);
            if (VAR34 > 24)
                return VAR20;
            *VAR7 = VAR10->VAR38;
            *VAR6 = (1 + (*VAR7 > 96000)) << VAR34;
            *VAR8 = VAR39;
            return 0;
        }
        return VAR20;
    }
    if ((VAR18 = FUN10(VAR4, VAR16, VAR15, VAR16)) < 0)
        return VAR18;
    if (FUN11(&VAR14, VAR15, VAR18) < 0)
        return VAR20;
    *VAR6 = VAR14.VAR40 * VAR41;
    *VAR7 = VAR42[VAR14.VAR28];
    if (*VAR8 != VAR43)
        return 0;
    *VAR8 = VAR44;
    if (VAR14.VAR45)
    {
        switch (VAR14.VAR46)
        {
        case VAR47:
        case VAR48:
            *VAR8 = VAR49;
            break;
        case VAR50:
            *VAR8 = VAR51;
            break;
        }
    }
    VAR19 = FUN12(VAR14.VAR19, 4);
    if (VAR5 - 4 < VAR19)
        return 0;
    VAR4 += VAR19;
    VAR5 -= VAR19;
    if (FUN2(VAR4) != VAR21)
        return 0;
    if (FUN3(&VAR2->VAR11, VAR4, VAR5) < 0)
        return 0;
    if (VAR10->VAR22 & VAR33)
        *VAR8 = VAR39;
    else if (VAR10->VAR22 & (VAR52 | VAR53 | VAR54))
        *VAR8 = VAR55;
    return 0;
}