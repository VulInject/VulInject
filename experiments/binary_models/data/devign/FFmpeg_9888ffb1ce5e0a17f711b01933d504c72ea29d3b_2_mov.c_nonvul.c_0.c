static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    int64_t VAR12 = 0;
    int64_t VAR13 = 0;
    if (VAR2->VAR14->VAR15 < 1)
        return 0;
    VAR7 = VAR2->VAR14->VAR16[VAR2->VAR14->VAR15 - 1];
    VAR9 = VAR7->VAR17;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    FUN5(VAR2->VAR14, "", VAR2->VAR14->VAR15 - 1, VAR11);
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR18 / sizeof(*VAR9->VAR19))
        return FUN6(VAR20);
    VAR9->VAR19 = FUN7(VAR11 * sizeof(*VAR9->VAR19));
    if (!VAR9->VAR19)
        return FUN6(VAR21);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR22; VAR10++)
    {
        int VAR23;
        int VAR24;
        VAR24 = FUN4(VAR4);
        VAR23 = FUN4(VAR4);
        VAR9->VAR19[VAR10].VAR25 = VAR24;
        VAR9->VAR19[VAR10].VAR12 = VAR23;
        FUN5(VAR2->VAR14, "", VAR24, VAR23);
        VAR12 += (VAR26)VAR23 * VAR24;
        VAR13 += VAR24;
    }
    VAR9->VAR27 = VAR10;
    if (VAR4->VAR22)
        return VAR28;
    VAR7->VAR29 = VAR13;
    if (VAR12)
        VAR7->VAR12 = VAR12;
    VAR9->VAR30 = VAR12;
    return 0;
}