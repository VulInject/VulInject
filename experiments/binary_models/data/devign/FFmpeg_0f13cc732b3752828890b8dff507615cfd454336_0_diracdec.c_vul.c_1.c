static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7[3 * VAR8 + 1];
    enum dirac_subband VAR9;
    int VAR10, VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
    {
        for (VAR9 = !!VAR10; VAR9 < 4; VAR9++)
        {
            VAR6 *VAR13 = &VAR2->VAR14[VAR3].VAR15[VAR10][VAR9];
            VAR7[VAR11++] = VAR13;
            FUN2(&VAR2->VAR16);
            VAR13->VAR17 = FUN3(&VAR2->VAR16);
            if (VAR13->VAR17)
            {
                VAR13->VAR18 = FUN3(&VAR2->VAR16);
                FUN2(&VAR2->VAR16);
                VAR13->VAR19 = VAR2->VAR16.VAR20 + FUN4(&VAR2->VAR16) / 8;
                VAR13->VAR17 = FUN5(VAR13->VAR17, FUN6(&VAR2->VAR16) / 8);
                FUN7(&VAR2->VAR16, VAR13->VAR17 * 8);
            }
        }
        if (VAR2->VAR21)
            VAR5->FUN8(VAR5, VAR22, &VAR2->VAR14[VAR3].VAR15[VAR10][!!VAR10], NULL, 4 - !!VAR10, sizeof(VAR6));
    }
    if (!VAR2->VAR21)
        VAR5->FUN8(VAR5, VAR23, VAR7, NULL, VAR11, sizeof(VAR6 *));
}