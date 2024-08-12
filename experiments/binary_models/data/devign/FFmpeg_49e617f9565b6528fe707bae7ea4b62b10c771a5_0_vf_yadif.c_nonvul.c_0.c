static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, VAR1 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11;
    VAR1 *VAR12 = VAR9 ? VAR3 : VAR4;
    VAR1 *VAR13 = VAR9 ? VAR4 : VAR5;
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        int VAR14 = VAR4[VAR8];
        int VAR15 = (VAR12[0] + VAR13[0]) >> 1;
        int VAR16 = VAR4[VAR7];
        int VAR17 = FUN2(VAR12[0] - VAR13[0]);
        int VAR18 = (FUN2(VAR3[VAR8] - VAR14) + FUN2(VAR3[VAR7] - VAR16)) >> 1;
        int VAR19 = (FUN2(VAR5[VAR8] - VAR14) + FUN2(VAR5[VAR7] - VAR16)) >> 1;
        int VAR20 = FUN3(VAR17 >> 1, VAR18, VAR19);
        int VAR21 = (VAR14 + VAR16) >> 1;
        int VAR22 = FUN2(VAR4[VAR8 - 1] - VAR4[VAR7 - 1]) + FUN2(VAR14 - VAR16) + FUN2(VAR4[VAR8 + 1] - VAR4[VAR7 + 1]) - 1;
        {
            int VAR23 = FUN2(VAR4[VAR8 - 1 + (VAR24)] - VAR4[VAR7 - 1 - (VAR24)]) + FUN2(VAR4[VAR8 + (VAR24)] - VAR4[VAR7 - (VAR24)]) + FUN2(VAR4[VAR8 + 1 + (VAR24)] - VAR4[VAR7 + 1 - (VAR24)]);
            if (VAR23 < VAR22)
            {
                VAR22 = VAR23;
                VAR21 = (VAR4[VAR8 + (VAR24)] + VAR4[VAR7 - (VAR24)]) >> 1;
                FUN4(-1)
                FUN4(-2)
            }
        }
    }
}