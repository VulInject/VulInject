static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    FUN5(VAR2->VAR12, VAR16, "", VAR2->VAR12->VAR13 - 1, VAR11);
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR17 / sizeof(*VAR9->VAR18))
        return VAR19;
    FUN6(&VAR9->VAR18);
    VAR9->VAR18 = FUN7(NULL, VAR11 * sizeof(*VAR9->VAR18));
    if (!VAR9->VAR18)
        return FUN8(VAR20);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR21; VAR10++)
    {
        int VAR22 = FUN4(VAR4);
        int VAR23 = FUN4(VAR4);
        VAR9->VAR18[VAR10].VAR22 = VAR22;
        VAR9->VAR18[VAR10].VAR23 = VAR23;
        FUN5(VAR2->VAR12, VAR16, "", VAR22, VAR23);
        if (FUN9(VAR23) > (1 << 28) && VAR10 + 2 < VAR11)
        {
            FUN5(VAR2->VAR12, VAR24, "");
            FUN6(&VAR9->VAR18);
            VAR9->VAR25 = 0;
            return 0;
        }
        if (VAR10 + 2 < VAR11)
            FUN10(VAR9, VAR23);
    }
    VAR9->VAR25 = VAR10;
    if (VAR4->VAR21)
        return VAR26;
    FUN5(VAR2->VAR12, VAR16, "", VAR9->VAR27);
    return 0;
}