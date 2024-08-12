static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    ogg_packet VAR11;
    int VAR12, VAR13;
    if (VAR6)
    {
        const int VAR14 = VAR6->VAR15;
        float **VAR16;
        int VAR17, VAR18 = VAR9->VAR19.VAR18;
        VAR16 = FUN2(&VAR9->VAR20, VAR14);
        for (VAR17 = 0; VAR17 < VAR18; VAR17++)
        {
            int VAR21 = (VAR18 > 8) ? VAR17 : VAR22[VAR18 - 1][VAR17];
            memcpy(VAR16[VAR17], VAR6->VAR23[VAR21], VAR14 * sizeof(*VAR16[VAR17]));
        }
        if ((VAR12 = FUN3(&VAR9->VAR20, VAR14)) < 0)
        {
            FUN4(VAR2, VAR24, "");
            return FUN5(VAR12);
        }
        if ((VAR12 = FUN6(&VAR9->VAR25, VAR6)) < 0)
            return VAR12;
    }
    else
    {
        if (!VAR9->VAR26)
            if ((VAR12 = FUN3(&VAR9->VAR20, 0)) < 0)
            {
                FUN4(VAR2, VAR24, "");
                return FUN5(VAR12);
            }
        VAR9->VAR26 = 1;
    }
    while ((VAR12 = FUN7(&VAR9->VAR20, &VAR9->VAR27)) == 1)
    {
        if ((VAR12 = FUN8(&VAR9->VAR27, NULL)) < 0)
            break;
        if ((VAR12 = FUN9(&VAR9->VAR27)) < 0)
            break;
        while ((VAR12 = FUN10(&VAR9->VAR20, &VAR11)) == 1)
        {
            if (FUN11(VAR9->VAR28) < sizeof(VAR29) + VAR11.VAR30)
            {
                FUN4(VAR2, VAR24, "");
                return VAR31;
            }
            FUN12(VAR9->VAR28, &VAR11, sizeof(VAR29), NULL);
            FUN12(VAR9->VAR28, VAR11.VAR32, VAR11.VAR30, NULL);
        }
        if (VAR12 < 0)
        {
            FUN4(VAR2, VAR24, "");
            break;
        }
    }
    if (VAR12 < 0)
    {
        FUN4(VAR2, VAR24, "");
        return FUN5(VAR12);
    }
    if (FUN13(VAR9->VAR28) < sizeof(VAR29))
        return 0;
    FUN14(VAR9->VAR28, &VAR11, sizeof(VAR29), NULL);
    if ((VAR12 = FUN15(VAR2, VAR4, VAR11.VAR30)) < 0)
        return VAR12;
    FUN14(VAR9->VAR28, VAR4->VAR33, VAR11.VAR30, NULL);
    VAR4->VAR34 = FUN16(VAR2, VAR11.VAR35);
    VAR13 = FUN17(&VAR9->VAR36, VAR4->VAR33, VAR4->VAR37);
    if (VAR13 > 0)
    {
        if (!VAR2->VAR38 && VAR9->VAR25.VAR39)
        {
            VAR2->VAR38 = VAR13;
            FUN18(!VAR9->VAR25.VAR40);
            VAR9->VAR25.VAR39->VAR13 += VAR13;
            VAR9->VAR25.VAR39->VAR34 -= VAR13;
            VAR9->VAR25.VAR41 += VAR13;
        }
        FUN19(&VAR9->VAR25, VAR13, &VAR4->VAR34, &VAR4->VAR13);
    }
    *VAR7 = 1;
    return 0;
}