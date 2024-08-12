static int FUN1(VAR1 *VAR2, VAR3 **VAR4, int *VAR5, int VAR6, VAR7 **VAR8, int *VAR9)
{
    int VAR10 = 0, VAR11, VAR12 = *VAR5;
    VAR3 *VAR13 = *VAR4;
    VAR7 *VAR14;
    if (!VAR6)
    {
        *VAR9 = 1;
        *VAR8 = FUN2(sizeof(int));
        if (!*VAR8)
            return FUN3(VAR15);
        *VAR8[0] = VAR12;
        return 0;
    }
    FUN4(VAR12 > 0);
    *VAR9 = *VAR13 + 1;
    VAR13 += 1;
    VAR12 -= 1;
    VAR14 = FUN2(*VAR9 * sizeof(int));
    if (!VAR14)
        return FUN3(VAR15);
    switch (VAR6)
    {
    case 0x1:
    {
        uint8_t VAR16;
        uint32_t VAR17 = 0;
        for (VAR11 = 0; VAR10 == 0 && VAR11 < *VAR9 - 1; VAR11++)
        {
            while (1)
            {
                if (VAR12 == 0)
                {
                    VAR10 = VAR18;
                    break;
                }
                VAR16 = *VAR13;
                VAR14[VAR11] += VAR16;
                VAR13 += 1;
                VAR12 -= 1;
                if (VAR16 != 0xff)
                    break;
            }
            VAR17 += VAR14[VAR11];
        }
        if (VAR12 <= VAR17)
        {
            VAR10 = VAR18;
            break;
        }
        VAR14[VAR11] = VAR12 - VAR17;
        break;
    }
    case 0x2:
        if (VAR12 % (*VAR9))
        {
            VAR10 = VAR18;
            break;
        }
        for (VAR11 = 0; VAR11 < *VAR9; VAR11++)
            VAR14[VAR11] = VAR12 / *VAR9;
        break;
    case 0x3:
    {
        uint64_t VAR19;
        uint64_t VAR17;
        VAR11 = FUN5(VAR2, VAR13, VAR12, &VAR19);
        if (VAR11 < 0)
        {
            FUN6(VAR2->VAR20, VAR21, "");
            VAR10 = VAR11;
            break;
        }
        VAR13 += VAR11;
        VAR12 -= VAR11;
        VAR17 = VAR14[0] = VAR19;
        for (VAR11 = 1; VAR10 == 0 && VAR11 < *VAR9 - 1; VAR11++)
        {
            int64_t VAR22;
            int VAR23;
            VAR23 = FUN7(VAR2, VAR13, VAR12, &VAR22);
            if (VAR23 < 0)
            {
                FUN6(VAR2->VAR20, VAR21, "");
                VAR10 = VAR23;
                break;
            }
            VAR13 += VAR23;
            VAR12 -= VAR23;
            VAR14[VAR11] = VAR14[VAR11 - 1] + VAR22;
            VAR17 += VAR14[VAR11];
        }
        if (VAR12 <= VAR17)
        {
            VAR10 = VAR18;
            break;
        }
        VAR14[*VAR9 - 1] = VAR12 - VAR17;
        break;
    }
    }
    *VAR4 = VAR13;
    *VAR8 = VAR14;
    *VAR5 = VAR12;
    return VAR10;
}