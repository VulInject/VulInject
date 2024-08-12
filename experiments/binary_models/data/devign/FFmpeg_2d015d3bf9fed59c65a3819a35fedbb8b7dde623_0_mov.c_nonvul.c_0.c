static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11, VAR12 = 0;
    if (VAR2->VAR13->VAR14 < 1)
        return 0;
    VAR7 = VAR2->VAR13->VAR15[VAR2->VAR13->VAR14 - 1];
    VAR9 = VAR7->VAR16;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    FUN5(VAR2->VAR13, VAR17, "", VAR2->VAR13->VAR14 - 1, VAR11);
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR18 / sizeof(*VAR9->VAR19))
        return VAR20;
    FUN6(&VAR9->VAR19);
    VAR9->VAR19 = FUN7(NULL, &VAR9->VAR21, VAR11 * sizeof(*VAR9->VAR19));
    if (!VAR9->VAR19)
        return FUN8(VAR22);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR23; VAR10++)
    {
        int VAR24 = FUN4(VAR4);
        int VAR25 = FUN4(VAR4);
        if (VAR24 <= 0)
        {
            FUN5(VAR2->VAR13, VAR17, "", VAR24, VAR25);
            continue;
        }
        FUN9(&VAR9->VAR19, &VAR12, &VAR9->VAR21, VAR24, VAR25);
        FUN5(VAR2->VAR13, VAR17, "", VAR24, VAR25);
        if (FUN10(VAR25) < -(1 << 28) && VAR10 + 2 < VAR11)
        {
            FUN5(VAR2->VAR13, VAR26, "");
            FUN6(&VAR9->VAR19);
            VAR9->VAR12 = 0;
            return 0;
        }
        if (VAR10 + 2 < VAR11)
            FUN11(VAR9, VAR25);
    }
    VAR9->VAR12 = VAR12;
    if (VAR4->VAR23)
        return VAR27;
    FUN5(VAR2->VAR13, VAR17, "", VAR9->VAR28);
    return 0;
}