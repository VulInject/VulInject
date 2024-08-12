static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        int VAR4;
        VAR3 = 1;
        FUN2(&VAR5, VAR6, 4 * 5, &VAR7[0], 1, 1, &VAR8[0], 1, 1);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN2(&VAR9[VAR4], VAR10, 4 * 17, &VAR11[VAR4][0], 1, 1, &VAR12[VAR4][0], 1, 1);
        }
        for (VAR4 = 0; VAR4 < 3; VAR4++)
        {
            FUN2(&VAR13[VAR4], VAR14, 4, &VAR15[VAR4][0], 1, 1, &VAR16[VAR4][0], 1, 1);
        }
        for (VAR4 = 0; VAR4 < 15; VAR4++)
        {
            FUN2(&VAR17[VAR4], VAR18, 16, &VAR19[VAR4][0], 1, 1, &VAR20[VAR4][0], 1, 1);
        }
        for (VAR4 = 0; VAR4 < 6; VAR4++)
        {
            FUN2(&VAR21[VAR4], VAR22, 7, &VAR23[VAR4][0], 1, 1, &VAR24[VAR4][0], 1, 1);
        }
        FUN2(&VAR25, VAR26, 16, &VAR23[6][0], 1, 1, &VAR24[6][0], 1, 1);
    }
}