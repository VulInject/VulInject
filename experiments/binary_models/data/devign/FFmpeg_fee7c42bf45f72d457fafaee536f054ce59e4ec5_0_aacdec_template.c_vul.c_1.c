static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *const VAR11 = &VAR8->VAR12[1].VAR11;
    VAR13 *VAR14;
    int VAR15, VAR16;
    int VAR17 = VAR11->VAR18 ? 960 : 1024;
    int VAR19 = VAR11->VAR19;
    int VAR20 = VAR11->VAR21;
    if (VAR20 == VAR22 || VAR20 == VAR23)
        VAR17 >>= 1;
    VAR8->VAR24 = VAR3;
    if ((VAR15 = FUN2(VAR2)) < 0)
        return VAR15;
    VAR8->VAR2->VAR25 = VAR20 - 1;
    VAR8->VAR26 = 0;
    if (VAR19 < 0 || (VAR19 >= 8 && VAR19 < 11) || VAR19 >= 13)
    {
        FUN3(VAR2, "", VAR19);
        return VAR27;
    }
    for (VAR16 = 0; VAR16 < VAR28[VAR19]; VAR16++)
    {
        const int VAR29 = VAR30[VAR19 - 1][VAR16][0];
        const int VAR31 = VAR30[VAR19 - 1][VAR16][1];
        if (!(VAR14 = FUN4(VAR8, VAR29, VAR31)))
        {
            FUN5(VAR8->VAR2, VAR32, "", VAR29, VAR31);
            return VAR27;
        }
        VAR14->VAR33 = 1;
        if (VAR20 != VAR23)
            FUN6(VAR6, 4);
        switch (VAR29)
        {
        case VAR34:
            VAR15 = FUN7(VAR8, &VAR14->VAR35[0], VAR6, 0, 0);
            break;
        case VAR36:
            VAR15 = FUN8(VAR8, VAR6, VAR14);
            break;
        case VAR37:
            VAR15 = FUN7(VAR8, &VAR14->VAR35[0], VAR6, 0, 0);
            break;
        }
        if (VAR15 < 0)
            return VAR15;
    }
    FUN9(VAR8);
    VAR8->VAR24->VAR38 = VAR17;
    VAR8->VAR24->VAR39 = VAR2->VAR39;
    *VAR4 = 1;
    FUN10(VAR6, FUN11(VAR6));
    return 0;
}