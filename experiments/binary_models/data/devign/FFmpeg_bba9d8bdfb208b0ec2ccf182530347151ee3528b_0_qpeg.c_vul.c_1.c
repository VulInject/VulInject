static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, const VAR3 *VAR9, VAR3 *VAR10)
{
    int VAR11, VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
        memcpy(VAR10 + (VAR11 * VAR6), VAR4 + (VAR11 * VAR5), VAR6);
    VAR15 = VAR7;
    VAR7--;
    VAR4 = VAR4 + VAR7 * VAR5;
    while ((FUN2(&VAR2->VAR16) > 0) && (VAR7 >= 0))
    {
        VAR13 = FUN3(&VAR2->VAR16);
        if (VAR8)
        {
            while ((VAR13 & 0xF0) == 0xF0)
            {
                if (VAR8 == 1)
                {
                    int VAR17;
                    int VAR18, VAR19, VAR20, VAR21;
                    VAR3 *VAR22;
                    int VAR23, VAR24;
                    VAR17 = VAR13 & 0xF;
                    VAR18 = VAR25[VAR17];
                    VAR19 = VAR26[VAR17];
                    VAR23 = FUN3(&VAR2->VAR16);
                    VAR24 = VAR23 >> 4;
                    if (VAR24 > 7)
                        VAR24 -= 16;
                    VAR20 = VAR24;
                    VAR24 = VAR23 & 0xF;
                    if (VAR24 > 7)
                        VAR24 -= 16;
                    VAR21 = VAR24;
                    if ((VAR20 + VAR14 < 0) || (VAR20 + VAR18 + VAR14 > VAR6) || (VAR7 - VAR21 - VAR19 < 0) || (VAR7 - VAR21 > VAR15) || (VAR14 + VAR18 > VAR6) || (VAR7 - VAR19 < 0))
                        FUN4(NULL, VAR27, "", VAR20, VAR21, VAR18, VAR19, VAR14, VAR7);
                    else
                    {
                        VAR22 = VAR10 + (VAR14 + VAR20) + (VAR7 - VAR21) * VAR6;
                        for (VAR12 = 0; VAR12 < VAR19; VAR12++)
                        {
                            for (VAR11 = 0; VAR11 < VAR18; VAR11++)
                                VAR4[VAR14 + VAR11 - (VAR12 * VAR5)] = VAR22[VAR11 - (VAR12 * VAR6)];
                        }
                    }
                }
                VAR13 = FUN3(&VAR2->VAR16);
            }
        }
        if (VAR13 == 0xE0)
            break;
        if (VAR13 > 0xE0)
        {
            int VAR28;
            VAR13 &= 0x1F;
            VAR28 = FUN3(&VAR2->VAR16);
            for (VAR11 = 0; VAR11 <= VAR13; VAR11++)
            {
                VAR4[VAR14++] = VAR28;
                if (VAR14 >= VAR6)
                {
                    VAR14 = 0;
                    VAR4 -= VAR5;
                    VAR7--;
                    if (VAR7 < 0)
                        break;
                }
            }
        }
        else if (VAR13 >= 0xC0)
        {
            VAR13 &= 0x1F;
            for (VAR11 = 0; VAR11 <= VAR13; VAR11++)
            {
                VAR4[VAR14++] = FUN3(&VAR2->VAR16);
                if (VAR14 >= VAR6)
                {
                    VAR14 = 0;
                    VAR4 -= VAR5;
                    VAR7--;
                    if (VAR7 < 0)
                        break;
                }
            }
        }
        else if (VAR13 >= 0x80)
        {
            int VAR29;
            VAR13 &= 0x3F;
            if (!VAR13)
                VAR29 = FUN3(&VAR2->VAR16) + 64;
            else if (VAR13 == 1)
                VAR29 = FUN3(&VAR2->VAR16) + 320;
            else
                VAR29 = VAR13;
            VAR14 += VAR29;
            while (VAR14 >= VAR6)
            {
                VAR14 -= VAR6;
                VAR4 -= VAR5;
                VAR7--;
                if (VAR7 < 0)
                    break;
            }
        }
        else
        {
            if (VAR13)
            {
                VAR4[VAR14++] = VAR9[VAR13 & 0x7F];
            }
            else
                VAR14++;
            if (VAR14 >= VAR6)
            {
                VAR14 = 0;
                VAR4 -= VAR5;
                VAR7--;
            }
        }
    }
}