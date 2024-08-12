static void FUN1(void)
{
    static int VAR1 = 0;
    int VAR2, VAR3;
    if (VAR1)
        return;
    VAR4.VAR5 = 1;
    VAR4.VAR6 = 2;
    for (VAR2 = 0; VAR2 < 5; VAR2++)
        FUN2(&VAR4.VAR7[VAR2], VAR8[VAR2], 12, VAR9[VAR2], 1, 1, VAR10[VAR2], 2, 2, 1);
    VAR11.VAR5 = -64;
    VAR11.VAR6 = 2;
    for (VAR2 = 0; VAR2 < 5; VAR2++)
        FUN2(&VAR11.VAR7[VAR2], VAR12, 129, VAR13[VAR2], 1, 1, VAR14[VAR2], 2, 2, 1);
    VAR15.VAR5 = 0;
    VAR15.VAR6 = 1;
    for (VAR2 = 0; VAR2 < 4; VAR2++)
        FUN2(&VAR15.VAR7[VAR2], VAR16[VAR2], 4, VAR17[VAR2], 1, 1, VAR18[VAR2], 2, 2, 1);
    for (VAR2 = 0; VAR2 < 10; VAR2++)
        for (VAR3 = 0; VAR3 < 7; VAR3++)
        {
            if (!VAR19[VAR2][VAR3])
                break;
            VAR20[VAR2 + 1].VAR5 = VAR21[VAR2];
            VAR20[VAR2 + 1].VAR6 = 1 + (VAR3 > 4);
            FUN2(&VAR20[VAR2 + 1].VAR7[VAR3], VAR22[VAR2][VAR3], VAR23[VAR2], VAR24[VAR2][VAR3], 1, 1, VAR19[VAR2][VAR3], 2, 2, 1);
        }
    VAR1 = 1;
}