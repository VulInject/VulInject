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
    if (VAR11 >= VAR16 / sizeof(int))
        return -1;
    VAR9->VAR17 = FUN6(VAR11 * sizeof(int));
    if (!VAR9->VAR17)
        return FUN7(VAR18);
    VAR9->VAR19 = VAR11;
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR9->VAR17[VAR10] = FUN4(VAR4);
    }
    return 0;
}