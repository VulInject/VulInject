static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8, *VAR9, *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    const int VAR15 = VAR4->VAR14 + FUN2(VAR2);
    const int VAR16 = VAR4->VAR17;
    const int VAR18 = VAR2->VAR18;
    const int VAR19 = 16 >> VAR2->VAR20;
    if (VAR2->VAR21)
        return;
    if (VAR4->VAR22)
    {
        for (VAR13 = VAR5; VAR13 < VAR6; VAR13++)
            for (VAR14 = VAR15 - FUN2(VAR2); VAR14 <= VAR15; VAR14++)
            {
                int VAR23, VAR24;
                VAR23 = VAR4->VAR23 = VAR13 + VAR14 * VAR2->VAR25;
                VAR24 = VAR2->VAR26.VAR24[VAR23];
                if (FUN2(VAR2))
                    VAR4->VAR27 = VAR4->VAR28 = !!FUN3(VAR24);
                VAR4->VAR13 = VAR13;
                VAR4->VAR14 = VAR14;
                VAR8 = VAR2->VAR26.VAR29->VAR30[0] + ((VAR13 << VAR18) + VAR14 * VAR4->VAR11) * 16;
                VAR9 = VAR2->VAR26.VAR29->VAR30[1] + (VAR13 << VAR18) * (8 << FUN4(VAR2)) + VAR14 * VAR4->VAR12 * VAR19;
                VAR10 = VAR2->VAR26.VAR29->VAR30[2] + (VAR13 << VAR18) * (8 << FUN4(VAR2)) + VAR14 * VAR4->VAR12 * VAR19;
                if (FUN5(VAR4))
                {
                    VAR11 = VAR4->VAR31 = VAR4->VAR11 * 2;
                    VAR12 = VAR4->VAR32 = VAR4->VAR12 * 2;
                    if (VAR14 & 1)
                    {
                        VAR8 -= VAR4->VAR11 * 15;
                        VAR9 -= VAR4->VAR12 * (VAR19 - 1);
                        VAR10 -= VAR4->VAR12 * (VAR19 - 1);
                    }
                }
                else
                {
                    VAR11 = VAR4->VAR31 = VAR4->VAR11;
                    VAR12 = VAR4->VAR32 = VAR4->VAR12;
                }
                FUN6(VAR2, VAR4, VAR8, VAR9, VAR10, VAR11, VAR12, 0);
                if (FUN7(VAR2, VAR4, VAR24))
                    continue;
                VAR4->VAR33[0] = FUN8(VAR2, 0, VAR2->VAR26.VAR34[VAR23]);
                VAR4->VAR33[1] = FUN8(VAR2, 1, VAR2->VAR26.VAR34[VAR23]);
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
    VAR4->VAR13 = VAR6;
    VAR4->VAR14 = VAR15 - FUN2(VAR2);
    VAR4->VAR33[0] = FUN8(VAR2, 0, VAR4->VAR35);
    VAR4->VAR33[1] = FUN8(VAR2, 1, VAR4->VAR35);
}