static int FUN1(struct VAR1 *VAR2, long VAR3, const VAR4 *VAR5)
{
    VAR4 *VAR6 = NULL;
    VAR7 *VAR8 = (VAR7 *)VAR5->VAR9;
    int VAR10;
    (void)memset(VAR2, 0, sizeof(*VAR2));
    FUN2(&VAR2->VAR11);
    VAR2->VAR12 = FUN3(VAR13 * sizeof(struct VAR14));
    if (VAR2->VAR12 == NULL)
        return (-VAR15);
    VAR2->VAR16 = FUN3(sizeof(*VAR2->VAR16));
    if (VAR2->VAR16 == NULL)
        return (-VAR15);
    VAR2->VAR17 = FUN3(sizeof(*VAR2->VAR17));
    if (VAR2->VAR16 == NULL)
        return (-VAR15);
    FUN4(VAR2->VAR16, VAR8, VAR3);
    FUN5(&VAR2->VAR16->VAR18, VAR5);
    FUN6(&VAR2->VAR12[0], "", VAR19, sizeof(*VAR2->VAR16), VAR2->VAR16);
    FUN7(VAR2->VAR17, VAR8);
    FUN6(&VAR2->VAR12[1], "", VAR20, sizeof(*VAR2->VAR17), VAR2->VAR17);
    FUN8(&VAR2->VAR12[2], VAR8);
    VAR2->VAR21 = 3;
    VAR2->VAR22 = 0;
    for (VAR10 = 0; VAR10 < VAR2->VAR21; VAR10++)
        VAR2->VAR22 += FUN9(&VAR2->VAR12[VAR10]);
    FUN10();
    for (VAR6 = VAR23; VAR6 != NULL; VAR6 = VAR6->VAR24)
    {
        if (VAR6 == VAR25)
            continue;
        FUN11(VAR2, VAR6);
    }
    FUN12();
    return (0);
}