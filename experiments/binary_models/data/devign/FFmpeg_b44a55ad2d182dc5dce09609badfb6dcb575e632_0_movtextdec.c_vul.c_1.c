static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    int VAR9, VAR10, VAR11;
    AVBPrint VAR12;
    char *VAR13 = VAR6->VAR3;
    char *VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int **VAR19 = {
        0,
    };
    int **VAR20 = {
        0,
    };
    int **VAR21 = {
        0,
    };
    const VAR22 *VAR23;
    int VAR24, VAR25;
    int *VAR26;
    int *VAR27;
    if (!VAR13 || VAR6->VAR28 < 2)
        return VAR29;
    if (VAR6->VAR28 == 2)
        return FUN2(VAR13) == 0 ? 0 : VAR29;
    VAR15 = FUN2(VAR13);
    VAR14 = VAR13 + FUN3(2 + VAR15, VAR6->VAR28);
    VAR13 += 2;
    VAR10 = FUN4(VAR6->VAR30, VAR2->VAR31, (VAR32){1, 100});
    VAR11 = FUN4(VAR6->VAR30 + VAR6->VAR33, VAR2->VAR31, (VAR32){1, 100});
    VAR18 = 0;
    FUN5(&VAR12, 0, VAR34);
    if (VAR15 + 2 != VAR6->VAR28)
    {
        while (VAR15 + 2 + VAR18 < VAR6->VAR28)
        {
            VAR23 = VAR13 + VAR15 + VAR18;
            VAR18 = FUN6(VAR23);
            VAR23 += 4;
            VAR16 = FUN6(VAR23);
            VAR23 += 4;
            if (VAR16 == FUN7('', '', '', ''))
            {
                VAR17 = FUN2(VAR23);
                VAR23 += 2;
                for (VAR25 = 0; VAR25 < VAR17; VAR25++)
                {
                    VAR27 = FUN8(4);
                    *VAR27 = FUN2(VAR23);
                    VAR24 = VAR25;
                    FUN9(&VAR19, &VAR24, VAR27);
                    VAR23 += 2;
                    VAR27 = FUN8(4);
                    *VAR27 = FUN2(VAR23);
                    VAR24 = VAR25;
                    FUN9(&VAR20, &VAR24, VAR27);
                    VAR23 += 2;
                    VAR23 += 2;
                    VAR26 = FUN8(4);
                    *VAR26 = FUN10(VAR23);
                    VAR24 = VAR25;
                    FUN9(&VAR21, &VAR24, VAR26);
                    VAR23 += 2;
                    VAR23 += 4;
                }
                FUN11(&VAR12, VAR13, VAR14, VAR19, VAR20, VAR21, VAR17);
                FUN12(&VAR19);
                FUN12(&VAR20);
                FUN12(&VAR21);
            }
        }
    }
    else
        FUN11(&VAR12, VAR13, VAR14, NULL, NULL, 0, 0);
    VAR9 = FUN13(VAR8, &VAR12, VAR10, VAR11 - VAR10);
    FUN14(&VAR12, NULL);
    if (VAR9 < 0)
        return VAR9;
    *VAR4 = VAR8->VAR35 > 0;
    return VAR6->VAR28;
}