static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14)
{
    uint8_t VAR15[270] = {0};
    uint32_t VAR16[270];
    VLC VAR17;
    int VAR18 = 0, VAR19 = 0, VAR20 = 0, VAR21 = 0;
    int VAR22, VAR23, VAR24;
    const int VAR25 = 270 - VAR10;
    int VAR26 = 0, VAR27 = 0, VAR28 = 0;
    if (!VAR10)
    {
        int VAR29, VAR30, VAR31, VAR32;
        VAR29 = FUN2(VAR2, 12);
        VAR30 = FUN2(VAR2, 12);
        VAR31 = FUN2(VAR2, 12) + 1;
        VAR32 = FUN2(VAR2, 12) + 1;
        if (VAR29 + VAR31 > VAR13 || VAR30 + VAR32 > VAR14)
            return VAR33;
        VAR4 += VAR5 * VAR30 + VAR29;
        VAR6 += VAR7 * VAR30 + VAR29 * 3;
        VAR13 = VAR31;
        VAR14 = VAR32;
        if (VAR30)
            VAR28 = 1;
    }
    else
    {
        if (VAR12 > 0)
        {
            VAR4 += VAR5 * VAR11;
            VAR6 += VAR7 * VAR11;
            VAR28 = 1;
            VAR14 -= VAR11;
        }
        else
            VAR14 = VAR11;
    }
    do
    {
        while (VAR21--)
        {
            int VAR34 = FUN2(VAR2, 8);
            if (VAR34 >= 204 - VAR10)
                VAR34 += 14 - VAR10;
            else if (VAR34 > 189)
                VAR34 = FUN3(VAR2) + (VAR34 << 1) - 190;
            if (VAR15[VAR34])
                return VAR33;
            VAR15[VAR34] = VAR18;
            VAR16[VAR34] = VAR20++;
            VAR19++;
        }
        VAR18++;
        VAR20 <<= 1;
        VAR22 = (1 << VAR18) - VAR20;
        VAR21 = FUN2(VAR2, FUN4(VAR22 + 1));
        if (VAR18 > 22 || VAR21 > VAR22)
            return VAR33;
    } while (VAR21 != VAR22);
    VAR22 = VAR25 - VAR19;
    while ((VAR23 = (2 << VAR18) - (VAR20 << 1) - VAR22) < 0)
    {
        VAR18++;
        VAR20 <<= 1;
    }
    for (VAR24 = 0; VAR24 < VAR25; VAR24++)
        if (!VAR15[VAR24])
        {
            if (VAR23-- == 0)
            {
                VAR18++;
                VAR20 <<= 1;
            }
            VAR15[VAR24] = VAR18;
            VAR16[VAR24] = VAR20++;
        }
    if (VAR20 != 1 << VAR18)
        return VAR33;
    if ((VAR24 = FUN5(&VAR17, 9, VAR25, VAR15, 1, 1, VAR16, 4, 4, 0)) < 0)
        return VAR24;
    do
    {
        VAR3 *VAR35 = VAR4;
        VAR3 *VAR36 = VAR6;
        do
        {
            if (VAR27-- < 1)
            {
                int VAR37 = FUN6(VAR2, VAR17.VAR38, 9, 3);
                if (VAR37 < 256)
                    VAR26 = VAR37;
                else if (VAR37 < 268)
                {
                    VAR37 -= 256;
                    if (VAR37 == 11)
                        VAR37 = FUN2(VAR2, 4) + 10;
                    if (!VAR37)
                        VAR27 = 0;
                    else
                        VAR27 = FUN2(VAR2, VAR37);
                    VAR27 += (1 << VAR37) - 1;
                    if (VAR26 == -2)
                    {
                        int VAR39 = FUN7(VAR27, VAR4 + VAR13 - VAR35);
                        VAR27 -= VAR39;
                        VAR35 += VAR39;
                        VAR36 += VAR39 * 3;
                    }
                }
                else
                    VAR26 = 267 - VAR37;
            }
            if (VAR26 >= 0)
            {
                *VAR35 = VAR26;
                FUN8(VAR36, VAR9[VAR26]);
            }
            else if (VAR26 == -1 && VAR28)
            {
                *VAR35 = *(VAR35 - VAR5);
                memcpy(VAR36, VAR36 - VAR7, 3);
            }
            VAR36 += 3;
        } while (++VAR35 < VAR4 + VAR13);
        VAR4 += VAR5;
        VAR6 += VAR7;
        VAR28 = 1;
    } while (--VAR14);
    FUN9(&VAR17);
    return 0;
}