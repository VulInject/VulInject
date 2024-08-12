static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const int VAR7[2])
{
    int VAR8, VAR9, VAR10;
    static const SoftFloat VAR11[4] = {{760155524, 0}, {0x20000000, 1}, {758351638, 1}, {625000000, 34}};
    for (VAR8 = 0; VAR8 < VAR6->VAR12; VAR8++)
    {
        int VAR13 = !((VAR8 == VAR7[1]) || (VAR8 == VAR7[0]));
        for (VAR9 = 0; VAR9 < VAR4->VAR14; VAR9++)
        {
            SoftFloat VAR15, VAR16;
            SoftFloat VAR17[2];
            VAR17[0] = VAR17[1] = VAR18;
            for (VAR10 = VAR4->VAR19[VAR9] - VAR4->VAR20[1]; VAR10 < VAR4->VAR19[VAR9 + 1] - VAR4->VAR20[1]; VAR10++)
            {
                const SoftFloat VAR21 = FUN2(VAR4->VAR22[VAR8][VAR10], FUN3(VAR23, VAR4->VAR24[VAR8][VAR10]));
                VAR4->VAR25[VAR8][VAR10] = FUN4(FUN5(VAR21, VAR4->VAR24[VAR8][VAR10]));
                VAR4->VAR26[VAR8][VAR10] = FUN4(FUN5(VAR21, FUN6(VAR6->VAR27[VAR8 + 1][VAR10], 0)));
                if (!VAR4->VAR28[VAR8][VAR10])
                {
                    if (VAR13)
                    {
                        VAR4->VAR29[VAR8][VAR10] = FUN4(FUN2(VAR4->VAR22[VAR8][VAR10], FUN5(FUN3(VAR23, VAR4->VAR30[VAR8][VAR10]), FUN3(VAR23, VAR4->VAR24[VAR8][VAR10]))));
                    }
                    else
                    {
                        VAR4->VAR29[VAR8][VAR10] = FUN4(FUN2(VAR4->VAR22[VAR8][VAR10], FUN3(VAR23, VAR4->VAR30[VAR8][VAR10])));
                    }
                }
                else
                {
                    VAR4->VAR29[VAR8][VAR10] = FUN4(FUN2(FUN5(VAR4->VAR22[VAR8][VAR10], VAR4->VAR24[VAR8][VAR10]), FUN5(FUN3(VAR23, VAR4->VAR30[VAR8][VAR10]), FUN3(VAR23, VAR4->VAR24[VAR8][VAR10]))));
                }
            }
            for (VAR10 = VAR4->VAR19[VAR9] - VAR4->VAR20[1]; VAR10 < VAR4->VAR19[VAR9 + 1] - VAR4->VAR20[1]; VAR10++)
            {
                VAR17[0] = FUN3(VAR17[0], VAR4->VAR22[VAR8][VAR10]);
                VAR17[1] = FUN3(VAR17[1], VAR4->VAR30[VAR8][VAR10]);
            }
            VAR16 = FUN5(VAR11[VAR4->VAR31], FUN4(FUN2(FUN3(VAR32, VAR17[0]), FUN3(VAR32, VAR17[1]))));
            if (FUN7(VAR16, VAR33))
                VAR16 = VAR33;
            for (VAR10 = VAR4->VAR19[VAR9] - VAR4->VAR20[1]; VAR10 < VAR4->VAR19[VAR9 + 1] - VAR4->VAR20[1]; VAR10++)
            {
                SoftFloat VAR34 = FUN2(FUN5(VAR4->VAR25[VAR8][VAR10], VAR16), VAR4->VAR29[VAR8][VAR10]);
                if (FUN7(VAR4->VAR25[VAR8][VAR10], VAR34))
                    VAR4->VAR25[VAR8][VAR10] = VAR34;
                if (FUN7(VAR4->VAR29[VAR8][VAR10], VAR16))
                    VAR4->VAR29[VAR8][VAR10] = VAR16;
            }
            VAR17[0] = VAR17[1] = VAR18;
            for (VAR10 = VAR4->VAR19[VAR9] - VAR4->VAR20[1]; VAR10 < VAR4->VAR19[VAR9 + 1] - VAR4->VAR20[1]; VAR10++)
            {
                VAR17[0] = FUN3(VAR17[0], VAR4->VAR22[VAR8][VAR10]);
                VAR17[1] = FUN3(VAR17[1], FUN5(FUN5(VAR4->VAR30[VAR8][VAR10], VAR4->VAR29[VAR8][VAR10]), VAR4->VAR29[VAR8][VAR10]));
                VAR17[1] = FUN3(VAR17[1], FUN5(VAR4->VAR26[VAR8][VAR10], VAR4->VAR26[VAR8][VAR10]));
                if (VAR13 && !VAR4->VAR26[VAR8][VAR10].VAR35)
                    VAR17[1] = FUN3(VAR17[1], FUN5(VAR4->VAR25[VAR8][VAR10], VAR4->VAR25[VAR8][VAR10]));
            }
            VAR15 = FUN4(FUN2(FUN3(VAR32, VAR17[0]), FUN3(VAR32, VAR17[1])));
            if (FUN7(VAR15, VAR36))
                VAR15 = VAR36;
            for (VAR10 = VAR4->VAR19[VAR9] - VAR4->VAR20[1]; VAR10 < VAR4->VAR19[VAR9 + 1] - VAR4->VAR20[1]; VAR10++)
            {
                VAR4->VAR29[VAR8][VAR10] = FUN5(VAR4->VAR29[VAR8][VAR10], VAR15);
                VAR4->VAR25[VAR8][VAR10] = FUN5(VAR4->VAR25[VAR8][VAR10], VAR15);
                VAR4->VAR26[VAR8][VAR10] = FUN5(VAR4->VAR26[VAR8][VAR10], VAR15);
            }
        }
    }