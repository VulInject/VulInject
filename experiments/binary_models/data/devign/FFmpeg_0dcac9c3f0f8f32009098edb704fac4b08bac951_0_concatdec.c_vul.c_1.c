static int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR9[VAR3];
    int VAR10;
    if (VAR5->VAR2)
        FUN2(&VAR5->VAR2);
    VAR5->VAR2 = FUN3();
    if (!VAR5->VAR2)
        return FUN4(VAR11);
    VAR5->VAR2->VAR12 |= VAR2->VAR12;
    VAR5->VAR2->VAR13 = VAR2->VAR13;
    if ((VAR10 = FUN5(VAR5->VAR2, VAR2)) < 0)
        return VAR10;
    if ((VAR10 = FUN6(&VAR5->VAR2, VAR8->VAR14, NULL, NULL)) < 0 || (VAR10 = FUN7(VAR5->VAR2, NULL)) < 0)
    {
        FUN8(VAR2, VAR15, "", VAR8->VAR14);
        FUN2(&VAR5->VAR2);
        return VAR10;
    }
    VAR5->VAR16 = VAR8;
    if (VAR8->VAR17 == VAR18)
        VAR8->VAR17 = !VAR3 ? 0 : VAR5->VAR9[VAR3 - 1].VAR17 + VAR5->VAR9[VAR3 - 1].VAR19;
    VAR8->VAR20 = (VAR5->VAR2->VAR17 == VAR18) ? 0 : VAR5->VAR2->VAR17;
    VAR8->VAR21 = (VAR8->VAR22 == VAR18) ? VAR8->VAR20 : VAR8->VAR22;
    if (VAR8->VAR19 == VAR18 && VAR8->VAR23 != VAR18)
        VAR8->VAR19 = VAR8->VAR23 - VAR8->VAR21;
    if (VAR5->VAR24)
    {
        FUN9(&VAR8->VAR25, "", VAR8->VAR17, 0);
        if (VAR8->VAR19 != VAR18)
            FUN9(&VAR8->VAR25, "", VAR8->VAR19, 0);
    }
    if ((VAR10 = FUN10(VAR2)) < 0)
        return VAR10;
    if (VAR8->VAR22 != VAR18)
    {
        if ((VAR10 = FUN11(VAR5->VAR2, -1, VAR26, VAR8->VAR22, VAR8->VAR22, 0)) < 0)
            return VAR10;
    }
    return 0;
}