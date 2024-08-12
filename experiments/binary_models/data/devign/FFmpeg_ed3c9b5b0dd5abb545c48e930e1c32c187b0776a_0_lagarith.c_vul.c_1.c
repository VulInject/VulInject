static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    unsigned VAR8, VAR9;
    unsigned VAR10 = 0;
    unsigned VAR11 = 0;
    VAR2->VAR8[0] = 0;
    VAR2->VAR8[257] = VAR12;
    for (VAR5 = 1; VAR5 < 257; VAR5++)
    {
        if (FUN2(VAR4, &VAR2->VAR8[VAR5]) < 0)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        if ((VAR15)VAR10 + VAR2->VAR8[VAR5] > VAR12)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        VAR10 += VAR2->VAR8[VAR5];
        if (!VAR2->VAR8[VAR5])
        {
            if (FUN2(VAR4, &VAR8))
            {
                FUN3(VAR2->VAR13, VAR14, "");
                return -1;
            }
            if (VAR8 > 256 - VAR5)
                VAR8 = 256 - VAR5;
            for (VAR6 = 0; VAR6 < VAR8; VAR6++)
                VAR2->VAR8[++VAR5] = 0;
        }
    }
    if (!VAR10)
    {
        FUN3(VAR2->VAR13, VAR14, "");
        return -1;
    }
    VAR7 = FUN4(VAR10);
    if (VAR10 & (VAR10 - 1))
    {
        uint64_t VAR16 = FUN5(VAR10);
        for (VAR5 = 1; VAR5 <= 128; VAR5++)
        {
            VAR2->VAR8[VAR5] = FUN6(VAR2->VAR8[VAR5], VAR16);
            VAR11 += VAR2->VAR8[VAR5];
        }
        if (VAR11 <= 0)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return VAR17;
        }
        for (; VAR5 < 257; VAR5++)
        {
            VAR2->VAR8[VAR5] = FUN6(VAR2->VAR8[VAR5], VAR16);
            VAR11 += VAR2->VAR8[VAR5];
        }
        VAR7++;
        VAR9 = 1 << VAR7;
        if (VAR11 > VAR9)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        VAR11 = VAR9 - VAR11;
        for (VAR5 = 1; VAR11; VAR5 = (VAR5 & 0x7f) + 1)
        {
            if (VAR2->VAR8[VAR5])
            {
                VAR2->VAR8[VAR5]++;
                VAR11--;
            }
        }
    }
    VAR2->VAR18 = VAR7;
    for (VAR5 = 1; VAR5 < 257; VAR5++)
        VAR2->VAR8[VAR5] += VAR2->VAR8[VAR5 - 1];
    return 0;
}