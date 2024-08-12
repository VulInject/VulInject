static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, const VAR3 *VAR8, int VAR9)
{
    int VAR10 = 0;
    int read = 0;
    uint32_t VAR11;
    uint32_t VAR12 = 1;
    int VAR13;
    GetBitContext VAR14;
    lag_rac VAR15;
    const VAR3 *VAR16 = VAR8 + VAR9;
    int VAR17;
    VAR15.VAR18 = VAR2->VAR18;
    VAR2->VAR19 = 0;
    if (VAR9 < 2)
        return VAR20;
    VAR13 = VAR8[0];
    if (VAR13 < 4)
    {
        VAR11 = VAR5 * VAR6;
        if (VAR9 < 5)
            return VAR20;
        if (VAR13 && FUN2(VAR8 + 1) < VAR11)
        {
            VAR11 = FUN2(VAR8 + 1);
            VAR12 += 4;
        }
        if ((VAR17 = FUN3(&VAR14, VAR8 + VAR12, VAR9 - VAR12)) < 0)
            return VAR17;
        if (FUN4(&VAR15, &VAR14) < 0)
            return -1;
        FUN5(&VAR15, &VAR14, VAR11 - VAR7);
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            read += FUN6(VAR2, &VAR15, VAR4 + (VAR10 * VAR7), VAR5, VAR7, VAR13);
        if (read > VAR11)
            FUN7(VAR2->VAR18, VAR21, "", read, VAR11);
    }
    else if (VAR13 < 8)
    {
        VAR13 -= 4;
        VAR8++;
        VAR9--;
        if (VAR13 > 0)
        {
            for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            {
                int VAR22 = FUN8(VAR2, VAR4 + (VAR10 * VAR7), VAR8, VAR16, VAR5, VAR13);
                if (VAR22 < 0)
                    return VAR22;
                VAR8 += VAR22;
            }
        }
        else
        {
            if (VAR9 < VAR5 * VAR6)
                return VAR20;
            for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            {
                memcpy(VAR4 + (VAR10 * VAR7), VAR8, VAR5);
                VAR8 += VAR5;
            }
        }
    }
    else if (VAR13 == 0xff)
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            memset(VAR4 + VAR10 * VAR7, VAR8[1], VAR5);
        return 0;
    }
    else
    {
        FUN7(VAR2->VAR18, VAR23, "", VAR13);
        return -1;
    }
    if (VAR2->VAR18->VAR24 != VAR25)
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            FUN9(VAR2, VAR4, VAR5, VAR7, VAR10);
            VAR4 += VAR7;
        }
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
        {
            FUN10(VAR2, VAR4, VAR5, VAR7, VAR10, VAR5 == VAR2->VAR18->VAR5);
            VAR4 += VAR7;
        }
    }
    return 0;
}