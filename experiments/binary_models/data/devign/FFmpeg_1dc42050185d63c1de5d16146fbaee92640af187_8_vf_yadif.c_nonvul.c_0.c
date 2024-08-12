static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    if (VAR9->VAR11)
        FUN2(VAR6, 1);
    if (VAR9->VAR12)
        FUN3(VAR9->VAR12);
    VAR9->VAR12 = VAR9->VAR13;
    VAR9->VAR13 = VAR9->VAR14;
    VAR9->VAR14 = VAR4;
    if (!VAR9->VAR13)
        return 0;
    if (VAR9->VAR15 && !VAR9->VAR13->VAR16->VAR17)
    {
        VAR9->VAR18 = FUN4(VAR9->VAR13, VAR19);
        if (!VAR9->VAR18)
            return FUN5(VAR20);
        FUN6(&VAR9->VAR12);
        if (VAR9->VAR18->VAR21 != VAR22)
            VAR9->VAR18->VAR21 *= 2;
        return FUN7(VAR6->VAR23[0], VAR9->VAR18);
    }
    if (!VAR9->VAR12 && !(VAR9->VAR12 = FUN4(VAR9->VAR13, VAR19)))
        return FUN5(VAR20);
    VAR9->VAR18 = FUN8(VAR6->VAR23[0], VAR24 | VAR25 | VAR26, VAR2->VAR27, VAR2->VAR28);
    FUN9(VAR9->VAR18, VAR9->VAR13);
    VAR9->VAR18->VAR16->VAR17 = 0;
    if (VAR9->VAR18->VAR21 != VAR22)
        VAR9->VAR18->VAR21 *= 2;
    return FUN7(VAR6->VAR23[0], VAR9->VAR18);
}