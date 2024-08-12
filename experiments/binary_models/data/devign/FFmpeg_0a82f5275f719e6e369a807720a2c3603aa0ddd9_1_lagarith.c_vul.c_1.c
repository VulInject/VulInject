static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, const VAR3 *VAR8, int VAR9)
{
    int VAR10 = 0;
    int read = 0;
    uint32_t VAR11;
    uint32_t VAR12 = 1;
    int VAR13 = VAR8[0];
    GetBitContext VAR14;
    lag_rac VAR15;
    VAR15.VAR16 = VAR2->VAR16;
    VAR2->VAR17 = 0;
    if (VAR13 < 4)
    {
        VAR11 = VAR5 * VAR6;
        if (VAR13 && FUN2(VAR8 + 1) < VAR11)
        {
            VAR11 = FUN2(VAR8 + 1);
            VAR12 += 4;
        }
        FUN3(&VAR14, VAR8 + VAR12, VAR9 * 8);
        if (FUN4(&VAR15, &VAR14) < 0)
            return -1;
        FUN5(&VAR15, &VAR14, VAR11 - VAR7);
        for (VAR10 = 0; VAR10 < VAR6; VAR10++)
            read += FUN6(VAR2, &VAR15, VAR4 + (VAR10 * VAR7), VAR5, VAR7, VAR13);
        if (read > VAR11)
            FUN7(VAR2->VAR16, VAR18, "", read, VAR11);
    }
    else if (VAR13 < 8)
    {
        VAR13 -= 4;
        if (VAR13 > 0)
        {
            for (VAR10 = 0; VAR10 < VAR6; VAR10++)
                VAR8 += FUN8(VAR2, VAR4 + (VAR10 * VAR7), VAR8, VAR5, VAR13);
        }
        else
        {
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
        FUN7(VAR2->VAR16, VAR19, "", VAR13);
        return -1;
    }
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        FUN9(VAR2, VAR4, VAR5, VAR7, VAR10);
        VAR4 += VAR7;
    }
    return 0;
}