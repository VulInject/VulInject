static void FUN1(VAR1 *VAR2)
{
    int VAR3[VAR4 / 2 + 1];
    int VAR5[VAR4 / 2 + 1];
    int VAR6, VAR7;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        int VAR8 = (VAR2[VAR7] >> 7) & 0x1FF;
        int VAR9 = VAR2[VAR7] & 0x7f;
        int VAR10 = VAR11[VAR8] << 16;
        int VAR12 = (VAR11[VAR8 + 1] - VAR11[VAR8]) * ((VAR9 << 8) + 0x80) << 1;
        VAR2[VAR7] = -(FUN2(1 << 15, VAR10 + VAR12) >> 16);
    }
    VAR3[0] = 1 << 28;
    VAR3[1] = (VAR2[0] << 14) + (VAR2[2] << 14);
    VAR3[2] = VAR2[0] * VAR2[2] + (2 << 28);
    VAR5[0] = 1 << 28;
    VAR5[1] = (VAR2[1] << 14) + (VAR2[3] << 14);
    VAR5[2] = VAR2[1] * VAR2[3] + (2 << 28);
    for (VAR6 = 2; VAR6 < VAR4 / 2; VAR6++)
    {
        VAR3[VAR6 + 1] = VAR3[VAR6 - 1] + FUN3(VAR3[VAR6], VAR2[2 * VAR6]);
        VAR5[VAR6 + 1] = VAR5[VAR6 - 1] + FUN3(VAR5[VAR6], VAR2[2 * VAR6 + 1]);
        for (VAR7 = VAR6; VAR7 >= 2; VAR7--)
        {
            VAR3[VAR7] = FUN3(VAR3[VAR7 - 1], VAR2[2 * VAR6]) + (VAR3[VAR7] >> 1) + (VAR3[VAR7 - 2] >> 1);
            VAR5[VAR7] = FUN3(VAR5[VAR7 - 1], VAR2[2 * VAR6 + 1]) + (VAR5[VAR7] >> 1) + (VAR5[VAR7 - 2] >> 1);
        }
        VAR3[0] >>= 1;
        VAR5[0] >>= 1;
        VAR3[1] = ((VAR2[2 * VAR6] << 16 >> VAR6) + VAR3[1]) >> 1;
        VAR5[1] = ((VAR2[2 * VAR6 + 1] << 16 >> VAR6) + VAR5[1]) >> 1;
    }
    for (VAR6 = 0; VAR6 < VAR4 / 2; VAR6++)
    {
        int64_t VAR13 = VAR3[VAR6 + 1] + VAR3[VAR6];
        int64_t VAR14 = VAR5[VAR6 + 1] - VAR5[VAR6];
        VAR2[VAR6] = FUN4(((VAR13 + VAR14) << 3) + (1 << 15)) >> 16;
        VAR2[VAR4 - VAR6 - 1] = FUN4(((VAR13 - VAR14) << 3) + (1 << 15)) >> 16;
    }
}