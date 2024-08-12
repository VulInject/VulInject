void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    INIT_CLIP VAR8 *VAR9 = (VAR8 *)VAR3;
    VAR10 *VAR11 = (VAR10 *)VAR5;
    VAR6 /= sizeof(VAR8);
    VAR11[0] += 32;
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        const int VAR12 = VAR11[VAR7 + 0 * 8] + VAR11[VAR7 + 4 * 8];
        const int VAR13 = VAR11[VAR7 + 0 * 8] - VAR11[VAR7 + 4 * 8];
        const int VAR14 = (VAR11[VAR7 + 2 * 8] >> 1) - VAR11[VAR7 + 6 * 8];
        const int VAR15 = (VAR11[VAR7 + 6 * 8] >> 1) + VAR11[VAR7 + 2 * 8];
        const int VAR16 = VAR12 + VAR15;
        const int VAR17 = VAR13 + VAR14;
        const int VAR18 = VAR13 - VAR14;
        const int VAR19 = VAR12 - VAR15;
        const int VAR20 = -VAR11[VAR7 + 3 * 8] + VAR11[VAR7 + 5 * 8] - VAR11[VAR7 + 7 * 8] - (VAR11[VAR7 + 7 * 8] >> 1);
        const int VAR21 = VAR11[VAR7 + 1 * 8] + VAR11[VAR7 + 7 * 8] - VAR11[VAR7 + 3 * 8] - (VAR11[VAR7 + 3 * 8] >> 1);
        const int VAR22 = -VAR11[VAR7 + 1 * 8] + VAR11[VAR7 + 7 * 8] + VAR11[VAR7 + 5 * 8] + (VAR11[VAR7 + 5 * 8] >> 1);
        const int VAR23 = VAR11[VAR7 + 3 * 8] + VAR11[VAR7 + 5 * 8] + VAR11[VAR7 + 1 * 8] + (VAR11[VAR7 + 1 * 8] >> 1);
        const int VAR24 = (VAR23 >> 2) + VAR20;
        const int VAR25 = VAR21 + (VAR22 >> 2);
        const int VAR26 = (VAR21 >> 2) - VAR22;
        const int VAR27 = VAR23 - (VAR20 >> 2);
        VAR11[VAR7 + 0 * 8] = VAR16 + VAR27;
        VAR11[VAR7 + 7 * 8] = VAR16 - VAR27;
        VAR11[VAR7 + 1 * 8] = VAR17 + VAR26;
        VAR11[VAR7 + 6 * 8] = VAR17 - VAR26;
        VAR11[VAR7 + 2 * 8] = VAR18 + VAR25;
        VAR11[VAR7 + 5 * 8] = VAR18 - VAR25;
        VAR11[VAR7 + 3 * 8] = VAR19 + VAR24;
        VAR11[VAR7 + 4 * 8] = VAR19 - VAR24;
    }
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        const int VAR12 = VAR11[0 + VAR7 * 8] + VAR11[4 + VAR7 * 8];
        const int VAR13 = VAR11[0 + VAR7 * 8] - VAR11[4 + VAR7 * 8];
        const int VAR14 = (VAR11[2 + VAR7 * 8] >> 1) - VAR11[6 + VAR7 * 8];
        const int VAR15 = (VAR11[6 + VAR7 * 8] >> 1) + VAR11[2 + VAR7 * 8];
        const int VAR16 = VAR12 + VAR15;
        const int VAR17 = VAR13 + VAR14;
        const int VAR18 = VAR13 - VAR14;
        const int VAR19 = VAR12 - VAR15;
        const int VAR20 = -VAR11[3 + VAR7 * 8] + VAR11[5 + VAR7 * 8] - VAR11[7 + VAR7 * 8] - (VAR11[7 + VAR7 * 8] >> 1);
        const int VAR21 = VAR11[1 + VAR7 * 8] + VAR11[7 + VAR7 * 8] - VAR11[3 + VAR7 * 8] - (VAR11[3 + VAR7 * 8] >> 1);
        const int VAR22 = -VAR11[1 + VAR7 * 8] + VAR11[7 + VAR7 * 8] + VAR11[5 + VAR7 * 8] + (VAR11[5 + VAR7 * 8] >> 1);
        const int VAR23 = VAR11[3 + VAR7 * 8] + VAR11[5 + VAR7 * 8] + VAR11[1 + VAR7 * 8] + (VAR11[1 + VAR7 * 8] >> 1);
        const int VAR24 = (VAR23 >> 2) + VAR20;
        const int VAR25 = VAR21 + (VAR22 >> 2);
        const int VAR26 = (VAR21 >> 2) - VAR22;
        const int VAR27 = VAR23 - (VAR20 >> 2);
        VAR9[VAR7 + 0 * VAR6] = FUN2(VAR9[VAR7 + 0 * VAR6] + ((VAR16 + VAR27) >> 6));
        VAR9[VAR7 + 1 * VAR6] = FUN2(VAR9[VAR7 + 1 * VAR6] + ((VAR17 + VAR26) >> 6));
        VAR9[VAR7 + 2 * VAR6] = FUN2(VAR9[VAR7 + 2 * VAR6] + ((VAR18 + VAR25) >> 6));
        VAR9[VAR7 + 3 * VAR6] = FUN2(VAR9[VAR7 + 3 * VAR6] + ((VAR19 + VAR24) >> 6));
        VAR9[VAR7 + 4 * VAR6] = FUN2(VAR9[VAR7 + 4 * VAR6] + ((VAR19 - VAR24) >> 6));
        VAR9[VAR7 + 5 * VAR6] = FUN2(VAR9[VAR7 + 5 * VAR6] + ((VAR18 - VAR25) >> 6));
        VAR9[VAR7 + 6 * VAR6] = FUN2(VAR9[VAR7 + 6 * VAR6] + ((VAR17 - VAR26) >> 6));
        VAR9[VAR7 + 7 * VAR6] = FUN2(VAR9[VAR7 + 7 * VAR6] + ((VAR16 - VAR27) >> 6));
    }
}