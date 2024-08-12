static void FUN1(const VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, const VAR1 *VAR9, VAR1 *VAR10)
{
    int VAR11, VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15;
    if (!VAR10)
        VAR10 = VAR3;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
        memcpy(VAR3 + (VAR11 * VAR5), VAR10 + (VAR11 * VAR5), VAR6);
    VAR15 = VAR7;
    VAR7--;
    VAR3 = VAR3 + VAR7 * VAR5;
    while ((VAR4 > 0) && (VAR7 >= 0))
    {
        VAR13 = *VAR2++;
        VAR4--;
        if (VAR8)
        {
            while ((VAR13 & 0xF0) == 0xF0)
            {
                if (VAR8 == 1)
                {
                    int VAR16;
                    int VAR17, VAR18, VAR19, VAR20;
                    VAR1 *VAR21;
                    int VAR22, VAR23;
                    VAR16 = VAR13 & 0xF;
                    VAR17 = VAR24[VAR16];
                    VAR18 = VAR25[VAR16];
                    VAR22 = *VAR2++;
                    VAR4--;
                    VAR23 = VAR22 >> 4;
                    if (VAR23 > 7)
                        VAR23 -= 16;
                    VAR19 = VAR23;
                    VAR23 = VAR22 & 0xF;
                    if (VAR23 > 7)
                        VAR23 -= 16;
                    VAR20 = VAR23;
                    if ((VAR19 + VAR14 < 0) || (VAR19 + VAR17 + VAR14 > VAR6) || (VAR7 - VAR20 - VAR18 < 0) || (VAR7 - VAR20 > VAR15) || (VAR14 + VAR17 > VAR6) || (VAR7 - VAR18 < 0))
                        FUN2(NULL, VAR26, "", VAR19, VAR20, VAR17, VAR18, VAR14, VAR7);
                    else
                    {
                        VAR21 = VAR10 + (VAR14 + VAR19) + (VAR7 - VAR20) * VAR5;
                        for (VAR12 = 0; VAR12 < VAR18; VAR12++)
                        {
                            for (VAR11 = 0; VAR11 < VAR17; VAR11++)
                                VAR3[VAR14 + VAR11 - (VAR12 * VAR5)] = VAR21[VAR11 - (VAR12 * VAR5)];
                        }
                    }
                }
                VAR13 = *VAR2++;
                VAR4--;
            }
        }
        if (VAR13 == 0xE0)
            break;
        if (VAR13 > 0xE0)
        {
            int VAR27;
            VAR13 &= 0x1F;
            VAR27 = *VAR2++;
            VAR4--;
            for (VAR11 = 0; VAR11 <= VAR13; VAR11++)
            {
                VAR3[VAR14++] = VAR27;
                if (VAR14 >= VAR6)
                {
                    VAR14 = 0;
                    VAR3 -= VAR5;
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
                VAR3[VAR14++] = *VAR2++;
                if (VAR14 >= VAR6)
                {
                    VAR14 = 0;
                    VAR3 -= VAR5;
                    VAR7--;
                    if (VAR7 < 0)
                        break;
                }
            }
            VAR4 -= VAR13 + 1;
        }
        else if (VAR13 >= 0x80)
        {
            int VAR28;
            VAR13 &= 0x3F;
            if (!VAR13)
                VAR28 = (*VAR2++) + 64;
            else if (VAR13 == 1)
                VAR28 = (*VAR2++) + 320;
            else
                VAR28 = VAR13;
            VAR14 += VAR28;
            while (VAR14 >= VAR6)
            {
                VAR14 -= VAR6;
                VAR3 -= VAR5;
                VAR7--;
                if (VAR7 < 0)
                    break;
            }
        }
        else
        {
            if (VAR13)
                VAR3[VAR14++] = VAR9[VAR13 & 0x7F];
            else
                VAR14++;
            if (VAR14 >= VAR6)
            {
                VAR14 = 0;
                VAR3 -= VAR5;
                VAR7--;
            }
        }
    }
}