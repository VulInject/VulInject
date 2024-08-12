static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, VAR3 **VAR8, FUN2 (*VAR9)[16], FUN3 (*VAR10)[4])
{
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16;
    int VAR17 = VAR2->VAR17;
    int VAR18 = VAR2->VAR18;
    VAR3 *VAR19, *VAR20;
    VAR12 = 0;
    VAR13 = 0;
    if (VAR2->VAR21)
    {
        for (VAR16 = 0; VAR16 < 4; VAR16++)
        {
            int VAR22 = VAR2->VAR23[VAR7][VAR16][0];
            int VAR24 = VAR2->VAR23[VAR7][VAR16][1];
            VAR11 = ((VAR24 & 3) << 2) | (VAR22 & 3);
            VAR14 = VAR17 * 16 + (VAR22 >> 2) + (VAR16 & 1) * 8;
            VAR15 = VAR18 * 16 + (VAR24 >> 2) + (VAR16 >> 1) * 8;
            VAR14 = FUN4(VAR14, -16, VAR2->VAR25);
            if (VAR14 == VAR2->VAR25)
                VAR11 &= ~3;
            VAR15 = FUN4(VAR15, -16, VAR2->VAR26);
            if (VAR15 == VAR2->VAR26)
                VAR11 &= ~12;
            VAR19 = VAR8[0] + (VAR15 * VAR2->VAR27) + (VAR14);
            if ((unsigned)VAR14 >= FUN5(VAR2->VAR28 - (VAR22 & 3) - 7, 0) || (unsigned)VAR15 >= FUN5(VAR2->VAR29 - (VAR24 & 3) - 7, 0))
            {
                VAR2->VAR30.FUN6(VAR2->VAR31, VAR19, VAR2->VAR27, VAR2->VAR27, 9, 9, VAR14, VAR15, VAR2->VAR28, VAR2->VAR29);
                VAR19 = VAR2->VAR31;
            }
            VAR20 = VAR4 + ((VAR16 & 1) * 8) + (VAR16 >> 1) * 8 * VAR2->VAR27;
            VAR9[1][VAR11](VAR20, VAR19, VAR2->VAR27);
            VAR12 += VAR2->VAR23[VAR7][VAR16][0] / 2;
            VAR13 += VAR2->VAR23[VAR7][VAR16][1] / 2;
        }
    }
    else
    {
        for (VAR16 = 0; VAR16 < 4; VAR16++)
        {
            FUN7(VAR2, VAR4 + ((VAR16 & 1) * 8) + (VAR16 >> 1) * 8 * VAR2->VAR27, VAR8[0], VAR17 * 16 + (VAR16 & 1) * 8, VAR18 * 16 + (VAR16 >> 1) * 8, VAR10[1], VAR2->VAR23[VAR7][VAR16][0], VAR2->VAR23[VAR7][VAR16][1]);
            VAR12 += VAR2->VAR23[VAR7][VAR16][0];
            VAR13 += VAR2->VAR23[VAR7][VAR16][1];
        }
    }
    if (!VAR32 || !(VAR2->VAR33 & VAR34))
        FUN8(VAR2, VAR5, VAR6, VAR8, VAR10[1], VAR12, VAR13);
}