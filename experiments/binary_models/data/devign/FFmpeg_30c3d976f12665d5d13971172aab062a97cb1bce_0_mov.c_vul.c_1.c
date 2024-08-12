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
    if (VAR11 >= VAR18 / sizeof(*VAR9->VAR19))
        return -1;
    VAR9->VAR19 = FUN6(VAR11 * sizeof(*VAR9->VAR19));
    if (!VAR9->VAR19)
        return FUN7(VAR20);
    VAR9->VAR21 = VAR11;
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        int VAR22;
        int VAR23;
        VAR23 = FUN4(VAR4);
        VAR22 = FUN4(VAR4);
        VAR9->VAR19[VAR10].VAR24 = VAR23;
        VAR9->VAR19[VAR10].VAR12 = VAR22;
        FUN5(VAR2->VAR14, "", VAR23, VAR22);
        VAR12 += (VAR25)VAR22 * VAR23;
        VAR13 += VAR23;
    }
    VAR7->VAR26 = VAR13;
    if (VAR12)
        VAR7->VAR12 = VAR12;
    return 0;
}