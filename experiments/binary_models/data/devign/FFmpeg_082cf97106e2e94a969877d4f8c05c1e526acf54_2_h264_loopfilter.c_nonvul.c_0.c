static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[8], int VAR7[2])
{
    int VAR8;
    for (VAR8 = 0; VAR8 < 8; VAR8++, VAR4 += VAR5)
    {
        int VAR9;
        int VAR10;
        int VAR11;
        int VAR12;
        int VAR13 = VAR8;
        if (VAR6[VAR13] == 0)
        {
            continue;
        }
        VAR12 = VAR14 ? (VAR8 >> 2) : (VAR8 & 1);
        VAR9 = VAR7[VAR12] + VAR2->VAR15;
        VAR10 = (VAR16 + 52)[VAR9];
        VAR11 = (VAR17 + 52)[VAR7[VAR12] + VAR2->VAR18];
        if (VAR6[VAR13] < 4)
        {
            const int VAR19 = (VAR20 + 52)[VAR9][VAR6[VAR13]] + 1;
            const int VAR21 = VAR4[-1];
            const int VAR22 = VAR4[-2];
            const int VAR23 = VAR4[0];
            const int VAR24 = VAR4[1];
            if (FUN2(VAR21 - VAR23) < VAR10 && FUN2(VAR22 - VAR21) < VAR11 && FUN2(VAR24 - VAR23) < VAR11)
            {
                const int VAR25 = FUN3((((VAR23 - VAR21) << 2) + (VAR22 - VAR24) + 4) >> 3, -VAR19, VAR19);
                VAR4[-1] = FUN4(VAR21 + VAR25);
                VAR4[0] = FUN4(VAR23 - VAR25);
                FUN5(VAR2->VAR26.VAR27, "", VAR8, VAR7[VAR12], VAR9, VAR10, VAR11, VAR19, VAR6[VAR13], VAR4[-3], VAR22, VAR21, VAR23, VAR24, VAR4[2], VAR22, VAR4[-1], VAR4[0], VAR24);
            }
        }
        else
        {
            const int VAR21 = VAR4[-1];
            const int VAR22 = VAR4[-2];
            const int VAR23 = VAR4[0];
            const int VAR24 = VAR4[1];
            if (FUN2(VAR21 - VAR23) < VAR10 && FUN2(VAR22 - VAR21) < VAR11 && FUN2(VAR24 - VAR23) < VAR11)
            {
                VAR4[-1] = (2 * VAR22 + VAR21 + VAR24 + 2) >> 2;
                VAR4[0] = (2 * VAR24 + VAR23 + VAR22 + 2) >> 2;
                FUN5(VAR2->VAR26.VAR27, "", VAR8, VAR4[-3], VAR22, VAR21, VAR23, VAR24, VAR4[2], VAR4[-3], VAR4[-2], VAR4[-1], VAR4[0], VAR4[1], VAR4[2]);
            }
        }
    }
}