static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, VAR1 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10;
    VAR1 *VAR11 = VAR8 ? VAR3 : VAR4;
    VAR1 *VAR12 = VAR8 ? VAR4 : VAR5;
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        int VAR13 = VAR4[-VAR7];
        int VAR14 = (VAR11[0] + VAR12[0]) >> 1;
        int VAR15 = VAR4[+VAR7];
        int VAR16 = FUN2(VAR11[0] - VAR12[0]);
        int VAR17 = (FUN2(VAR3[-VAR7] - VAR13) + FUN2(VAR3[+VAR7] - VAR15)) >> 1;
        int VAR18 = (FUN2(VAR5[-VAR7] - VAR13) + FUN2(VAR5[+VAR7] - VAR15)) >> 1;
        int VAR19 = FUN3(VAR16 >> 1, VAR17, VAR18);
        int VAR20 = (VAR13 + VAR15) >> 1;
        int VAR21 = FUN2(VAR4[-VAR7 - 1] - VAR4[+VAR7 - 1]) + FUN2(VAR13 - VAR15) + FUN2(VAR4[-VAR7 + 1] - VAR4[+VAR7 + 1]) - 1;
        {
            int VAR22 = FUN2(VAR4[-VAR7 - 1 + (VAR23)] - VAR4[+VAR7 - 1 - (VAR23)]) + FUN2(VAR4[-VAR7 + (VAR23)] - VAR4[+VAR7 - (VAR23)]) + FUN2(VAR4[-VAR7 + 1 + (VAR23)] - VAR4[+VAR7 + 1 - (VAR23)]);
            if (VAR22 < VAR21)
            {
                VAR21 = VAR22;
                VAR20 = (VAR4[-VAR7 + (VAR23)] + VAR4[+VAR7 - (VAR23)]) >> 1;
                FUN4(-1)
                FUN4(-2)
            }
        }
    }
}