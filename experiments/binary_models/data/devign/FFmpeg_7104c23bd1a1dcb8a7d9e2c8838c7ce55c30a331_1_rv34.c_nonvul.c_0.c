static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8 = VAR7->VAR9 * 2 + VAR7->VAR10 * 2 * VAR7->VAR11;
    int VAR12[2] = {0}, VAR13[2], VAR14[2];
    int VAR15, VAR16;
    int VAR17, VAR18;
    int *VAR19 = VAR2->VAR20 + VAR21[VAR4];
    int VAR22 = VAR23[VAR3];
    VAR8 += (VAR4 & 1) + (VAR4 >> 1) * VAR7->VAR11;
    if (VAR4 == 3)
        VAR22 = -1;
    if (VAR19[-1])
    {
        VAR12[0] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - 1][0];
        VAR12[1] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - 1][1];
    }
    if (VAR19[-4])
    {
        VAR13[0] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11][0];
        VAR13[1] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11][1];
    }
    else
    {
        VAR13[0] = VAR12[0];
        VAR13[1] = VAR12[1];
    }
    if (!VAR19[VAR22 - 4])
    {
        if (VAR19[-4] && (VAR19[-1] || VAR2->VAR27))
        {
            VAR14[0] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11 - 1][0];
            VAR14[1] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11 - 1][1];
        }
        else
        {
            VAR14[0] = VAR12[0];
            VAR14[1] = VAR12[1];
        }
    }
    else
    {
        VAR14[0] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11 + VAR22][0];
        VAR14[1] = VAR7->VAR24->VAR25.VAR26[0][VAR8 - VAR7->VAR11 + VAR22][1];
    }
    VAR17 = FUN2(VAR12[0], VAR13[0], VAR14[0]);
    VAR18 = FUN2(VAR12[1], VAR13[1], VAR14[1]);
    VAR17 += VAR2->VAR28[VAR5][0];
    VAR18 += VAR2->VAR28[VAR5][1];
    for (VAR16 = 0; VAR16 < VAR29[VAR3]; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR23[VAR3]; VAR15++)
        {
            VAR7->VAR24->VAR25.VAR26[0][VAR8 + VAR15 + VAR16 * VAR7->VAR11][0] = VAR17;
            VAR7->VAR24->VAR25.VAR26[0][VAR8 + VAR15 + VAR16 * VAR7->VAR11][1] = VAR18;
        }
    }
}