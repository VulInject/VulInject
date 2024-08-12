void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    int VAR12 = 0;
    int VAR13 = 1 << VAR7;
    FUN2(4, VAR10, VAR14, [VAR15]);
    int VAR16 = VAR5;
    int VAR17 = VAR6;
    VAR18 *VAR19 = &VAR2->VAR20;
    memset(VAR14, 0, VAR15 * sizeof(*VAR14));
    if (VAR2->VAR21->VAR22 > 2 && VAR13 == 8)
    {
        VAR12 = 1;
        VAR3 = VAR19->VAR23.VAR24;
        VAR4 = VAR19->VAR23.VAR25;
        VAR5 = VAR13;
        VAR6 = VAR13;
        VAR8 = 0;
    }
    FUN3(VAR2, VAR3, VAR4, VAR5, VAR6);
    FUN4(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR12, VAR8, VAR9, VAR14);
    if (VAR14[VAR9].VAR26[0] == 1 && VAR14[VAR9].VAR26[1] == 1 && (VAR16 + VAR17) == 12)
    {
        VAR14[VAR9].VAR27[1] = -1;
        VAR14[VAR9].VAR26[1] = 0;
    }
    *VAR11 = VAR14[VAR9];
}