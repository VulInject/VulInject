static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR3;
    VAR11 *const VAR13 = (VAR11 *)&VAR9->VAR12;
    int VAR14;
    if (VAR13->VAR3[0])
        VAR2->FUN2(VAR2, VAR13);
    VAR13->VAR15 = 0;
    if (VAR2->FUN3(VAR2, VAR13) < 0)
    {
        FUN4(VAR2, VAR16, "");
        return -1;
    }
    VAR13->VAR17 = VAR18;
    VAR13->VAR19 = 1;
    VAR9->VAR20[0] = VAR9->VAR20[1] = VAR9->VAR20[2] = 0;
    VAR9->VAR21 = FUN5(VAR9->VAR21, &VAR9->VAR22, VAR7 + VAR23);
    for (VAR14 = 0; VAR14 < VAR7; VAR14 += 2)
    {
        VAR9->VAR21[VAR14] = VAR6[VAR14 + 1];
        VAR9->VAR21[VAR14 + 1] = VAR6[VAR14];
    }
    FUN6(&VAR9->VAR24, VAR9->VAR21, VAR7 * 8);
    FUN7(&VAR9->VAR24, 32);
    VAR9->VAR25 = FUN8(&VAR9->VAR24, 16);
    VAR9->VAR26 = FUN8(&VAR9->VAR24, 16);
    for (VAR9->VAR27 = 0; VAR9->VAR27 < VAR9->VAR28; VAR9->VAR27++)
    {
        for (VAR9->VAR29 = 0; VAR9->VAR29 < VAR9->VAR30; VAR9->VAR29++)
        {
            if (FUN9(VAR9, VAR9->VAR31) < 0)
                return -1;
            FUN10(VAR9, VAR9->VAR27, VAR9->VAR29);
        }
    }
    *VAR12 = *(VAR11 *)&VAR9->VAR12;
    *VAR4 = sizeof(VAR32);
    FUN11();
    return (FUN12(&VAR9->VAR24) + 31) / 32 * 4;
}