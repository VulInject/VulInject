static int FUN1(VAR1 *VAR2, VAR3 **VAR4, int VAR5, int VAR6, VAR7 **VAR8, int *VAR9)
{
    int VAR10 = 0, VAR11;
    VAR3 *VAR12 = *VAR4;
    VAR7 *VAR13;
    if (!VAR6)
    {
        *VAR9 = 1;
        *VAR8 = FUN2(sizeof(int));
        if (!*VAR8)
            return FUN3(VAR14);
        *VAR8[0] = VAR5;
        return 0;
    }
    assert(VAR5 > 0);
    *VAR9 = *VAR12 + 1;
    VAR12 += 1;
    VAR5 -= 1;
    VAR13 = FUN2(*VAR9 * sizeof(int));
    if (!VAR13)
        return FUN3(VAR14);
    switch (VAR6)
    {
    case 0x1:
    {
        uint8_t VAR15;
        uint32_t VAR16 = 0;
        for (VAR11 = 0; VAR10 == 0 && VAR11 < *VAR9 - 1; VAR11++)
        {
            while (1)
            {
                if (VAR5 == 0)
                {
                    VAR10 = VAR17;
                    break;
                }
                VAR15 = *VAR12;
                VAR13[VAR11] += VAR15;
                VAR12 += 1;
                VAR5 -= 1;
                if (VAR15 != 0xff)
                    break;
            }
            VAR16 += VAR13[VAR11];
        }
        if (VAR5 <= VAR16)
        {
            VAR10 = VAR18;
            break;
        }
        VAR13[VAR11] = VAR5 - VAR16;
        break;
    }
    case 0x2:
        if (VAR5 != (VAR5 / *VAR9) * VAR5)
        {
            VAR10 = VAR18;
            break;
        }
        for (VAR11 = 0; VAR11 < *VAR9; VAR11++)
            VAR13[VAR11] = VAR5 / *VAR9;
        break;
    case 0x3:
    {
        uint64_t VAR19;
        uint32_t VAR16;
        VAR11 = FUN4(VAR2, VAR12, VAR5, &VAR19);
        if (VAR11 < 0)
        {
            FUN5(VAR2->VAR20, VAR21, "");
            VAR10 = VAR11;
            break;
        }
        VAR12 += VAR11;
        VAR5 -= VAR11;
        VAR16 = VAR13[0] = VAR19;
        for (VAR11 = 1; VAR10 == 0 && VAR11 < *VAR9 - 1; VAR11++)
        {
            int64_t VAR22;
            int VAR23;
            VAR23 = FUN6(VAR2, VAR12, VAR5, &VAR22);
            if (VAR23 < 0)
            {
                FUN5(VAR2->VAR20, VAR21, "");
                VAR10 = VAR23;
                break;
            }
            VAR12 += VAR23;
            VAR5 -= VAR23;
            VAR13[VAR11] = VAR13[VAR11 - 1] + VAR22;
            VAR16 += VAR13[VAR11];
        }
        if (VAR5 <= VAR16)
        {
            VAR10 = VAR18;
            break;
        }
        VAR13[*VAR9 - 1] = VAR5 - VAR16;
        break;
    }
    }
    *VAR4 = VAR12;
    *VAR8 = VAR13;
    return VAR10;
}