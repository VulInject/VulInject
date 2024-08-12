int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[0];
    VAR3 *VAR12;
    int VAR13;
    if (!VAR4)
    {
        VAR7->VAR14 = 1;
        return 0;
    }
    else if (VAR7->VAR14)
        return FUN2(VAR15);
    if (!FUN3(VAR7->VAR16) && (VAR13 = FUN4(VAR7->VAR16, FUN5(VAR7->VAR16) + sizeof(VAR12))) < 0)
        return VAR13;
    if (!(VAR5 & VAR17))
    {
        VAR13 = FUN6(VAR2, VAR4);
        if (VAR13 < 0)
            return VAR13;
    }
    if (VAR5 & VAR18)
    {
        VAR12 = VAR4;
    }
    else
    {
        VAR12 = FUN7(VAR10, VAR19, VAR4->VAR20->VAR21, VAR4->VAR20->VAR22);
        FUN8(VAR12->VAR23, VAR12->VAR24, (void *)VAR4->VAR23, VAR4->VAR24, VAR4->VAR25, VAR4->VAR20->VAR21, VAR4->VAR20->VAR22);
        FUN9(VAR12, VAR4);
    }
    if ((VAR13 = FUN10(VAR7->VAR16, &VAR12, sizeof(VAR12), NULL)) < 0)
    {
        if (VAR12 != VAR4)
            FUN11(VAR12);
        return VAR13;
    }
    VAR7->VAR26 = 0;
    return 0;
}