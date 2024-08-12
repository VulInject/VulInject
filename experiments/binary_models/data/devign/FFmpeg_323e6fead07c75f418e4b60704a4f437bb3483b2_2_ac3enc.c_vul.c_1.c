static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4, VAR5, VAR6;
    VAR7 *VAR8, *VAR9;
    VAR2->VAR10 = 4;
    if (VAR2->VAR11 & VAR12)
        return;
    VAR3 = FUN2(VAR2->VAR3[0], VAR2->VAR3[1]);
    for (VAR4 = 0; VAR4 < VAR13; VAR4++)
    {
        VAR8 = &VAR2->VAR14[VAR4];
        VAR8->VAR15 = !VAR4;
        for (VAR5 = 0; VAR5 < VAR2->VAR10; VAR5++)
        {
            int VAR16 = VAR17[VAR5];
            int VAR18 = FUN2(VAR3, VAR17[VAR5 + 1]);
            CoefSumType VAR19[4] = {
                0,
            };
            for (VAR6 = VAR16; VAR6 < VAR18; VAR6++)
            {
                CoefType VAR20 = VAR8->VAR21[0][VAR6];
                CoefType VAR22 = VAR8->VAR21[1][VAR6];
                CoefType VAR23 = VAR20 + VAR22;
                CoefType VAR24 = VAR20 - VAR22;
                VAR19[0] += VAR20 * VAR20;
                VAR19[1] += VAR22 * VAR22;
                VAR19[2] += VAR23 * VAR23;
                VAR19[3] += VAR24 * VAR24;
            }
            if (FUN2(VAR19[2], VAR19[3]) < FUN2(VAR19[0], VAR19[1]))
                VAR8->VAR25[VAR5] = 1;
            else
                VAR8->VAR25[VAR5] = 0;
            if (VAR4 && VAR8->VAR25[VAR5] != VAR9->VAR25[VAR5])
            {
                VAR8->VAR15 = 1;
            }
        }
        VAR9 = VAR8;
    }
}