static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5, int VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR3->VAR10;
    int VAR11, VAR12;
    uint64_t VAR13, *VAR14, VAR15;
    int VAR16, VAR17, VAR18 = 0;
    uint64_t VAR19;
    VAR12 = FUN2(VAR3, VAR4, &VAR14, &VAR13, &VAR11);
    if (VAR12 == 0)
        return 0;
    VAR17 = FUN3(VAR9, VAR6 << 9);
    if (VAR17 > VAR9->VAR20 - VAR11)
        VAR17 = VAR9->VAR20 - VAR11;
    VAR15 = FUN4(VAR14[VAR11]);
    if (VAR15 & VAR21)
    {
        VAR17 = FUN5(VAR17, VAR9->VAR22, &VAR14[VAR11], 0);
        VAR16 = VAR17 << (VAR9->VAR23 - 9);
        if (VAR16 > VAR6)
            VAR16 = VAR6;
        VAR15 &= ~VAR21;
        goto VAR24;
    }
    if (VAR15 & VAR25)
        VAR17 = 1;
    while (VAR18 < VAR17)
    {
        int VAR26;
        VAR18 += FUN6(VAR17 - VAR18, &VAR14[VAR11 + VAR18]);
        VAR15 = FUN4(VAR14[VAR11 + VAR18]);
        if ((VAR15 & VAR21) || (VAR15 & VAR25))
            break;
        VAR26 = FUN5(VAR17 - VAR18, VAR9->VAR22, &VAR14[VAR11 + VAR18], 0);
        if (VAR26)
            FUN7(VAR3, VAR15, VAR26);
        VAR18 += VAR26;
        if (FUN4(VAR14[VAR11 + VAR18]))
            break;
    }
    VAR17 = VAR18;
    VAR15 = FUN8(VAR3, VAR17 * VAR9->VAR22);
    VAR16 = VAR17 << (VAR9->VAR23 - 9);
    if (VAR16 > VAR6)
        VAR16 = VAR6;
    VAR19 = (VAR4 & ~(VAR9->VAR22 - 1)) >> 9;
    if (VAR5)
    {
        VAR12 = FUN9(VAR3, VAR19, VAR15, 0, VAR5);
        if (VAR12 < 0)
            return 0;
    }
    if (VAR16 & (VAR9->VAR27 - 1))
    {
        uint64_t VAR28 = VAR16 & ~(VAR1)(VAR9->VAR27 - 1);
        VAR12 = FUN9(VAR3, VAR19 + VAR28, VAR15 + (VAR28 << 9), VAR16 - VAR28, VAR9->VAR27);
        if (VAR12 < 0)
            return 0;
    }
    for (VAR18 = 0; VAR18 < VAR17; VAR18++)
        VAR14[VAR11 + VAR18] = FUN10((VAR15 + (VAR18 << VAR9->VAR23)) | VAR21);
    if (FUN11(VAR9->VAR29, VAR13 + VAR11 * sizeof(VAR1), VAR14 + VAR11, VAR17 * sizeof(VAR1)) != VAR17 * sizeof(VAR1))
        return 0;
VAR24:
    *VAR7 = VAR16 - VAR5;
    return VAR15;
}