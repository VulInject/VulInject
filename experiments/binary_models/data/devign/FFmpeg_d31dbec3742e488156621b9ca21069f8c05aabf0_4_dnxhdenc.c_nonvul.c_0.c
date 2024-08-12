static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    uint16_t VAR5[64] = {
        1,
    };
    int VAR6, VAR7;
    FUN2(VAR2->VAR8.VAR9, VAR2->VAR10, (VAR2->VAR8.VAR9->VAR11 + 1) * 64 * sizeof(int), VAR12);
    FUN2(VAR2->VAR8.VAR9, VAR2->VAR13, (VAR2->VAR8.VAR9->VAR11 + 1) * 64 * sizeof(int), VAR12);
    FUN2(VAR2->VAR8.VAR9, VAR2->VAR14, (VAR2->VAR8.VAR9->VAR11 + 1) * 64 * 2 * sizeof(VAR15), VAR12);
    FUN2(VAR2->VAR8.VAR9, VAR2->VAR16, (VAR2->VAR8.VAR9->VAR11 + 1) * 64 * 2 * sizeof(VAR15), VAR12);
    for (VAR7 = 1; VAR7 < 64; VAR7++)
    {
        int VAR17 = VAR2->VAR8.VAR18.VAR19[VAR20[VAR7]];
        VAR5[VAR17] = VAR2->VAR21->VAR22[VAR7];
    }
    FUN3(&VAR2->VAR8.VAR18, VAR2->VAR10, VAR2->VAR14, VAR5, VAR2->VAR8.VAR23, 1, VAR2->VAR8.VAR9->VAR11, 1);
    for (VAR7 = 1; VAR7 < 64; VAR7++)
    {
        int VAR17 = VAR2->VAR8.VAR18.VAR19[VAR20[VAR7]];
        VAR5[VAR17] = VAR2->VAR21->VAR24[VAR7];
    }
    FUN3(&VAR2->VAR8.VAR18, VAR2->VAR13, VAR2->VAR16, VAR5, VAR2->VAR8.VAR23, 1, VAR2->VAR8.VAR9->VAR11, 1);
    for (VAR6 = 1; VAR6 <= VAR2->VAR8.VAR9->VAR11; VAR6++)
    {
        for (VAR7 = 0; VAR7 < 64; VAR7++)
        {
            VAR2->VAR10[VAR6][VAR7] <<= 2;
            VAR2->VAR13[VAR6][VAR7] <<= 2;
            VAR2->VAR14[VAR6][0][VAR7] <<= 2;
            VAR2->VAR14[VAR6][1][VAR7] <<= 2;
            VAR2->VAR16[VAR6][0][VAR7] <<= 2;
            VAR2->VAR16[VAR6][1][VAR7] <<= 2;
        }
    }
    return 0;
VAR12:
    return -1;
}