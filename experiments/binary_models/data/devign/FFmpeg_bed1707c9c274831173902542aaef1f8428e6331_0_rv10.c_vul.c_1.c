static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    FUN2(&VAR7->VAR13, VAR4, VAR5 * 8);
    for (VAR9 = 0; VAR9 < VAR5 * 8 && VAR9 < 200; VAR9++)
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
    FUN9(VAR7, VAR7->VAR21);
    VAR7->VAR33[0] = 0;
    VAR7->VAR33[1] = 0;
    VAR7->VAR33[2] = 0;
    VAR7->VAR34[0] = VAR7->VAR34[1] = VAR7->VAR34[2] = VAR7->VAR34[3] = VAR7->VAR18 * 2 + 2;
    VAR7->VAR34[4] = VAR7->VAR34[5] = VAR7->VAR18 + 2;
    FUN10(VAR7);
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        int VAR35;
        FUN11(VAR7);
        FUN3("", VAR7->VAR17, VAR7->VAR19);
        VAR7->VAR36.FUN12(VAR7->VAR37[0]);
        VAR7->VAR38 = VAR39;
        VAR7->VAR40 = VAR41;
        VAR35 = FUN13(VAR7, VAR7->VAR37);
        if (VAR35 == VAR42)
        {
            FUN7(VAR7->VAR2, VAR16, "", VAR7->VAR17, VAR7->VAR19);
            return -1;
        }
        FUN14(VAR7);
        FUN15(VAR7, VAR7->VAR37);
        if (VAR7->VAR43)
            FUN16(VAR7);
        if (++VAR7->VAR17 == VAR7->VAR18)
        {
            VAR7->VAR17 = 0;
            VAR7->VAR19++;
            FUN10(VAR7);
        }
        if (VAR7->VAR17 == VAR7->VAR23)
            VAR7->VAR22 = 0;
        if (VAR35 == VAR44)
            break;
    }
    return VAR5;
}