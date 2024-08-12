static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12;
    int VAR13 = 0, VAR14 = 0, VAR15, VAR16, VAR17, VAR18, VAR19;
    const int VAR20 = VAR2->VAR21;
    VAR3 *VAR22;
    int VAR23 = 16, VAR24 = 16;
    for (VAR11 = 0; VAR11 < VAR8; VAR11 += 16)
    {
        VAR22 = VAR4;
        VAR23 = 16;
        if (VAR11 + 16 > VAR8)
            VAR24 = VAR8 - VAR11;
        for (VAR10 = 0; VAR10 < VAR7; VAR10 += 16, VAR22 += 16 * VAR20)
        {
            if (FUN2(VAR6) <= 0)
            {
                FUN3(VAR2->VAR25, VAR26, "");
                return VAR27;
            }
            if (VAR10 + 16 > VAR7)
                VAR23 = VAR7 - VAR10;
            VAR17 = FUN4(VAR6);
            if (VAR17 & VAR28)
            {
                if (FUN2(VAR6) < VAR23 * VAR24 * VAR20)
                {
                    FUN3(VAR2->VAR25, VAR26, "");
                    return VAR27;
                }
                FUN5(VAR22, VAR23, VAR24, VAR6, VAR20, VAR2->VAR29, VAR9);
            }
            else
            {
                if (VAR17 & VAR30)
                    VAR13 = FUN6(VAR6, VAR20, VAR2->VAR29);
                if (VAR17 & VAR31)
                    VAR14 = FUN6(VAR6, VAR20, VAR2->VAR29);
                VAR15 = 0;
                if (VAR17 & VAR32)
                    VAR15 = FUN4(VAR6);
                VAR16 = !!(VAR17 & VAR33);
                FUN7(VAR22, 0, 0, VAR23, VAR24, VAR13, VAR20, VAR9);
                if (FUN2(VAR6) < VAR15 * (VAR16 * VAR20 + 2))
                {
                    FUN3(VAR2->VAR25, VAR26, "");
                    return VAR27;
                }
                for (VAR12 = 0; VAR12 < VAR15; VAR12++)
                {
                    if (VAR16)
                        VAR14 = FUN6(VAR6, VAR20, VAR2->VAR29);
                    VAR18 = FUN4(VAR6);
                    VAR19 = FUN4(VAR6);
                    FUN7(VAR22, VAR18 >> 4, VAR18 & 0xF, (VAR19 >> 4) + 1, (VAR19 & 0xF) + 1, VAR14, VAR20, VAR9);
                }
            }
        }
        VAR4 += VAR9 * 16;
    }
    return 0;
}