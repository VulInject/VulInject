static int FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5, unsigned int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR6];
    VAR10 *VAR11 = &VAR8->VAR12[VAR13];
    VAR10 *VAR14 = &VAR8->VAR12[VAR15];
    VAR16 *VAR17 = &VAR2->VAR18[VAR3];
    if (VAR17->VAR19 & VAR20)
        if (FUN2(VAR5))
            if (FUN3(VAR2, VAR5, VAR6, VAR13) < 0)
                return -1;
    if (VAR17->VAR19 & VAR21)
        if (FUN2(VAR5))
            if (FUN3(VAR2, VAR5, VAR6, VAR15) < 0)
                return -1;
    if (VAR11->VAR22 + VAR14->VAR22 > 8)
    {
        FUN4(VAR2->VAR23, VAR24, "");
        return -1;
    }
    if (VAR11->VAR22 && VAR14->VAR22 && VAR11->VAR25 != VAR14->VAR25)
    {
        FUN4(VAR2->VAR23, VAR24, "");
        return -1;
    }
    if (!VAR11->VAR22 && VAR14->VAR22)
        VAR11->VAR25 = VAR14->VAR25;
    if (VAR17->VAR19 & VAR26)
        if (FUN2(VAR5))
            VAR8->VAR27 = FUN5(VAR5, 15);
    VAR8->VAR28 = FUN6(VAR5, 2);
    VAR8->VAR29 = FUN6(VAR5, 5);
    if (VAR8->VAR29 > 24)
    {
        FUN4(VAR2->VAR23, VAR24, "");
        return -1;
    }
    VAR8->VAR30 = FUN7(VAR2, VAR3, VAR6);
    return 0;
}