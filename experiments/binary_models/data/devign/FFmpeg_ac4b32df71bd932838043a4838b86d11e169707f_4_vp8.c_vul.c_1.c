static void FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11[VAR5];
    int VAR12, VAR13 = VAR10->VAR14 >> 16, VAR15 = VAR7->VAR15;
    VAR16 *VAR17 = VAR7->VAR17->VAR18.VAR19;
    VAR20 *VAR21;
    VAR9 *VAR22, *VAR23;
    VAR24 *VAR25[3] = {VAR17->VAR26[0] + 16 * VAR13 * VAR7->VAR27, VAR17->VAR26[1] + 8 * VAR13 * VAR7->VAR28, VAR17->VAR26[2] + 8 * VAR13 * VAR7->VAR28};
    if (VAR7->VAR29 == 1)
        VAR21 = VAR7->VAR30 + ((VAR7->VAR31 + 1) * (VAR13 + 1) + 1);
    else
        VAR21 = VAR7->VAR32 + (VAR7->VAR33 - VAR13 - 1) * 2;
    if (VAR13 == 0)
        VAR22 = VAR10;
    else
        VAR22 = &VAR7->VAR11[(VAR4 + VAR15 - 1) % VAR15];
    if (VAR13 == VAR7->VAR33 - 1)
        VAR23 = VAR10;
    else
        VAR23 = &VAR7->VAR11[(VAR4 + 1) % VAR15];
    for (VAR12 = 0; VAR12 < VAR7->VAR31; VAR12++, VAR21++)
    {
        VAR34 *VAR19 = &VAR10->VAR35[VAR12];
        if (VAR22 != VAR10)
            FUN2(VAR10, VAR22, (VAR12 + 1) + (VAR7->VAR31 + 3), VAR13 - 1);
        if (VAR23 != VAR10)
            if (VAR23 != &VAR7->VAR11[0])
                FUN2(VAR10, VAR23, VAR12 + 1, VAR13 + 1);
        if (VAR15 == 1)
        {
            if (VAR7->VAR36.VAR37)
                FUN3(VAR7->VAR38[VAR12 + 1], VAR25[0], NULL, NULL, VAR7->VAR27, 0, 1);
            else
                FUN3(VAR7->VAR38[VAR12 + 1], VAR25[0], VAR25[1], VAR25[2], VAR7->VAR27, VAR7->VAR28, 0);
        }
        if (VAR7->VAR36.VAR37)
            FUN4(VAR7, VAR25[0], VAR19, VAR12, VAR13);
        else
            FUN5(VAR7, VAR25, VAR19, VAR12, VAR13);
        VAR25[0] += 16;
        VAR25[1] += 8;
        VAR25[2] += 8;
        FUN6(VAR10, VAR13, (VAR7->VAR31 + 3) + VAR12);
    }
}