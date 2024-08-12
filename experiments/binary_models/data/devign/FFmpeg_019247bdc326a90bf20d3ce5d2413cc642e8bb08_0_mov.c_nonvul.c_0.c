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
    FUN5(VAR2->VAR12, "", VAR11);
    if (!VAR11)
    {
        VAR9->VAR16 = 1;
        if (!VAR7->VAR17 && VAR7->VAR18->VAR19 == VAR20)
            VAR7->VAR17 = VAR21;
        return 0;
    }
    if (VAR11 >= VAR22 / sizeof(int))
        return VAR23;
    VAR9->VAR24 = FUN6(VAR11 * sizeof(int));
    if (!VAR9->VAR24)
        return FUN7(VAR25);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR26; VAR10++)
    {
        VAR9->VAR24[VAR10] = FUN4(VAR4);
    }
    VAR9->VAR27 = VAR10;
    if (VAR4->VAR26)
        return VAR28;
    return 0;
}