static void FUN1(void *VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    struct VAR6 *VAR7 = VAR1;
    VAR8 *VAR9 = FUN2(0);
    VAR10 *VAR11;
    int VAR12, VAR13, VAR14;
    if (!VAR9)
    {
        FUN3(&VAR7->VAR15.VAR16, 0, "");
        return;
    }
    VAR11 = FUN4(VAR9);
    VAR12 = FUN5(VAR11);
    VAR13 = FUN6(VAR11);
    FUN7(VAR1, VAR2, VAR3, VAR4, VAR5, VAR7->VAR17);
    if (VAR7->VAR17)
        FUN8(VAR7, VAR2 * (VAR12 - 1) / 0x7fff, VAR3 * (VAR13 - 1) / 0x7fff, VAR4);
    else
        FUN9(VAR7, VAR2, VAR3, VAR4);
    for (VAR14 = 0; VAR14 < 8; VAR14++)
    {
        int VAR18 = VAR7->VAR5 & (1 << VAR14);
        int VAR19 = VAR5 & (1 << VAR14);
        if (VAR19 == VAR18)
            continue;
        if (FUN10(VAR7, VAR19, VAR20 + VAR14) < 0)
            return;
    }
    VAR7->VAR5 = VAR5;
}