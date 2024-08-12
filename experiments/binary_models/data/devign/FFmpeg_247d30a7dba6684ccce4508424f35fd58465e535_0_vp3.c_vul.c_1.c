static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    int VAR8 = 0, VAR9, VAR10;
    if (!VAR7->VAR11.VAR12[0] || VAR5->VAR13 != VAR7->VAR13 || VAR5->VAR14 != VAR7->VAR14)
    {
        if (VAR5 != VAR7)
            FUN2(VAR5, VAR7, VAR15, VAR11);
        return -1;
    }
    if (VAR5 != VAR7)
    {
        if (!VAR5->VAR11.VAR12[0])
        {
            int VAR16, VAR17;
            VAR5->VAR18 = VAR2;
            VAR10 = FUN3(VAR2);
            if (VAR10)
                return VAR10;
            VAR16 = VAR5->VAR19[0] * VAR5->VAR20[0];
            VAR17 = VAR5->VAR19[1] * VAR5->VAR20[1];
            memcpy(VAR5->VAR21[0], VAR7->VAR21[0], VAR16 * sizeof(*VAR5->VAR21[0]));
            memcpy(VAR5->VAR21[1], VAR7->VAR21[1], VAR17 * sizeof(*VAR5->VAR21[1]));
        }
        FUN2(VAR5, VAR7, VAR15, VAR22);
        for (VAR9 = 0; VAR9 < 3; VAR9++)
        {
            if (VAR5->VAR23[VAR9] != VAR7->VAR23[1])
            {
                VAR8 = 1;
                memcpy(&VAR5->VAR24[VAR9], &VAR7->VAR24[VAR9], sizeof(VAR5->VAR24[VAR9]));
            }
        }
        if (VAR5->VAR23[0] != VAR7->VAR23[0])
            memcpy(&VAR5->VAR25, &VAR7->VAR25, sizeof(VAR5->VAR25));
        if (VAR8)
            FUN2(VAR5, VAR7, VAR23, VAR26);
    }
    FUN4(VAR2);
    return 0;
}