static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    FUN2(&VAR7->VAR13, VAR4, VAR5 * 8);
    for (VAR9 = 0; VAR9 < VAR5 * 8 && VAR9 < 100; VAR9++)
        FUN3("", FUN4(&VAR7->VAR13));
    FUN3("");
    return 0;
    if (VAR7->VAR14 == VAR15)
        VAR10 = FUN5(VAR7);
    else
        VAR10 = FUN6(VAR7);
    if (VAR10 < 0)
    {
        FUN7(VAR7->VAR2, VAR16, "");
        return -1;
    }
    if (VAR7->VAR17 >= VAR7->VAR18 || VAR7->VAR19 >= VAR7->VAR20)
    {
        FUN7(VAR7->VAR2, VAR16, "", VAR7->VAR17, VAR7->VAR19);
        return -1;
    }
    VAR11 = VAR7->VAR19 * VAR7->VAR18 + VAR7->VAR17;
    VAR12 = VAR7->VAR18 * VAR7->VAR20 - VAR11;
    if (VAR10 > VAR12)
    {
        FUN7(VAR7->VAR2, VAR16, "");
        return -1;
    }
    if (VAR7->VAR17 == 0 && VAR7->VAR19 == 0)
    {
        if (FUN8(VAR7, VAR2) < 0)
            return -1;
    }
    FUN3("", VAR7->VAR21);
    if (VAR7->VAR14 == VAR15)
    {
        if (VAR7->VAR19 == 0)
            VAR7->VAR22 = 1;
    }
    else
    {
        VAR7->VAR22 = 1;
        VAR7->VAR23 = VAR7->VAR17;
        VAR7->VAR24 = VAR7->VAR19;
    }
    if (VAR7->VAR25)
    {
        VAR7->VAR26 = VAR7->VAR27 = VAR28;
    }
    else
    {
        VAR7->VAR26 = VAR7->VAR27 = VAR29;
    }
    if (VAR7->VAR30)
        VAR7->VAR31 = VAR32;
    VAR7->VAR33 = VAR7->VAR31[VAR7->VAR21];
    VAR7->VAR34 = VAR7->VAR26[VAR7->VAR21];
    VAR7->VAR35 = VAR7->VAR27[VAR7->VAR33];
    VAR7->VAR36[0] = 0;
    VAR7->VAR36[1] = 0;
    VAR7->VAR36[2] = 0;
    VAR7->VAR37[0] = VAR7->VAR37[1] = VAR7->VAR37[2] = VAR7->VAR37[3] = VAR7->VAR18 * 2 + 2;
    VAR7->VAR37[4] = VAR7->VAR37[5] = VAR7->VAR18 + 2;
    FUN9(VAR7);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        int VAR38;
        FUN10(VAR7);
        FUN3("", VAR7->VAR17, VAR7->VAR19);
        VAR7->VAR39.FUN11(VAR7->VAR40[0]);
        VAR7->VAR41 = VAR42;
        VAR7->VAR43 = VAR44;
        VAR38 = FUN12(VAR7, VAR7->VAR40);
        if (VAR38 == VAR45)
        {
            FUN7(VAR7->VAR2, VAR16, "", VAR7->VAR17, VAR7->VAR19);
            return -1;
        }
        FUN13(VAR7);
        FUN14(VAR7, VAR7->VAR40);
        if (VAR7->VAR46)
            FUN15(VAR7);
        if (++VAR7->VAR17 == VAR7->VAR18)
        {
            VAR7->VAR17 = 0;
            VAR7->VAR19++;
            FUN9(VAR7);
        }
        if (VAR7->VAR17 == VAR7->VAR23)
            VAR7->VAR22 = 0;
        if (VAR38 == VAR47)
            break;
    }
    return VAR5;
}