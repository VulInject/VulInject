static int FUN1(VAR1 *VAR2, unsigned int VAR3, VAR4 *VAR5, unsigned int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR3];
    VAR10 *VAR11 = &VAR8->VAR12[VAR6];
    VAR13 *VAR14 = &VAR11->VAR15[VAR16];
    VAR13 *VAR17 = &VAR11->VAR15[VAR18];
    int VAR19;
    if (VAR8->VAR20 & VAR21)
        if (FUN2(VAR5))
            if ((VAR19 = FUN3(VAR2, VAR5, VAR3, VAR6, VAR16)) < 0)
                return VAR19;
    if (VAR8->VAR20 & VAR22)
        if (FUN2(VAR5))
            if ((VAR19 = FUN3(VAR2, VAR5, VAR3, VAR6, VAR18)) < 0)
                return VAR19;
    if (VAR14->VAR23 + VAR17->VAR23 > 8)
    {
        FUN4(VAR2->VAR24, VAR25, "");
        return VAR26;
    }
    if (VAR14->VAR23 && VAR17->VAR23 && VAR14->VAR27 != VAR17->VAR27)
    {
        FUN4(VAR2->VAR24, VAR25, "");
        return VAR26;
    }
    if (!VAR14->VAR23 && VAR17->VAR23)
        VAR14->VAR27 = VAR17->VAR27;
    if (VAR8->VAR20 & VAR28)
        if (FUN2(VAR5))
            VAR11->VAR29 = FUN5(VAR5, 15);
    VAR11->VAR30 = FUN6(VAR5, 2);
    VAR11->VAR31 = FUN6(VAR5, 5);
    if (VAR11->VAR31 > 24)
    {
        FUN4(VAR2->VAR24, VAR25, "");
        VAR11->VAR31 = 0;
        return VAR26;
    }
    VAR11->VAR32 = FUN7(VAR2, VAR3, VAR6);
    return 0;
}