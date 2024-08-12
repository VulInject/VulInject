static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR2->VAR11 = FUN2(VAR2->VAR12, VAR2->VAR13);
    VAR2->VAR14 = FUN2(VAR2->VAR15, VAR2->VAR16);
    VAR2->VAR17 = FUN3(VAR2->VAR11, VAR2->VAR14 * sizeof(VAR18));
    if (!VAR2->VAR17)
        return FUN4(VAR19);
    for (VAR3 = 0, VAR5 = 0; VAR5 < VAR2->VAR14; VAR5++)
        for (VAR4 = 0; VAR4 < VAR2->VAR11; VAR4++, VAR3++)
        {
            VAR18 *VAR17 = VAR2->VAR17 + VAR3;
            VAR17->VAR20 = FUN5(VAR2->VAR21, sizeof(VAR22));
            if (!VAR17->VAR20)
                return FUN4(VAR19);
            for (VAR6 = 0; VAR6 < VAR2->VAR21; VAR6++)
            {
                VAR22 *VAR20 = VAR17->VAR20 + VAR6;
                int VAR23, VAR24, VAR25;
                VAR20->VAR26[0][0] = VAR20->VAR27[0][0] = VAR4 * VAR2->VAR13;
                VAR20->VAR26[0][1] = VAR20->VAR27[0][1] = FUN6((VAR4 + 1) * VAR2->VAR13, VAR2->VAR12);
                VAR20->VAR26[1][0] = VAR20->VAR27[1][0] = VAR5 * VAR2->VAR16;
                VAR20->VAR26[1][1] = VAR20->VAR27[1][1] = FUN6((VAR5 + 1) * VAR2->VAR16, VAR2->VAR15);
                if (VAR6 > 0)
                    for (VAR24 = 0; VAR24 < 2; VAR24++)
                        for (VAR25 = 0; VAR25 < 2; VAR25++)
                            VAR20->VAR26[VAR24][VAR25] = VAR20->VAR27[VAR24][VAR25] = FUN7(VAR20->VAR26[VAR24][VAR25], VAR2->VAR28[VAR24]);
                if (VAR23 = FUN8(VAR20, VAR8, VAR10, VAR2->VAR29[VAR6], VAR6 ? 1 << VAR2->VAR28[0] : 1, VAR6 ? 1 << VAR2->VAR28[1] : 1, VAR2->VAR30))
                    return VAR23;
            }
        }
    return 0;
}