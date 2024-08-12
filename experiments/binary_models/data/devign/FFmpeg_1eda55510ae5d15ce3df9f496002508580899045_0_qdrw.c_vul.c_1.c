static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    int VAR10 = VAR2->VAR11 * VAR7;
    VAR12 *VAR13 = VAR4->VAR14[0];
    for (VAR8 = 0; VAR8 < VAR2->VAR15; VAR8++)
    {
        int VAR16, VAR17, VAR18, VAR19;
        VAR12 *VAR20 = VAR13;
        int VAR21 = 0;
        VAR16 = VAR17 = FUN2(VAR6);
        if (FUN3(VAR6) < VAR16)
            while (VAR17 > 0)
            {
                VAR18 = FUN4(VAR6);
                if (VAR18 & 0x80)
                {
                    VAR19 = FUN4(VAR6);
                    for (VAR9 = 0; VAR9 < 257 - VAR18; VAR9++)
                    {
                        VAR20[VAR21] = VAR19;
                        VAR21 += VAR7;
                        if (VAR21 >= VAR10)
                        {
                            VAR21 -= VAR10;
                            VAR21++;
                        }
                    }
                    VAR17 -= 2;
                }
                else
                {
                    for (VAR9 = 0; VAR9 < VAR18 + 1; VAR9++)
                    {
                        VAR20[VAR21] = FUN4(VAR6);
                        VAR21 += VAR7;
                        if (VAR21 >= VAR10)
                        {
                            VAR21 -= VAR10;
                            VAR21++;
                        }
                    }
                    VAR17 -= 2 + VAR18;
                }
            }
        VAR13 += VAR4->VAR22[0];
    }
    return 0;