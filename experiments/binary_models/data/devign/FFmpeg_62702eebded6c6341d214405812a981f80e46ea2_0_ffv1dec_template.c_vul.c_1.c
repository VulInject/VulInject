static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5[3], int VAR6, int VAR7, int VAR8[3])
{
    int VAR9, VAR10, VAR11;
    VAR12 *VAR13[4][2];
    int VAR14 = VAR3->VAR15->VAR16 <= 8;
    int VAR17 = VAR3->VAR15->VAR16 > 0 ? VAR3->VAR15->VAR16 : 8;
    int VAR18 = 1 << VAR17;
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        VAR13[VAR9][0] = FUN1(VAR3->VAR19) + VAR9 * 2 * (VAR6 + 6) + 3;
        VAR13[VAR9][1] = FUN1(VAR3->VAR19) + (VAR9 * 2 + 1) * (VAR6 + 6) + 3;
    }
    VAR3->VAR20 = 0;
    memset(FUN1(VAR3->VAR19), 0, 8 * (VAR6 + 6) * sizeof(*FUN1(VAR3->VAR19)));
    for (VAR10 = 0; VAR10 < VAR7; VAR10++)
    {
        for (VAR11 = 0; VAR11 < 3 + VAR3->VAR21; VAR11++)
        {
            VAR12 *VAR22 = VAR13[VAR11][0];
            VAR13[VAR11][0] = VAR13[VAR11][1];
            VAR13[VAR11][1] = VAR22;
            VAR13[VAR11][1][-1] = VAR13[VAR11][0][0];
            VAR13[VAR11][0][VAR6] = VAR13[VAR11][0][VAR6 - 1];
            if (VAR14 && VAR3->VAR23 == 0)
                FUN1(VAR24)
                (VAR3, VAR6, VAR13[VAR11], (VAR11 + 1) / 2, 9);
            else
                FUN1(VAR24)
                (VAR3, VAR6, VAR13[VAR11], (VAR11 + 1) / 2, VAR17 + (VAR3->VAR23 != 1));
        }
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
        {
            int VAR25 = VAR13[0][1][VAR9];
            int VAR26 = VAR13[1][1][VAR9];
            int VAR27 = VAR13[2][1][VAR9];
            int VAR28 = VAR13[3][1][VAR9];
            if (VAR3->VAR23 != 1)
            {
                VAR26 -= VAR18;
                VAR27 -= VAR18;
                VAR25 -= (VAR26 * VAR3->VAR29 + VAR27 * VAR3->VAR30) >> 2;
                VAR26 += VAR25;
                VAR27 += VAR25;
            }
            if (VAR14)
                *((VAR31 *)(VAR5[0] + VAR9 * 4 + VAR8[0] * VAR10)) = VAR26 + (VAR25 << 8) + (VAR27 << 16) + (VAR28 << 24);
            else if (sizeof(VAR12) == 4)
            {
                *((VAR32 *)(VAR5[0] + VAR9 * 2 + VAR8[0] * VAR10)) = VAR25;
                *((VAR32 *)(VAR5[1] + VAR9 * 2 + VAR8[1] * VAR10)) = VAR26;
                *((VAR32 *)(VAR5[2] + VAR9 * 2 + VAR8[2] * VAR10)) = VAR27;
            }
            else
            {
                *((VAR32 *)(VAR5[0] + VAR9 * 2 + VAR8[0] * VAR10)) = VAR26;
                *((VAR32 *)(VAR5[1] + VAR9 * 2 + VAR8[1] * VAR10)) = VAR25;
                *((VAR32 *)(VAR5[2] + VAR9 * 2 + VAR8[2] * VAR10)) = VAR27;
            }
        }
    }
}