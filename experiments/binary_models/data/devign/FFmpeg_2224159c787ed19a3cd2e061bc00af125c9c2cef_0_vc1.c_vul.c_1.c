static int FUN1(VAR1 *VAR2, int *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = &VAR5->VAR8.VAR7;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    uint8_t VAR14, *VAR15 = VAR2;
    int VAR16, VAR17, VAR18;
    VAR16 = VAR5->VAR8.VAR19;
    VAR17 = VAR5->VAR8.VAR20 >> VAR5->VAR21;
    VAR18 = VAR5->VAR8.VAR22;
    VAR14 = FUN2(VAR7);
    VAR9 = FUN3(VAR7, VAR23.VAR24, VAR25, 1);
    *VAR3 = 0;
    switch (VAR9)
    {
    case VAR26:
        *VAR3 = 1;
        return VAR14;
    case VAR27:
    case VAR28:
        if ((VAR17 * VAR16) & 1)
        {
            *VAR15++ = FUN2(VAR7);
            VAR13 = 1;
        }
        else
            VAR13 = 0;
        for (VAR11 = VAR13; VAR11 < VAR17 * VAR16; VAR11 += 2)
        {
            VAR12 = FUN3(VAR7, VAR29.VAR24, VAR30, 1);
            *VAR15++ = VAR12 & 1;
            VAR13++;
            if (VAR13 == VAR16)
            {
                VAR13 = 0;
                VAR15 += VAR18 - VAR16;
            }
            *VAR15++ = VAR12 >> 1;
            VAR13++;
            if (VAR13 == VAR16)
            {
                VAR13 = 0;
                VAR15 += VAR18 - VAR16;
            }
        }
        break;
    case VAR31:
    case VAR32:
        if (!(VAR17 % 3) && (VAR16 % 3))
        {
            for (VAR11 = 0; VAR11 < VAR17; VAR11 += 3)
            {
                for (VAR10 = VAR16 & 1; VAR10 < VAR16; VAR10 += 2)
                {
                    VAR12 = FUN3(VAR7, VAR33.VAR24, VAR34, 2);
                    if (VAR12 < 0)
                    {
                        FUN4(VAR5->VAR8.VAR35, VAR36, "");
                        return -1;
                    }
                    VAR15[VAR10 + 0] = (VAR12 >> 0) & 1;
                    VAR15[VAR10 + 1] = (VAR12 >> 1) & 1;
                    VAR15[VAR10 + 0 + VAR18] = (VAR12 >> 2) & 1;
                    VAR15[VAR10 + 1 + VAR18] = (VAR12 >> 3) & 1;
                    VAR15[VAR10 + 0 + VAR18 * 2] = (VAR12 >> 4) & 1;
                    VAR15[VAR10 + 1 + VAR18 * 2] = (VAR12 >> 5) & 1;
                }
                VAR15 += VAR18 * 3;
            }
            if (VAR16 & 1)
                FUN5(VAR2, 1, VAR17, VAR18, &VAR5->VAR8.VAR7);
        }
        else
        {
            VAR15 += (VAR17 & 1) * VAR18;
            for (VAR11 = VAR17 & 1; VAR11 < VAR17; VAR11 += 2)
            {
                for (VAR10 = VAR16 % 3; VAR10 < VAR16; VAR10 += 3)
                {
                    VAR12 = FUN3(VAR7, VAR33.VAR24, VAR34, 2);
                    if (VAR12 < 0)
                    {
                        FUN4(VAR5->VAR8.VAR35, VAR36, "");
                        return -1;
                    }
                    VAR15[VAR10 + 0] = (VAR12 >> 0) & 1;
                    VAR15[VAR10 + 1] = (VAR12 >> 1) & 1;
                    VAR15[VAR10 + 2] = (VAR12 >> 2) & 1;
                    VAR15[VAR10 + 0 + VAR18] = (VAR12 >> 3) & 1;
                    VAR15[VAR10 + 1 + VAR18] = (VAR12 >> 4) & 1;
                    VAR15[VAR10 + 2 + VAR18] = (VAR12 >> 5) & 1;
                }
                VAR15 += VAR18 * 2;
            }
            VAR10 = VAR16 % 3;
            if (VAR10)
                FUN5(VAR2, VAR10, VAR17, VAR18, &VAR5->VAR8.VAR7);
            if (VAR17 & 1)
                FUN6(VAR2 + VAR10, VAR16 - VAR10, 1, VAR18, &VAR5->VAR8.VAR7);
        }
        break;
    case VAR37:
        FUN6(VAR2, VAR16, VAR17, VAR18, &VAR5->VAR8.VAR7);
        break;
    case VAR38:
        FUN5(VAR2, VAR16, VAR17, VAR18, &VAR5->VAR8.VAR7);
        break;
    default:
        break;
    }
    if (VAR9 == VAR27 || VAR9 == VAR31)
    {
        VAR15 = VAR2;
        VAR15[0] ^= VAR14;
        for (VAR10 = 1; VAR10 < VAR16; VAR10++)
            VAR15[VAR10] ^= VAR15[VAR10 - 1];
        for (VAR11 = 1; VAR11 < VAR17; VAR11++)
        {
            VAR15 += VAR18;
            VAR15[0] ^= VAR15[-VAR18];
            for (VAR10 = 1; VAR10 < VAR16; VAR10++)
            {
                if (VAR15[VAR10 - 1] != VAR15[VAR10 - VAR18])
                    VAR15[VAR10] ^= VAR14;
                else
                    VAR15[VAR10] ^= VAR15[VAR10 - 1];
            }
        }
    }
    else if (VAR14)
    {
        VAR15 = VAR2;
        for (VAR10 = 0; VAR10 < VAR18 * VAR17; VAR10++)
            VAR15[VAR10] = !VAR15[VAR10];
    }
    return (VAR9 << 1) + VAR14;
}