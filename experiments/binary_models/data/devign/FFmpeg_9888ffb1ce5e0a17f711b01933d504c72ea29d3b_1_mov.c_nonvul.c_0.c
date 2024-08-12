static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    FUN2(VAR4);
    VAR11 = FUN2(VAR4);
    if (VAR11 >= VAR16 / sizeof(*VAR9->VAR17))
        return VAR18;
    VAR9->VAR17 = FUN3(VAR11 * sizeof(*VAR9->VAR17));
    if (!VAR9->VAR17)
        return FUN4(VAR19);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR20; VAR10++)
    {
        VAR9->VAR17[VAR10] = FUN2(VAR4);
    }
    VAR9->VAR21 = VAR10;
    if (VAR4->VAR20)
        return VAR22;
    return 0;
}