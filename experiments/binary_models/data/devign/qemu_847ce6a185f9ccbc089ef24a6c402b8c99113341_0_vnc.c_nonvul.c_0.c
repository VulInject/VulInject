static int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4 && VAR2->VAR5 != -1)
    {
        VAR6 *VAR7 = VAR2->VAR7;
        int VAR8;
        int VAR9;
        int VAR10;
        int VAR11, VAR12;
        int VAR13;
        if (VAR2->VAR14.VAR15 && !VAR2->VAR16 && !VAR2->VAR17)
            return 0;
        if (!VAR3 && !VAR2->VAR16 && !VAR2->VAR17)
            return 0;
        VAR9 = 0;
        FUN2(VAR2, VAR18);
        FUN2(VAR2, 0);
        VAR10 = VAR2->VAR14.VAR15;
        FUN3(VAR2, 0);
        VAR11 = FUN4(VAR7->VAR19->VAR11, VAR2->VAR20);
        VAR12 = FUN4(VAR7->VAR19->VAR12, VAR2->VAR21);
        for (VAR8 = 0; VAR8 < VAR12; VAR8++)
        {
            int VAR22;
            int VAR23 = -1;
            for (VAR22 = 0; VAR22 < VAR11 / 16; VAR22++)
            {
                if (FUN5(VAR2->VAR24[VAR8], VAR22))
                {
                    if (VAR23 == -1)
                    {
                        VAR23 = VAR22;
                    }
                    FUN6(VAR2->VAR24[VAR8], VAR22);
                }
                else
                {
                    if (VAR23 != -1)
                    {
                        int VAR25 = FUN7(VAR2, VAR8, VAR23, VAR22);
                        VAR13 = FUN8(VAR2, VAR23 * 16, VAR8, (VAR22 - VAR23) * 16, VAR25);
                        VAR9 += VAR13;
                    }
                    VAR23 = -1;
                }
            }
            if (VAR23 != -1)
            {
                int VAR25 = FUN7(VAR2, VAR8, VAR23, VAR22);
                VAR13 = FUN8(VAR2, VAR23 * 16, VAR8, (VAR22 - VAR23) * 16, VAR25);
                VAR9 += VAR13;
            }
        }
        VAR2->VAR14.VAR26[VAR10] = (VAR9 >> 8) & 0xFF;
        VAR2->VAR14.VAR26[VAR10 + 1] = VAR9 & 0xFF;
        FUN9(VAR2);
        VAR2->VAR17 = 0;
        return VAR9;
    }
    if (VAR2->VAR5 == -1)
        FUN10(VAR2);
    return 0;
}