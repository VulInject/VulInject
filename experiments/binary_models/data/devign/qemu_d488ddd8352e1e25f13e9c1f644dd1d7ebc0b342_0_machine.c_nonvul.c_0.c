int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    int VAR7;
    int VAR8;
    int VAR9;
    for (VAR7 = 0; VAR7 < 16; VAR7++)
        VAR6->VAR10[VAR7] = FUN2(VAR2);
    for (VAR7 = 0; VAR7 < 16; VAR7++)
        VAR6->VAR11[VAR7] = FUN2(VAR2);
    VAR6->VAR12 = FUN2(VAR2);
    VAR6->VAR13 = FUN2(VAR2);
    VAR6->VAR14 = FUN2(VAR2);
    VAR6->VAR15 = FUN2(VAR2);
    VAR6->VAR16 = FUN2(VAR2);
    VAR6->VAR17 = FUN2(VAR2);
    VAR6->VAR18 = FUN2(VAR2);
    VAR6->VAR19 = FUN2(VAR2);
    VAR6->VAR20 = FUN2(VAR2);
    VAR6->VAR21 = FUN2(VAR2);
    VAR6->VAR22 = FUN2(VAR2);
    VAR6->VAR23 = FUN2(VAR2);
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        for (VAR7 = 0; VAR7 < 16; VAR7++)
            VAR6->VAR24[VAR8][VAR7] = FUN2(VAR2);
    }
    VAR6->VAR25 = FUN2(VAR2);
    for (VAR9 = 0; VAR9 < 2; VAR9++)
    {
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            for (VAR7 = 0; VAR7 < 16; VAR7++)
            {
                VAR6->VAR26[VAR9][VAR8][VAR7].VAR27 = FUN2(VAR2);
                VAR6->VAR26[VAR9][VAR8][VAR7].VAR28 = FUN2(VAR2);
            }
        }
    }
    return 0;
}