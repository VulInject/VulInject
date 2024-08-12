static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    if (!FUN2(VAR2))
        return FUN3(VAR10);
    if (VAR6->VAR11)
    {
        VAR9 = FUN4(VAR2, 0);
        if (!VAR9)
            return FUN3(VAR12);
        VAR6->VAR13 = VAR9->VAR14;
        VAR9->VAR15->VAR16 = VAR17;
        VAR9->VAR15->VAR18 = VAR6->VAR11;
        VAR9->VAR15->VAR19 = 0;
        VAR9->VAR15->VAR20 = VAR6->VAR20;
    }
    if (VAR6->VAR21)
    {
        VAR9 = FUN4(VAR2, 0);
        if (!VAR9)
            return FUN3(VAR12);
        FUN5(VAR9, 33, 1, VAR6->VAR22);
        VAR9->VAR15->VAR16 = VAR23;
        VAR9->VAR15->VAR18 = VAR6->VAR21;
        VAR9->VAR15->VAR19 = 0;
        VAR9->VAR15->VAR24 = VAR6->VAR25;
        VAR9->VAR15->VAR22 = VAR6->VAR22;
        VAR9->VAR15->VAR26 = VAR6->VAR27 * 8;
        VAR9->VAR15->VAR28 = VAR9->VAR15->VAR24 * VAR9->VAR15->VAR22 * VAR9->VAR15->VAR26 / 4;
        VAR9->VAR15->VAR29 = VAR9->VAR15->VAR24 * VAR9->VAR15->VAR26;
        VAR6->VAR30 = VAR9->VAR14;
        VAR6->VAR31 = 0;
    }
    return 1;
}