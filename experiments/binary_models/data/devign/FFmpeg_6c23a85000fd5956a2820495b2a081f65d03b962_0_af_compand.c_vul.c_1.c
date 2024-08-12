static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    const int VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12, VAR13, VAR14;
    VAR11 = FUN2(VAR2, FUN3(2048, VAR7->VAR15));
    if (!VAR11)
        return FUN4(VAR16);
    VAR11->VAR17 = VAR7->VAR17;
    VAR7->VAR17 += FUN5(VAR11->VAR18, (VAR19){1, VAR2->VAR20}, VAR2->VAR21);
    for (VAR12 = 0; VAR12 < VAR9; VAR12++)
    {
        VAR10 *VAR22 = VAR7->VAR22;
        double *VAR23 = (double *)VAR22->VAR24[VAR12];
        double *VAR25 = (double *)VAR11->VAR24[VAR12];
        VAR26 *VAR27 = &VAR7->VAR9[VAR12];
        VAR14 = VAR7->VAR28;
        for (VAR13 = 0; VAR13 < VAR11->VAR18; VAR13++)
        {
            VAR25[VAR13] = FUN6(VAR23[VAR14] * FUN7(VAR7, VAR27->VAR29), -1, 1);
            VAR14 = FUN8(VAR14 + 1, VAR7->VAR30);
        }
    }
    VAR7->VAR15 -= VAR11->VAR18;
    VAR7->VAR28 = VAR14;
    return FUN9(VAR2, VAR11);