void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    VAR3 *VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    VAR11 = VAR7->VAR17;
    VAR13 = 1;
    VAR14 = 0;
    VAR15 = 0;
    VAR16 = 0;
    while (VAR5 > 0)
    {
        int VAR18;
        VAR18 = 0;
        VAR9 = VAR11 - 4;
        if (VAR9 >= VAR5)
        {
            VAR9 = VAR5;
            VAR14 = 1;
        }
        else
        {
            const VAR3 *VAR19, *VAR20;
            int VAR21;
            VAR20 = VAR4;
            while (1)
            {
                VAR21 = -1;
                VAR19 = FUN2(VAR20, VAR4 + VAR5, &VAR21);
                if ((VAR21 & 0xFFFFFF00) == 0x100)
                {
                    if (VAR21 == 0x100)
                    {
                        VAR15 = (VAR19[1] & 0x38) >> 3;
                        VAR16 = (int)VAR19[0] << 2 | VAR19[1] >> 6;
                    }
                    if (VAR21 == 0x1B8)
                    {
                        VAR18 = 1;
                    }
                    if (VAR19 - VAR4 < VAR9)
                    {
                        if (VAR13 == 0)
                        {
                            VAR14 = 1;
                            VAR9 = VAR19 - VAR4 - 4;
                            break;
                        }
                        VAR20 = VAR19;
                    }
                    else
                    {
                        if (VAR19 - VAR20 < VAR11 - 4)
                        {
                            VAR9 = VAR20 - VAR4 - 4;
                            VAR14 = 1;
                        }
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        VAR10 = 0;
        VAR10 |= VAR16 << 16;
        VAR10 |= VAR18 << 13;
        VAR10 |= VAR13 << 12;
        VAR10 |= VAR14 << 11;
        VAR10 |= VAR15 << 8;
        VAR12 = VAR7->VAR22;
        *VAR12++ = VAR10 >> 24;
        *VAR12++ = VAR10 >> 16;
        *VAR12++ = VAR10 >> 8;
        *VAR12++ = VAR10;
        memcpy(VAR12, VAR4, VAR9);
        VAR12 += VAR9;
        VAR7->VAR23 = VAR7->VAR24;
        FUN3(VAR2, VAR7->VAR22, VAR12 - VAR7->VAR22, (VAR9 == VAR5));
        VAR4 += VAR9;
        VAR5 -= VAR9;
        VAR13 = VAR14;
        VAR14 = 0;
    }
}