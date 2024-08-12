static int FUN1(struct VAR1 *VAR2, long VAR3, const VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2((VAR4 *)VAR5);
    VAR8 *VAR9 = (VAR8 *)VAR7->VAR10;
    int VAR11;
    VAR2->VAR12 = FUN3(VAR13 * sizeof(struct VAR14));
    if (VAR2->VAR12 == NULL)
        return (-VAR15);
    VAR2->VAR16 = FUN3(sizeof(*VAR2->VAR16));
    if (VAR2->VAR16 == NULL)
        return (-VAR15);
    VAR2->VAR17 = FUN3(sizeof(*VAR2->VAR17));
    if (VAR2->VAR16 == NULL)
        return (-VAR15);
    FUN4(VAR2->VAR16, VAR9, VAR3);
    FUN5(&VAR2->VAR16->VAR18, VAR5);
    FUN6(&VAR2->VAR12[0], "", VAR19, sizeof(*VAR2->VAR16), VAR2->VAR16);
    FUN7(VAR2->VAR17, VAR9);
    FUN6(&VAR2->VAR12[1], "", VAR20, sizeof(*VAR2->VAR17), VAR2->VAR17);
    FUN8(&VAR2->VAR12[2], VAR9);
    VAR2->VAR21 = 3;
    VAR2->VAR22 = 0;
    for (VAR11 = 0; VAR11 < VAR2->VAR21; VAR11++)
        VAR2->VAR22 += FUN9(&VAR2->VAR12[VAR11]);
    FUN10();
    FUN11(VAR7)
    {
        if (VAR7 == VAR23)
        {
            continue;
        }
        FUN12(VAR2, (VAR4 *)VAR7->VAR24);
    }
    FUN13();
    return (0);
}