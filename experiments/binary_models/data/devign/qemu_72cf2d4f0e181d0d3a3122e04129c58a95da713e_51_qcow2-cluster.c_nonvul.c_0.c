VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, int VAR5, int VAR6, int *VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR3->VAR12;
    int VAR13, VAR14;
    uint64_t VAR15, *VAR16, VAR17;
    int VAR18, VAR19 = 0;
    VAR8 *VAR20;
    VAR14 = FUN2(VAR3, VAR4, &VAR16, &VAR15, &VAR13);
    if (VAR14 == 0)
        return 0;
    VAR18 = FUN3(VAR11, VAR6 << 9);
    VAR18 = FUN4(VAR18, VAR11->VAR21 - VAR13);
    VAR17 = FUN5(VAR16[VAR13]);
    if (VAR17 & VAR22)
    {
        VAR18 = FUN6(VAR18, VAR11->VAR23, &VAR16[VAR13], 0, 0);
        VAR17 &= ~VAR22;
        VAR9->VAR18 = 0;
        goto VAR24;
    }
    if (VAR17 & VAR25)
        VAR18 = 1;
    while (VAR19 < VAR18)
    {
        VAR19 += FUN6(VAR18 - VAR19, VAR11->VAR23, &VAR16[VAR13], VAR19, 0);
        if (FUN5(VAR16[VAR13 + VAR19]))
            break;
        VAR19 += FUN7(VAR18 - VAR19, &VAR16[VAR13 + VAR19]);
        VAR17 = FUN5(VAR16[VAR13 + VAR19]);
        if ((VAR17 & VAR22) || (VAR17 & VAR25))
            break;
    }
    VAR18 = VAR19;
    FUN8(VAR20, &VAR11->VAR26, VAR27)
    {
        uint64_t VAR28 = VAR4 + VAR18 * VAR11->VAR23;
        uint64_t VAR29 = VAR20->VAR4;
        uint64_t VAR30 = VAR20->VAR4 + VAR20->VAR18 * VAR11->VAR23;
        if (VAR28 < VAR29 || VAR4 > VAR30)
        {
        }
        else
        {
            if (VAR4 < VAR29)
            {
                VAR18 = (VAR29 - VAR4) >> VAR11->VAR31;
            }
            else
            {
                VAR18 = 0;
            }
            if (VAR18 == 0)
            {
                VAR9->VAR32 = VAR20;
                VAR9->VAR18 = 0;
                *VAR7 = 0;
                return 0;
            }
        }
    }
    if (!VAR18)
    {
        FUN9();
    }
    FUN10(&VAR11->VAR26, VAR9, VAR27);
    VAR17 = FUN11(VAR3, VAR18 * VAR11->VAR23);
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR18 = VAR18;
VAR24:
    VAR9->VAR33 = FUN4(VAR18 << (VAR11->VAR31 - 9), VAR6);
    *VAR7 = VAR9->VAR33 - VAR5;
    return VAR17;
}