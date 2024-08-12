static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4, VAR5;
    VAR6 *VAR7, *FUN2(VAR8);
    if (VAR2->VAR9 != VAR10)
        return;
    for (VAR4 = 0; VAR4 < VAR11; VAR4++)
    {
        VAR7 = &VAR2->VAR12[VAR4];
        VAR7->VAR13 = !VAR4;
        if (!VAR2->VAR14)
        {
            VAR8 = VAR7;
            continue;
        }
        VAR7->VAR15 = 4;
        if (VAR7->VAR16)
        {
            VAR7->VAR15 -= (VAR2->VAR17[VAR18] <= 61);
            VAR7->VAR15 -= (VAR2->VAR17[VAR18] == 37);
            if (VAR4 && VAR7->VAR15 != VAR8->VAR15)
                VAR7->VAR13 = 1;
        }
        VAR3 = FUN3(VAR7->VAR19[1], VAR7->VAR19[2]);
        for (VAR5 = 0; VAR5 < VAR7->VAR15; VAR5++)
        {
            int VAR20 = VAR21[VAR5];
            int VAR22 = FUN3(VAR3, VAR21[VAR5 + 1]);
            CoefSumType VAR23[4];
            FUN4(VAR2, VAR23, VAR7->VAR24[1] + VAR20, VAR7->VAR24[2] + VAR20, VAR22 - VAR20);
            if (FUN3(VAR23[2], VAR23[3]) < FUN3(VAR23[0], VAR23[1]))
                VAR7->VAR25[VAR5] = 1;
            else
                VAR7->VAR25[VAR5] = 0;
            if (VAR4 && VAR7->VAR25[VAR5] != VAR8->VAR25[VAR5])
            {
                VAR7->VAR13 = 1;
            }
        }
        VAR8 = VAR7;
    }
}