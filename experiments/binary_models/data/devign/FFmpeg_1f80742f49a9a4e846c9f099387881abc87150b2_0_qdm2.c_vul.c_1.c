static void FUN1(sb_int8_array VAR1, sb_int8_array VAR2, sb_int8_array VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int64_t VAR19;
    if (!VAR6)
    {
        SAMPLES_NEEDED for (VAR8 = 0; VAR8 < VAR4; VAR8++) for (VAR9 = 0; VAR9 < 30; VAR9++)
        {
            for (VAR10 = 1; VAR10 < 63; VAR10++)
            {
                VAR15 = VAR1[VAR8][VAR9][VAR10] - 10;
                if (VAR15 < 0)
                    VAR15 = 0;
                VAR16 = VAR17 = VAR18 = 0;
                if (VAR9 > 1)
                {
                    VAR16 = VAR1[VAR8][VAR9 - 2][VAR10] + VAR20[VAR9][0] - 6;
                    if (VAR16 < 0)
                        VAR16 = 0;
                }
                if (VAR9 > 0)
                {
                    VAR17 = VAR1[VAR8][VAR9 - 1][VAR10] + VAR20[VAR9][1] - 6;
                    if (VAR17 < 0)
                        VAR17 = 0;
                }
                if (VAR9 < 29)
                {
                    VAR18 = VAR1[VAR8][VAR9 + 1][VAR10] + VAR20[VAR9][3] - 6;
                    if (VAR18 < 0)
                        VAR18 = 0;
                }
                VAR11 = VAR1[VAR8][VAR9][VAR10 + 1] * 2 - VAR18 - VAR17 - VAR16 - VAR15;
                if (VAR11 < 0)
                    VAR11 = 0;
                VAR2[VAR8][VAR9][VAR10 + 1] = VAR11 & 0xff;
            }
            VAR2[VAR8][VAR9][0] = VAR2[VAR8][VAR9][1];
        }
        VAR12 = 0;
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
            for (VAR9 = 0; VAR9 < 30; VAR9++)
                for (VAR10 = 0; VAR10 < 64; VAR10++)
                    VAR12 += VAR2[VAR8][VAR9][VAR10];
        VAR19 = 0x66666667 * (VAR12 * 10);
        VAR13 = (VAR19 >> 32) / 8 + ((VAR19 & 0xffffffff) >> 31);
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
            for (VAR9 = 0; VAR9 < 30; VAR9++)
                for (VAR10 = 0; VAR10 < 64; VAR10++)
                {
                    VAR14 = VAR2[VAR8][VAR9][VAR10] * VAR13 * 10;
                    if (VAR14 < 0)
                        VAR14 += 0xff;
                    VAR14 /= 256;
                    switch (VAR9)
                    {
                    case 0:
                        if (VAR14 < 30)
                            VAR14 = 30;
                        VAR14 += 15;
                        break;
                    case 1:
                        if (VAR14 < 24)
                            VAR14 = 24;
                        VAR14 += 10;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        if (VAR14 < 16)
                            VAR14 = 16;
                    }
                    if (VAR14 <= 5)
                        VAR11 = 0;
                    else if (VAR14 <= 10)
                        VAR11 = 10;
                    else if (VAR14 <= 16)
                        VAR11 = 16;
                    else if (VAR14 <= 24)
                        VAR11 = -1;
                    else
                        VAR11 = 0;
                    VAR3[VAR8][VAR9][VAR10] = ((VAR11 & 0xfffa) + 30) & 0xff;
                }
        for (VAR9 = 0; VAR9 < 30; VAR9++)
            FUN2(VAR9, VAR4, VAR3);
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
            for (VAR9 = 0; VAR9 < 30; VAR9++)
                for (VAR10 = 0; VAR10 < 64; VAR10++)
                    if (VAR9 >= 10)
                    {
                        if (VAR3[VAR8][VAR9][VAR10] < 10)
                            VAR3[VAR8][VAR9][VAR10] = 10;
                    }
                    else
                    {
                        if (VAR9 >= 2)
                        {
                            if (VAR3[VAR8][VAR9][VAR10] < 16)
                                VAR3[VAR8][VAR9][VAR10] = 16;
                        }
                        else
                        {
                            if (VAR3[VAR8][VAR9][VAR10] < 30)
                                VAR3[VAR8][VAR9][VAR10] = 30;
                        }
                    }
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
            for (VAR9 = 0; VAR9 < 30; VAR9++)
                for (VAR10 = 0; VAR10 < 64; VAR10++)
                    VAR3[VAR8][VAR9][VAR10] = VAR21[VAR7][VAR9];
    }
}