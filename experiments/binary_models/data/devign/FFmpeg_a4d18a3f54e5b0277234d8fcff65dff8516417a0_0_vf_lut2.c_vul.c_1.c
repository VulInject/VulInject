static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR4->VAR11[0];
    VAR12 *VAR13, *VAR14, *VAR15;
    int VAR16;
    if ((VAR16 = FUN2(&VAR7->VAR2, 0, &VAR14, 0)) < 0 || (VAR16 = FUN2(&VAR7->VAR2, 1, &VAR15, 0)) < 0)
        return VAR16;
    if (VAR4->VAR17)
    {
        VAR13 = FUN3(VAR14);
        if (!VAR13)
            return FUN4(VAR18);
    }
    else
    {
        VAR13 = FUN5(VAR10, VAR10->VAR19, VAR10->VAR20);
        if (!VAR13)
            return FUN4(VAR18);
        FUN6(VAR13, VAR14);
        VAR7->FUN7(VAR7, VAR13, VAR14, VAR15);
    }
    VAR13->VAR21 = FUN8(VAR7->VAR2.VAR21, VAR7->VAR2.VAR22, VAR10->VAR22);
    return FUN9(VAR10, VAR13);
}