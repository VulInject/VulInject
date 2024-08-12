static void FUN1(int VAR1, int VAR2, int VAR3, int VAR4, int VAR5, const int *VAR6, const int *VAR7, const int *VAR8, const int *VAR9, VAR10 *VAR11, VAR10 *VAR12)
{
    uint32_t VAR13 = (1 << VAR4) - 1;
    int VAR14 = VAR5 ? VAR2 : VAR2 * 16;
    int VAR15 = VAR5 ? 1 : 16;
    int VAR16 = VAR5 ? VAR3 : 1;
    int VAR17, VAR18;
    for (VAR17 = 0; VAR17 < 2; VAR17++)
    {
        int VAR19 = VAR14 + VAR17 * VAR15, VAR20, VAR21;
        FUN2(VAR19, 0, VAR21 = FUN3() & VAR13);
        FUN4(VAR19, -1, VAR20 = VAR21, VAR6[VAR1] >> 2);
        for (VAR18 = 1; VAR18 < 8; VAR18++)
        {
            FUN4(VAR19, -1 - VAR18, VAR20, VAR7[VAR1]);
            FUN4(VAR19, VAR18, VAR21, VAR7[VAR1]);
        }
    }
    for (VAR17 = 2; VAR17 < 4; VAR17++)
    {
        int VAR19 = VAR14 + VAR17 * VAR15, VAR20, VAR21;
        FUN2(VAR19, 0, VAR21 = FUN3() & VAR13);
        FUN4(VAR19, -1, VAR20 = VAR21, VAR6[VAR1] >> 2);
        for (VAR18 = 1; VAR18 < 4; VAR18++)
        {
            FUN4(VAR19, -1 - VAR18, VAR20, VAR7[VAR1]);
            FUN4(VAR19, VAR18, VAR21, VAR7[VAR1]);
        }
        for (VAR18 = 4; VAR18 < 8; VAR18++)
        {
            FUN2(VAR19, -1 - VAR18, FUN3() & VAR13);
            FUN2(VAR19, VAR18, FUN3() & VAR13);
        }
    }
    for (VAR17 = 4; VAR17 < 6; VAR17++)
    {
        int VAR19 = VAR14 + VAR17 * VAR15, VAR22, VAR23, VAR20, VAR21, VAR24, VAR25;
        FUN2(VAR19, 0, VAR21 = FUN3() & VAR13);
        FUN4(VAR19, 1, VAR24 = VAR21, VAR9[VAR1]);
        FUN4(VAR19, 2, VAR25 = VAR24, VAR9[VAR1]);
        FUN4(VAR19, 3, VAR25, VAR9[VAR1]);
        FUN4(VAR19, -1, VAR20 = VAR21, VAR6[VAR1] >> 2);
        FUN4(VAR19, -2, VAR23 = VAR20, VAR9[VAR1]);
        FUN4(VAR19, -3, VAR22 = VAR23, VAR9[VAR1]);
        FUN4(VAR19, -4, VAR22, VAR9[VAR1]);
        for (VAR18 = 4; VAR18 < 8; VAR18++)
        {
            FUN2(VAR19, -1 - VAR18, FUN3() & VAR13);
            FUN2(VAR19, VAR18, FUN3() & VAR13);
        }
    }
    for (VAR17 = 6; VAR17 < 8; VAR17++)
    {
        int VAR19 = VAR14 + VAR17 * VAR15;
        for (VAR18 = 0; VAR18 < 8; VAR18++)
        {
            FUN2(VAR19, -1 - VAR18, FUN3() & VAR13);
            FUN2(VAR19, VAR18, FUN3() & VAR13);
        }
    }
}