static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, int VAR7, const VAR5 *VAR8)
{
    int VAR9;
    int VAR10 = 0;
    int VAR11;
    int VAR12;
    if (VAR3 & 1)
        for (VAR9 = 0; VAR9 < VAR4; VAR9++)
        {
            VAR10 = 0;
            while (VAR10 < VAR3)
            {
                VAR11 = FUN2(&VAR2->VAR13);
                if (VAR11 >= 0x80)
                {
                    VAR11 -= 0x7F;
                    VAR10 += VAR11 * 2;
                }
                else
                {
                    VAR12 = VAR6[VAR10] + (((VAR8[VAR11 * 2] - 128) * 3) >> 2);
                    VAR12 = FUN3(VAR12);
                    VAR6[VAR10] = VAR12;
                    VAR10++;
                    VAR12 = VAR6[VAR10] + (((VAR8[(VAR11 * 2) + 1] - 128) * 3) >> 2);
                    VAR12 = FUN3(VAR12);
                    VAR6[VAR10] = VAR12;
                    VAR10++;
                }
            }
            VAR6 += VAR7;
        }
    return 0;