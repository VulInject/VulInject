static int FUN1(const VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5)
{
    unsigned VAR6, VAR7 = 0;
    int VAR8 = VAR3;
    const VAR1 *VAR9, *VAR10 = VAR2 + VAR3;
    VAR1 *VAR11 = VAR4 + VAR12 * VAR13;
    VAR1 *VAR14, *VAR15;
    int VAR16, VAR17;
    int VAR18 = (VAR5 <= -VAR12) || (VAR5 >= 0);
    int VAR19, VAR20;
    int VAR21;
    int VAR22 = 0;
    int VAR23;
    if (VAR3 <= 0)
        return VAR24;
    if (VAR18)
    {
        VAR9 = VAR2;
        VAR14 = VAR4;
        VAR15 = VAR11;
    }
    else
    {
        VAR9 = VAR2 + VAR3 - 1;
        VAR14 = VAR11 - 1;
        VAR15 = VAR4 - 1;
    }
    for (;;)
    {
        int VAR25 = 0;
        VAR20 = 0;
        if (!VAR22 || (VAR8 == 4))
        {
            if (VAR9 < VAR2 || VAR9 >= VAR10)
                return VAR24;
            VAR6 = *VAR9;
            VAR19 = 1;
        }
        else
        {
            VAR6 = VAR7;
            VAR19 = 0;
        }
        if (!(VAR6 & 0xC))
        {
            for (;;)
            {
                if (VAR25 > 22)
                    return -1;
                if (!VAR19)
                {
                    if (VAR9 < VAR2 || VAR9 >= VAR10)
                        return VAR24;
                    VAR25 += 2;
                    VAR6 |= *VAR9 << VAR25;
                    if (*VAR9 & 0xC)
                        break;
                }
                VAR19 = 0;
                VAR25 += 2;
                VAR17 = (1 << VAR25) - 1;
                VAR6 = ((VAR6 >> 2) & ~VAR17) | (VAR6 & VAR17);
                FUN2(VAR9);
                if ((VAR6 & (0xC << VAR25)))
                {
                    VAR20 = 1;
                    break;
                }
            }
        }
        else if (VAR22)
        {
            VAR20 = VAR8 != 4;
        }
        if (VAR20)
        {
            VAR8 = 4;
        }
        else
        {
            VAR7 = VAR6 >> (4 + VAR25);
            VAR8 = 0;
            VAR6 &= (1 << (VAR25 + 4)) - 1;
            FUN2(VAR9);
        }
        VAR21 = VAR6 & 1;
        VAR16 = (VAR6 >> 1) - 1;
        FUN3(VAR16 > 0);
        VAR22 += 1 + VAR21;
        if (VAR22 >= 4)
            VAR22 -= 3;
        if (VAR16 <= 0 || FUN4(VAR15 - VAR14) < VAR16)
            return VAR24;
        switch (VAR22)
        {
        case 1:
            if (VAR18)
            {
                if (VAR14 - VAR4 + VAR12 < VAR5 || VAR14 - VAR4 + VAR12 + VAR5 < 0 || VAR11 - VAR14 < VAR5 + VAR16 || VAR11 - VAR14 < VAR16)
                    return VAR24;
                for (VAR23 = 0; VAR23 < VAR16; VAR23++)
                    VAR14[VAR23] = VAR14[VAR5 + VAR23];
                VAR14 += VAR16;
            }
            else
            {
                VAR14 -= VAR16;
                if (VAR14 - VAR4 + VAR12 < VAR5 || VAR14 - VAR4 + VAR12 + VAR5 < 0 || VAR11 - VAR14 < VAR5 + VAR16 || VAR11 - VAR14 < VAR16)
                    return VAR24;
                for (VAR23 = VAR16 - 1; VAR23 >= 0; VAR23--)
                    VAR14[VAR23] = VAR14[VAR5 + VAR23];
            }
            break;
        case 2:
            if (VAR18)
            {
                if (VAR2 + VAR3 - VAR9 < VAR16)
                    return VAR24;
                memcpy(VAR14, VAR9, VAR16);
                VAR14 += VAR16;
                VAR9 += VAR16;
            }
            else
            {
                if (VAR9 - VAR2 < VAR16)
                    return VAR24;
                VAR14 -= VAR16;
                VAR9 -= VAR16;
                memcpy(VAR14, VAR9, VAR16);
            }
            break;
        case 3:
            VAR6 = VAR18 ? VAR14[-1] : VAR14[1];
            if (VAR18)
            {
                memset(VAR14, VAR6, VAR16);
                VAR14 += VAR16;
            }
            else
            {
                VAR14 -= VAR16;
                memset(VAR14, VAR6, VAR16);
            }
            break;
        }
        if (VAR14 == VAR15)
            return 0;
    }
}