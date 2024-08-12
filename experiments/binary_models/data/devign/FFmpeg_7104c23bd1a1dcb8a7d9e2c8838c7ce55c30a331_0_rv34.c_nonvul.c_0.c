static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7 = VAR6->VAR8 * 2 + VAR6->VAR9 * 2 * VAR6->VAR10;
    int VAR11[2] = {0}, VAR12[2], VAR13[2];
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    int *VAR19 = VAR2->VAR20 + VAR21[0];
    if (VAR19[-1])
    {
        VAR11[0] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - 1][0];
        VAR11[1] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - 1][1];
    }
    if (VAR19[-4])
    {
        VAR12[0] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10][0];
        VAR12[1] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10][1];
    }
    else
    {
        VAR12[0] = VAR11[0];
        VAR12[1] = VAR11[1];
    }
    if (!VAR19[-4 + 2])
    {
        if (VAR19[-4] && (VAR19[-1]))
        {
            VAR13[0] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10 - 1][0];
            VAR13[1] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10 - 1][1];
        }
        else
        {
            VAR13[0] = VAR11[0];
            VAR13[1] = VAR11[1];
        }
    }
    else
    {
        VAR13[0] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10 + 2][0];
        VAR13[1] = VAR6->VAR22->VAR23.VAR24[0][VAR7 - VAR6->VAR10 + 2][1];
    }
    VAR17 = FUN2(VAR11[0], VAR12[0], VAR13[0]);
    VAR18 = FUN2(VAR11[1], VAR12[1], VAR13[1]);
    VAR17 += VAR2->VAR25[0][0];
    VAR18 += VAR2->VAR25[0][1];
    for (VAR15 = 0; VAR15 < 2; VAR15++)
    {
        for (VAR14 = 0; VAR14 < 2; VAR14++)
        {
            for (VAR16 = 0; VAR16 < 2; VAR16++)
            {
                VAR6->VAR22->VAR23.VAR24[VAR16][VAR7 + VAR14 + VAR15 * VAR6->VAR10][0] = VAR17;
                VAR6->VAR22->VAR23.VAR24[VAR16][VAR7 + VAR14 + VAR15 * VAR6->VAR10][1] = VAR18;
            }
        }
    }
}