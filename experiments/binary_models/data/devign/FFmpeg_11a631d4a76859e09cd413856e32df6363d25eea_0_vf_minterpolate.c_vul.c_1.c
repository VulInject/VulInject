static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7, VAR8;
    for (VAR8 = 0; VAR8 < VAR2->VAR9; VAR8++)
    {
        int VAR10 = VAR5->VAR10;
        int VAR11 = VAR5->VAR11;
        int VAR12 = VAR8 == 1 || VAR8 == 2;
        for (VAR7 = 0; VAR7 < VAR11; VAR7++)
            for (VAR6 = 0; VAR6 < VAR10; VAR6++)
            {
                int VAR13, VAR14;
                int VAR15 = 0;
                int VAR16, VAR17 = 0;
                VAR18 *VAR19 = &VAR2->VAR20[VAR6 + VAR7 * VAR5->VAR10];
                for (VAR16 = 0; VAR16 < VAR19->VAR21; VAR16++)
                    VAR15 += VAR19->VAR22[VAR16];
                if (!VAR15 || !VAR19->VAR21)
                {
                    VAR19->VAR22[0] = VAR23 - VAR3;
                    VAR19->VAR24[0] = 1;
                    VAR19->VAR25[0][0] = 0;
                    VAR19->VAR25[0][1] = 0;
                    VAR19->VAR22[1] = VAR3;
                    VAR19->VAR24[1] = 2;
                    VAR19->VAR25[1][0] = 0;
                    VAR19->VAR25[1][1] = 0;
                    VAR19->VAR21 = 2;
                    VAR15 = VAR23;
                }
                for (VAR16 = 0; VAR16 < VAR19->VAR21; VAR16++)
                {
                    VAR26 *VAR27 = &VAR2->VAR28[VAR19->VAR24[VAR16]];
                    if (VAR12)
                    {
                        VAR13 = (VAR6 >> VAR2->VAR29) + (VAR19->VAR25[VAR16][0] >> VAR2->VAR29);
                        VAR14 = (VAR7 >> VAR2->VAR30) + (VAR19->VAR25[VAR16][1] >> VAR2->VAR30);
                    }
                    else
                    {
                        VAR13 = VAR6 + VAR19->VAR25[VAR16][0];
                        VAR14 = VAR7 + VAR19->VAR25[VAR16][1];
                    }
                    VAR17 += VAR19->VAR22[VAR16] * VAR27->VAR31->VAR32[VAR8][VAR13 + VAR14 * VAR27->VAR31->VAR33[VAR8]];
                }
                VAR17 = FUN2(VAR17, VAR15);
                if (VAR12)
                    VAR5->VAR32[VAR8][(VAR6 >> VAR2->VAR29) + (VAR7 >> VAR2->VAR30) * VAR5->VAR33[VAR8]] = VAR17;
                else
                    VAR5->VAR32[VAR8][VAR6 + VAR7 * VAR5->VAR33[VAR8]] = VAR17;
            }
    }
}