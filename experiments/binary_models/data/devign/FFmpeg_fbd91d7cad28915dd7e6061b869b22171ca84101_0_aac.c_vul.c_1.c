static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    const int VAR15 = VAR8->VAR16[0] == VAR17;
    const int VAR18 = VAR15 ? 7 : VAR2->VAR19.VAR20 == VAR21 ? 20
                                                                             : 12;
    for (VAR9 = 0; VAR9 < VAR8->VAR22; VAR9++)
    {
        VAR4->VAR23[VAR9] = FUN2(VAR6, 2 - VAR15);
        if (VAR4->VAR23[VAR9])
            VAR13 = FUN3(VAR6);
        for (VAR10 = 0; VAR10 < VAR4->VAR23[VAR9]; VAR10++)
        {
            int VAR24;
            VAR4->VAR25[VAR9][VAR10] = FUN2(VAR6, 6 - 2 * VAR15);
            if ((VAR4->VAR26[VAR9][VAR10] = FUN2(VAR6, 5 - 2 * VAR15)) > VAR18)
            {
                FUN4(VAR2->VAR27, VAR28, "", VAR4->VAR26[VAR9][VAR10], VAR18);
                VAR4->VAR26[VAR9][VAR10] = 0;
                return -1;
            }
            VAR4->VAR29[VAR9][VAR10] = FUN3(VAR6);
            VAR14 = FUN3(VAR6);
            VAR12 = VAR13 + 3 - VAR14;
            VAR24 = 2 * VAR14 + VAR13;
            for (VAR11 = 0; VAR11 < VAR4->VAR26[VAR9][VAR10]; VAR11++)
                VAR4->VAR30[VAR9][VAR10][VAR11] = VAR31[VAR24][FUN2(VAR6, VAR12)];
        }
    }
    return 0;
}