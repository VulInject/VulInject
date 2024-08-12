static void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    VAR5 *VAR6, *VAR7, *VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    const int VAR13 = VAR4->VAR12 + VAR14;
    const int VAR15 = VAR2->VAR16;
    if (VAR2->VAR17)
    {
        for (VAR11 = 0; VAR11 < VAR4->VAR18; VAR11++)
        {
            for (VAR12 = VAR13 - VAR14; VAR12 <= VAR13; VAR12++)
            {
                int VAR19, VAR20, VAR21;
                VAR20 = VAR2->VAR20 = VAR11 + VAR12 * VAR4->VAR22;
                VAR2->VAR23 = VAR2->VAR24[VAR20];
                VAR21 = VAR4->VAR25.VAR21[VAR20];
                VAR2->VAR26 = VAR2->VAR27[VAR20];
                if (VAR14)
                    VAR2->VAR28 = VAR2->VAR29 = !!FUN2(VAR21);
                VAR4->VAR11 = VAR11;
                VAR4->VAR12 = VAR12;
                VAR6 = VAR4->VAR25.VAR30[0] + (VAR11 + VAR12 * VAR4->VAR9) * 16;
                VAR7 = VAR4->VAR25.VAR30[1] + (VAR11 + VAR12 * VAR4->VAR10) * 8;
                VAR8 = VAR4->VAR25.VAR30[2] + (VAR11 + VAR12 * VAR4->VAR10) * 8;
                if (VAR31)
                {
                    VAR9 = VAR2->VAR32 = VAR4->VAR9 * 2;
                    VAR10 = VAR2->VAR33 = VAR4->VAR10 * 2;
                    if (VAR12 & 1)
                    {
                        VAR6 -= VAR4->VAR9 * 15;
                        VAR7 -= VAR4->VAR10 * 7;
                        VAR8 -= VAR4->VAR10 * 7;
                    }
                }
                else
                {
                    VAR9 = VAR2->VAR32 = VAR4->VAR9;
                    VAR10 = VAR2->VAR33 = VAR4->VAR10;
                }
                FUN3(VAR2, VAR6, VAR7, VAR8, VAR9, VAR10, 0);
                if (FUN4(VAR2, VAR21))
                    continue;
                VAR2->VAR34[0] = FUN5(VAR2, 0, VAR4->VAR25.VAR35[VAR20]);
                VAR2->VAR34[1] = FUN5(VAR2, 1, VAR4->VAR25.VAR35[VAR20]);
                if (VAR14)
                {
                    FUN6(VAR2, VAR11, VAR12, VAR6, VAR7, VAR8, VAR9, VAR10);
                }
                else
                {
                    FUN7(VAR2, VAR11, VAR12, VAR6, VAR7, VAR8, VAR9, VAR10);
                }
            }
        }
    }
    VAR2->VAR16 = VAR15;
    VAR4->VAR11 = 0;
    VAR4->VAR12 = VAR13 - VAR14;
}