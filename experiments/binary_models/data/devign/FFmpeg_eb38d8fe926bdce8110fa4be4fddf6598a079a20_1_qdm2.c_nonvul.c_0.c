static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
        for (VAR5 = 0; VAR5 < 30; VAR5++)
            for (VAR4 = 0; VAR4 < 8; VAR4++)
            {
                if ((VAR9 = VAR11[VAR2->VAR12][VAR5]) < (VAR13[VAR2->VAR12] - 1))
                    VAR8 = VAR2->VAR14[VAR6][VAR9 + 1][VAR4] * VAR15[VAR2->VAR12][VAR9 + 1][VAR5] + VAR2->VAR14[VAR6][VAR9][VAR4] * VAR15[VAR2->VAR12][VAR9][VAR5];
                else
                    VAR8 = VAR2->VAR14[VAR6][VAR9][VAR4] * VAR15[VAR2->VAR12][VAR9][VAR5];
                if (VAR8 < 0)
                    VAR8 += 0xff;
                VAR2->VAR16[VAR6][VAR5][VAR4] = (VAR8 / 256) & 0xff;
            }
    VAR7 = FUN2(VAR2->VAR17);
    if ((VAR2->VAR18 != 0) && !VAR3)
    {
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
            for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
                for (VAR4 = 0; VAR4 < 64; VAR4++)
                {
                    VAR2->VAR19[VAR6][VAR5][VAR4] = VAR2->VAR16[VAR6][VAR5][VAR4 / 8];
                    if (VAR2->VAR19[VAR6][VAR5][VAR4] < 0)
                        VAR2->VAR20[VAR6][VAR5][VAR4] = 0;
                    else
                        VAR2->VAR20[VAR6][VAR5][VAR4] = VAR21[0][VAR2->VAR19[VAR6][VAR5][VAR4] & 0x3f];
                }
    }
    else
    {
        VAR9 = VAR2->VAR18 ? 0 : 1;
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
        {
            if ((VAR5 >= 4) && (VAR5 <= 23))
            {
                for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
                    for (VAR4 = 0; VAR4 < 64; VAR4++)
                    {
                        VAR8 = VAR2->VAR16[VAR6][VAR5][VAR4 / 8] - VAR2->VAR22[VAR6][VAR5 / 8][VAR4 / 8][VAR4 % 8] - VAR2->VAR23[VAR6][VAR5 - 4][VAR4 / 8] - VAR2->VAR24[VAR6][VAR5 - 4];
                        VAR2->VAR19[VAR6][VAR5][VAR4] = VAR8 & 0xff;
                        if ((VAR8 < 0) || (!VAR2->VAR18 && !VAR8))
                            VAR2->VAR20[VAR6][VAR5][VAR4] = 0;
                        else
                            VAR2->VAR20[VAR6][VAR5][VAR4] = VAR21[VAR9][VAR8 & 0x3f];
                    }
            }
            else
            {
                if (VAR5 > 4)
                {
                    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
                        for (VAR4 = 0; VAR4 < 64; VAR4++)
                        {
                            VAR8 = VAR2->VAR16[VAR6][VAR5][VAR4 / 8] - VAR2->VAR22[VAR6][2][VAR4 / 8][VAR4 % 8] - VAR2->VAR24[VAR6][VAR5 - 4];
                            VAR2->VAR19[VAR6][VAR5][VAR4] = VAR8 & 0xff;
                            if ((VAR8 < 0) || (!VAR2->VAR18 && !VAR8))
                                VAR2->VAR20[VAR6][VAR5][VAR4] = 0;
                            else
                                VAR2->VAR20[VAR6][VAR5][VAR4] = VAR21[VAR9][VAR8 & 0x3f];
                        }
                }
                else
                {
                    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
                        for (VAR4 = 0; VAR4 < 64; VAR4++)
                        {
                            VAR8 = VAR2->VAR19[VAR6][VAR5][VAR4] = VAR2->VAR16[VAR6][VAR5][VAR4 / 8];
                            if ((VAR8 < 0) || (!VAR2->VAR18 && !VAR8))
                                VAR2->VAR20[VAR6][VAR5][VAR4] = 0;
                            else
                                VAR2->VAR20[VAR6][VAR5][VAR4] = VAR21[VAR9][VAR8 & 0x3f];
                        }
                }
            }
        }
    }
    return;
}