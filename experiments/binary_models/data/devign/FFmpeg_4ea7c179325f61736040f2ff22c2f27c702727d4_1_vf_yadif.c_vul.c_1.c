static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    FUN2(VAR4);
    if (VAR4->VAR11->VAR12 < 3 || VAR4->VAR11->VAR13 < 3)
    {
        FUN3(VAR6, VAR14, "");
        return FUN4(VAR15);
    }
    if (VAR9->VAR16)
        FUN5(VAR6, 1);
    if (VAR9->VAR17)
        FUN6(VAR9->VAR17);
    VAR9->VAR17 = VAR9->VAR18;
    VAR9->VAR18 = VAR9->VAR19;
    VAR9->VAR19 = VAR4;
    if (!VAR9->VAR18)
        return 0;
    if (VAR9->VAR20 && !VAR9->VAR18->VAR11->VAR21)
    {
        VAR9->VAR22 = FUN7(VAR9->VAR18, ~VAR23);
        if (!VAR9->VAR22)
            return FUN4(VAR24);
        FUN8(&VAR9->VAR17);
        if (VAR9->VAR22->VAR25 != VAR26)
            VAR9->VAR22->VAR25 *= 2;
        return FUN9(VAR6->VAR27[0], VAR9->VAR22);
    }
    if (!VAR9->VAR17 && !(VAR9->VAR17 = FUN7(VAR9->VAR18, ~VAR23)))
        return FUN4(VAR24);
    VAR9->VAR22 = FUN10(VAR6->VAR27[0], VAR28, VAR2->VAR13, VAR2->VAR12);
    if (!VAR9->VAR22)
        return FUN4(VAR24);
    FUN11(VAR9->VAR22, VAR9->VAR18);
    VAR9->VAR22->VAR11->VAR21 = 0;
    if (VAR9->VAR22->VAR25 != VAR26)
        VAR9->VAR22->VAR25 *= 2;
    return FUN5(VAR6, 0);
}