static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR7 = FUN2(VAR2->VAR11, VAR2->VAR11->VAR12);
    if (!VAR7)
        return FUN3(VAR13);
    VAR9 = FUN4(sizeof(VAR8));
    if (!VAR9)
        return FUN3(VAR13);
    VAR7->VAR14 = VAR9;
    VAR7->VAR15->VAR16 = VAR17;
    VAR7->VAR18 = 0;
    if ((VAR10 = FUN5(VAR2, VAR4, VAR5)) < 0)
        return VAR10;
    if (VAR9->VAR19 && (!VAR9->VAR20 || !VAR9->VAR21 || (!VAR9->VAR22 && !VAR9->VAR23)))
    {
        FUN6(VAR2->VAR11, VAR24, "", VAR7->VAR25);
        VAR9->VAR23 = 0;
        return 0;
    }
    if (!VAR9->VAR26)
        VAR9->VAR26 = 1;
    if (!VAR9->VAR27)
        VAR9->VAR27 = VAR2->VAR27;
    FUN7(VAR7, 64, VAR9->VAR26, VAR9->VAR27);
    if (VAR7->VAR15->VAR16 == VAR28 && !VAR7->VAR15->VAR29 && VAR9->VAR20 == 1)
        VAR7->VAR15->VAR29 = FUN8(VAR9->VAR26, VAR7->VAR15->VAR30, VAR9->VAR27);
    if (VAR7->VAR31 != VAR32)
    {
        assert(VAR7->VAR31 % VAR9->VAR26 == 0);
        VAR7->VAR31 /= VAR9->VAR26;
    }
    VAR9->VAR33 = VAR7->VAR25;
    FUN9(VAR2, VAR7);
    if (VAR9->VAR34 - 1 < VAR9->VAR35 && VAR9->VAR36[VAR9->VAR34 - 1].VAR37)
    {
        if (FUN10(&VAR9->VAR4, VAR9->VAR36[VAR9->VAR34 - 1].VAR37, VAR38) < 0)
            FUN6(VAR2->VAR11, VAR24, "", VAR7->VAR25, VAR9->VAR36[VAR9->VAR34 - 1].VAR37, strerror(VAR39));
    }
    else
        VAR9->VAR4 = VAR2->VAR11->VAR4;
    switch (VAR7->VAR15->VAR40)
    {
    case VAR41:
    case VAR42:
    case VAR43:
        VAR7->VAR15->VAR44 = 0;
        VAR7->VAR15->VAR45 = 0;
        break;
    }
    FUN11(&VAR9->VAR46);
    FUN11(&VAR9->VAR47);
    FUN11(&VAR9->VAR48);
    FUN11(&VAR9->VAR49);
    FUN11(&VAR9->VAR50);
    return 0;
}