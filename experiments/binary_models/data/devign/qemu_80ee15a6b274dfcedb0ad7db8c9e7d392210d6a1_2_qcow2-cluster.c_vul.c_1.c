VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    int VAR9, VAR10;
    uint64_t VAR11, *VAR12, VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    VAR16 = (VAR4 >> 9) & (VAR7->VAR20 - 1);
    VAR18 = *VAR5 + VAR16;
    VAR14 = VAR7->VAR21 + VAR7->VAR22;
    VAR17 = (1 << VAR14) - (VAR4 & ((1 << VAR14) - 1));
    VAR17 = (VAR17 >> 9) + VAR16;
    if (VAR18 > VAR17)
    {
        VAR18 = VAR17;
    }
    VAR13 = 0;
    VAR9 = VAR4 >> VAR14;
    if (VAR9 >= VAR7->VAR23)
        goto VAR24;
    VAR11 = VAR7->VAR25[VAR9];
    if (!VAR11)
        goto VAR24;
    VAR11 &= ~VAR26;
    VAR12 = FUN2(VAR3, VAR11);
    if (VAR12 == NULL)
        return 0;
    VAR10 = (VAR4 >> VAR7->VAR22) & (VAR7->VAR27 - 1);
    VAR13 = FUN3(VAR12[VAR10]);
    VAR19 = FUN4(VAR7, VAR18 << 9);
    if (!VAR13)
    {
        VAR15 = FUN5(VAR19, &VAR12[VAR10]);
    }
    else
    {
        VAR15 = FUN6(VAR19, VAR7->VAR28, &VAR12[VAR10], 0, VAR26);
    }
    VAR17 = (VAR15 * VAR7->VAR20);
VAR24:
    if (VAR17 > VAR18)
        VAR17 = VAR18;
    *VAR5 = VAR17 - VAR16;
    return VAR13 & ~VAR26;
}