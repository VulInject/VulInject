static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8, *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    const int VAR15 = VAR2->VAR14 + FUN2(VAR2);
    const int VAR16 = VAR4->VAR17;
    const int VAR18 = VAR2->VAR18;
    const int VAR19 = 16 >> VAR2->VAR20;
    if (VAR4->VAR21)
    {
        for (VAR13 = VAR5; VAR13 < VAR6; VAR13++)
            for (VAR14 = VAR15 - FUN2(VAR2); VAR14 <= VAR15; VAR14++)
            {
                int VAR22, VAR23;
                VAR22 = VAR2->VAR22 = VAR13 + VAR14 * VAR2->VAR24;
                VAR4->VAR25 = VAR2->VAR26[VAR22];
                VAR23 = VAR2->VAR27.VAR23[VAR22];
                VAR4->VAR28 = VAR2->VAR29[VAR22];
                if (FUN2(VAR2))
                    VAR2->VAR30 = VAR2->VAR31 = !!FUN3(VAR23);
                VAR2->VAR13 = VAR13;
                VAR2->VAR14 = VAR14;
                VAR8 = VAR2->VAR27.VAR32.VAR33[0] + ((VAR13 << VAR18) + VAR14 * VAR2->VAR11) * 16;
                VAR9 = VAR2->VAR27.VAR32.VAR33[1] + (VAR13 << VAR18) * (8 << FUN4(VAR2)) + VAR14 * VAR2->VAR12 * VAR19;
                VAR10 = VAR2->VAR27.VAR32.VAR33[2] + (VAR13 << VAR18) * (8 << FUN4(VAR2)) + VAR14 * VAR2->VAR12 * VAR19;
                if (FUN5(VAR2))
                {
                    VAR11 = VAR4->VAR34 = VAR2->VAR11 * 2;
                    VAR12 = VAR4->VAR35 = VAR2->VAR12 * 2;
                    if (VAR14 & 1)
                    {
                        VAR8 -= VAR2->VAR11 * 15;
                        VAR9 -= VAR2->VAR12 * (VAR19 - 1);
                        VAR10 -= VAR2->VAR12 * (VAR19 - 1);
                    }
                }
                else
                {
                    VAR11 = VAR4->VAR34 = VAR2->VAR11;
                    VAR12 = VAR4->VAR35 = VAR2->VAR12;
                }
                FUN6(VAR2, VAR8, VAR9, VAR10, VAR11, VAR12, 0);
                if (FUN7(VAR2, VAR4, VAR23))
                    continue;
                VAR4->VAR36[0] = FUN8(VAR2, 0, VAR2->VAR27.VAR37[VAR22]);
                VAR4->VAR36[1] = FUN8(VAR2, 1, VAR2->VAR27.VAR37[VAR22]);
                if (FUN2(VAR2))
                {
                    FUN9(VAR2, VAR4, VAR13, VAR14, VAR8, VAR9, VAR10, VAR11, VAR12);
                }
                else
                {
                    FUN10(VAR2, VAR4, VAR13, VAR14, VAR8, VAR9, VAR10, VAR11, VAR12);
                }
            }
    }
    VAR4->VAR17 = VAR16;
    VAR2->VAR13 = VAR6;
    VAR2->VAR14 = VAR15 - FUN2(VAR2);
    VAR4->VAR36[0] = FUN8(VAR2, 0, VAR4->VAR38);
    VAR4->VAR36[1] = FUN8(VAR2, 1, VAR4->VAR38);
}