static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    FUN2(*VAR10)
    [2], (*VAR11)[2];
    int VAR12, VAR13;
    int VAR14 = (VAR7 == 1 && VAR2->VAR15 == 1) + 1;
    if (VAR2->VAR15 && VAR7)
    {
        VAR10 = VAR16[VAR17].VAR18;
        VAR12 = VAR19[VAR17];
        VAR11 = VAR16[VAR20].VAR18;
        VAR13 = VAR19[VAR20];
    }
    else
    {
        VAR10 = VAR16[VAR21].VAR18;
        VAR12 = VAR19[VAR21];
        VAR11 = VAR16[VAR22].VAR18;
        VAR13 = VAR19[VAR22];
    }
    for (VAR8 = 0; VAR8 < VAR6->VAR23; VAR8++)
    {
        if (VAR6->VAR24[VAR8])
        {
            for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
                VAR6->VAR26[VAR8 + 1][VAR9] = VAR6->VAR26[VAR8][VAR9] + VAR14 * (FUN3(VAR4, VAR10, 9, 2) - VAR12);
        }
        else
        {
            VAR6->VAR26[VAR8 + 1][0] = VAR14 * FUN4(VAR4, 5);
            for (VAR9 = 1; VAR9 < VAR2->VAR25; VAR9++)
                VAR6->VAR26[VAR8 + 1][VAR9] = VAR6->VAR26[VAR8 + 1][VAR9 - 1] + VAR14 * (FUN3(VAR4, VAR11, 9, 3) - VAR13);
        }
    }
    memcpy(VAR6->VAR26[0], VAR6->VAR26[VAR6->VAR23], sizeof(VAR6->VAR26[0]));
}