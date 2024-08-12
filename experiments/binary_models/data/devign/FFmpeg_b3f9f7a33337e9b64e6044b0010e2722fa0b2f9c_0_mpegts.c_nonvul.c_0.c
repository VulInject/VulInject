static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    const VAR3 *VAR16, *VAR17;
    int64_t VAR18;
    VAR11 = FUN2(VAR4 + 1) & 0x1fff;
    if (VAR11 && FUN3(VAR2, VAR11))
        return 0;
    VAR15 = VAR4[1] & 0x40;
    VAR9 = VAR2->VAR19[VAR11];
    if (VAR2->VAR20 && VAR9 == NULL && VAR15)
    {
        FUN4(VAR2, VAR11, -1);
        VAR9 = VAR2->VAR19[VAR11];
    }
    if (!VAR9)
        return 0;
    VAR12 = (VAR4[3] & 0xf);
    VAR13 = (VAR9->VAR21 < 0) || ((((VAR9->VAR21 + 1) & 0x0f) == VAR12));
    VAR9->VAR21 = VAR12;
    VAR14 = (VAR4[3] >> 4) & 3;
    VAR16 = VAR4 + 4;
    if (VAR14 == 0)
        return 0;
    if (VAR14 == 2)
        return 0;
    if (VAR14 == 3)
    {
        VAR16 += VAR16[0] + 1;
    }
    VAR17 = VAR4 + VAR22;
    if (VAR16 >= VAR17)
        return 0;
    VAR18 = FUN5(VAR2->VAR7->VAR23);
    VAR2->VAR24 = VAR18 % VAR2->VAR25;
    if (VAR9->VAR26 == VAR27)
    {
        if (VAR15)
        {
            VAR10 = *VAR16++;
            if (VAR16 + VAR10 > VAR17)
                return 0;
            if (VAR10 && VAR13)
            {
                FUN6(VAR6, VAR9, VAR16, VAR10, 0);
                if (!VAR2->VAR19[VAR11])
                    return 0;
            }
            VAR16 += VAR10;
            if (VAR16 < VAR17)
            {
                FUN6(VAR6, VAR9, VAR16, VAR17 - VAR16, 1);
            }
        }
        else
        {
            if (VAR13)
            {
                FUN6(VAR6, VAR9, VAR16, VAR17 - VAR16, 0);
            }
        }
    }
    else
    {
        int VAR28;
        if ((VAR28 = VAR9->VAR29.VAR30.FUN7(VAR9, VAR16, VAR17 - VAR16, VAR15, VAR18 - VAR2->VAR25)) < 0)
            return VAR28;
    }
    return 0;
}