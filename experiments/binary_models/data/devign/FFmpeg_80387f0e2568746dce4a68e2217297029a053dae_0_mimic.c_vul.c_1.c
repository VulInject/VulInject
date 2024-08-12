static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9 = 0;
    for (VAR8 = 0; VAR8 < 3; VAR8++)
    {
        const int VAR10 = !!VAR8;
        const int VAR11 = FUN2(10000 - VAR3, VAR10 ? 1000 : 2000, 10000) << 2;
        const int VAR12 = VAR2->VAR13[VAR2->VAR14].VAR15[VAR8];
        const VAR16 *VAR17 = VAR2->VAR13[VAR2->VAR18].VAR19[VAR8];
        VAR16 *VAR20 = VAR2->VAR13[VAR2->VAR14].VAR19[VAR8];
        for (VAR6 = 0; VAR6 < VAR2->VAR21[VAR8]; VAR6++)
        {
            for (VAR7 = 0; VAR7 < VAR2->VAR22[VAR8]; VAR7++)
            {
                if (VAR5 || FUN3(&VAR2->VAR23) == VAR10)
                {
                    if (VAR10 || VAR5 || !FUN3(&VAR2->VAR23))
                    {
                        if (!FUN4(VAR2, VAR4, VAR11))
                            return 0;
                        VAR2->VAR24.FUN5(VAR20, VAR12, VAR2->VAR25);
                    }
                    else
                    {
                        unsigned int VAR26 = FUN6(&VAR2->VAR23, 4);
                        int VAR27 = (VAR2->VAR14 + VAR26) & 15;
                        VAR16 *VAR28 = VAR2->VAR13[VAR27].VAR19[0];
                        FUN7(&VAR2->VAR29[VAR27], VAR9, 0);
                        if (VAR28)
                        {
                            VAR28 += VAR17 - VAR2->VAR13[VAR2->VAR18].VAR19[VAR8];
                            VAR2->VAR24.VAR30[1][0](VAR20, VAR28, VAR12, 8);
                        }
                        else
                        {
                            FUN8(VAR2->VAR31, VAR32, "");
                        }
                    }
                }
                else
                {
                    FUN7(&VAR2->VAR29[VAR2->VAR18], VAR9, 0);
                    VAR2->VAR24.VAR30[1][0](VAR20, VAR17, VAR12, 8);
                }
                VAR17 += 8;
                VAR20 += 8;
            }
            VAR17 += (VAR12 - VAR2->VAR22[VAR8]) << 3;
            VAR20 += (VAR12 - VAR2->VAR22[VAR8]) << 3;
            FUN9(&VAR2->VAR29[VAR2->VAR14], VAR9++, 0);
        }
    }
    return 1;
}