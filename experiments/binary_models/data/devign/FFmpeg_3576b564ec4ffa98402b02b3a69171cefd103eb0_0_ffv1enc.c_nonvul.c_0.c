static int FUN1(VAR1 *VAR2, VAR3 *VAR4[3], int VAR5, int VAR6, int VAR7[3])
{
    int VAR8, VAR9, VAR10, VAR11;
    const int VAR12 = VAR2->VAR13->VAR14 ? 3 : 2;
    VAR15 *VAR16[4][3];
    int VAR17 = VAR2->VAR18 <= 8;
    int VAR19 = VAR2->VAR18 > 0 ? VAR2->VAR18 : 8;
    int VAR20 = 1 << VAR19;
    VAR2->VAR21 = 0;
    memset(VAR2->VAR22, 0, VAR12 * VAR23 * (VAR5 + 6) * sizeof(*VAR2->VAR22));
    for (VAR9 = 0; VAR9 < VAR6; VAR9++)
    {
        for (VAR11 = 0; VAR11 < VAR12; VAR11++)
            for (VAR10 = 0; VAR10 < VAR23; VAR10++)
                VAR16[VAR10][VAR11] = VAR2->VAR22 + VAR10 * VAR12 * (VAR5 + 6) + ((VAR6 + VAR11 - VAR9) % VAR12) * (VAR5 + 6) + 3;
        for (VAR8 = 0; VAR8 < VAR5; VAR8++)
        {
            int VAR24, VAR25, VAR26, FUN2(VAR27);
            if (VAR17)
            {
                unsigned VAR28 = *((VAR29 *)(VAR4[0] + VAR8 * 4 + VAR7[0] * VAR9));
                VAR24 = VAR28 & 0xFF;
                VAR25 = (VAR28 >> 8) & 0xFF;
                VAR26 = (VAR28 >> 16) & 0xFF;
                VAR27 = VAR28 >> 24;
            }
            else
            {
                VAR24 = *((VAR30 *)(VAR4[0] + VAR8 * 2 + VAR7[0] * VAR9));
                VAR25 = *((VAR30 *)(VAR4[1] + VAR8 * 2 + VAR7[1] * VAR9));
                VAR26 = *((VAR30 *)(VAR4[2] + VAR8 * 2 + VAR7[2] * VAR9));
            }
            if (VAR2->VAR31 != 1)
            {
                VAR24 -= VAR25;
                VAR26 -= VAR25;
                VAR25 += (VAR24 + VAR26) >> 2;
                VAR24 += VAR20;
                VAR26 += VAR20;
            }
            VAR16[0][0][VAR8] = VAR25;
            VAR16[1][0][VAR8] = VAR24;
            VAR16[2][0][VAR8] = VAR26;
            VAR16[3][0][VAR8] = VAR27;
        }
        for (VAR10 = 0; VAR10 < 3 + VAR2->VAR32; VAR10++)
        {
            int VAR33;
            VAR16[VAR10][0][-1] = VAR16[VAR10][1][0];
            VAR16[VAR10][1][VAR5] = VAR16[VAR10][1][VAR5 - 1];
            if (VAR17 && VAR2->VAR31 == 0)
                VAR33 = FUN3(VAR2, VAR5, VAR16[VAR10], (VAR10 + 1) / 2, 9);
            else
                VAR33 = FUN3(VAR2, VAR5, VAR16[VAR10], (VAR10 + 1) / 2, VAR19 + (VAR2->VAR31 != 1));
            if (VAR33 < 0)
                return VAR33;
        }
    }
    return 0;
}