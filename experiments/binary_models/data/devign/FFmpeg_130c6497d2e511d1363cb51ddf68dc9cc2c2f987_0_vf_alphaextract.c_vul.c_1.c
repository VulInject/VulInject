static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR1 *VAR9 = VAR2->VAR7->VAR10[0];
    VAR3 *VAR11 = FUN2(VAR9, VAR12, VAR9->VAR13, VAR9->VAR14);
    int VAR15;
    if (!VAR11)
    {
        VAR15 = FUN3(VAR16);
        goto VAR17;
    }
    FUN4(VAR11, VAR4);
    if (VAR6->VAR18)
    {
        int VAR19, VAR20;
        VAR21 *VAR22, *VAR23;
        for (VAR20 = 0; VAR20 < VAR11->VAR24->VAR14; VAR20++)
        {
            VAR22 = VAR4->VAR25[0] + VAR20 * VAR4->VAR26[0] + VAR6->VAR27[VAR28];
            VAR23 = VAR11->VAR25[0] + VAR20 * VAR11->VAR26[0];
            for (VAR19 = 0; VAR19 < VAR11->VAR24->VAR13; VAR19++)
            {
                *VAR23 = *VAR22;
                VAR23 += 1;
                VAR22 += 4;
            }
        }
    }
    else
    {
        const int VAR26 = FUN5(VAR11->VAR26[VAR29], VAR4->VAR26[VAR28]);
        int VAR20;
        for (VAR20 = 0; VAR20 < VAR11->VAR24->VAR14; VAR20++)
        {
            memcpy(VAR11->VAR25[VAR29] + VAR20 * VAR11->VAR26[VAR29], VAR4->VAR25[VAR28] + VAR20 * VAR4->VAR26[VAR28], VAR26);
        }
    }
    VAR15 = FUN6(VAR9, VAR11);
VAR17:
    FUN7(VAR4);
    return VAR15;
}