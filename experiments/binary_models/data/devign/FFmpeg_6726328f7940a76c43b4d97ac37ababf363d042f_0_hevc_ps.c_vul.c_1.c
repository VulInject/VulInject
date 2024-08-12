static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    uint8_t VAR9;
    int32_t VAR10[2][6];
    int VAR11, VAR12, VAR13;
    int VAR14;
    for (VAR11 = 0; VAR11 < 4; VAR11++)
        for (VAR12 = 0; VAR12 < 6; VAR12 += ((VAR11 == 3) ? 3 : 1))
        {
            VAR9 = FUN2(VAR2);
            if (!VAR9)
            {
                unsigned int VAR15 = FUN3(VAR2);
                if (VAR15)
                {
                    if (VAR12 < VAR15)
                    {
                        FUN4(VAR4, VAR16, "", VAR15);
                        return VAR17;
                    }
                    memcpy(VAR6->VAR6[VAR11][VAR12], VAR6->VAR6[VAR11][VAR12 - VAR15], VAR11 > 0 ? 64 : 16);
                    if (VAR11 > 1)
                        VAR6->VAR18[VAR11 - 2][VAR12] = VAR6->VAR18[VAR11 - 2][VAR12 - VAR15];
                }
            }
            else
            {
                int VAR19, VAR20;
                int32_t VAR21;
                VAR19 = 8;
                VAR20 = FUN5(64, 1 << (4 + (VAR11 << 1)));
                if (VAR11 > 1)
                {
                    VAR10[VAR11 - 2][VAR12] = FUN6(VAR2) + 8;
                    VAR19 = VAR10[VAR11 - 2][VAR12];
                    VAR6->VAR18[VAR11 - 2][VAR12] = VAR19;
                }
                for (VAR14 = 0; VAR14 < VAR20; VAR14++)
                {
                    if (VAR11 == 0)
                        VAR13 = 4 * VAR22[VAR14] + VAR23[VAR14];
                    else
                        VAR13 = 8 * VAR24[VAR14] + VAR25[VAR14];
                    VAR21 = FUN6(VAR2);
                    VAR19 = (VAR19 + VAR21 + 256) % 256;
                    VAR6->VAR6[VAR11][VAR12][VAR13] = VAR19;
                }
            }
        }
    if (VAR8->VAR26 == 3)
    {
        for (VAR14 = 0; VAR14 < 64; VAR14++)
        {
            VAR6->VAR6[3][1][VAR14] = VAR6->VAR6[2][1][VAR14];
            VAR6->VAR6[3][2][VAR14] = VAR6->VAR6[2][2][VAR14];
            VAR6->VAR6[3][4][VAR14] = VAR6->VAR6[2][4][VAR14];
            VAR6->VAR6[3][5][VAR14] = VAR6->VAR6[2][5][VAR14];
        }
        VAR6->VAR18[1][1] = VAR6->VAR18[0][1];
        VAR6->VAR18[1][2] = VAR6->VAR18[0][2];
        VAR6->VAR18[1][4] = VAR6->VAR18[0][4];
        VAR6->VAR18[1][5] = VAR6->VAR18[0][5];
    }
    return 0;
}