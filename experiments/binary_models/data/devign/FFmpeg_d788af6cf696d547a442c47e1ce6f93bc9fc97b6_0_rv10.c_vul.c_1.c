static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    FUN2(&VAR8->VAR14, VAR4, VAR5 * 8);
    if (VAR8->VAR15 == VAR16)
        VAR10 = FUN3(VAR8);
    else
        VAR10 = FUN4(VAR8);
    if (VAR10 < 0)
    {
        FUN5(VAR8->VAR2, VAR17, "");
    }
    if (VAR8->VAR18 >= VAR8->VAR19 || VAR8->VAR20 >= VAR8->VAR21)
    {
        FUN5(VAR8->VAR2, VAR17, "", VAR8->VAR18, VAR8->VAR20);
    }
    VAR11 = VAR8->VAR20 * VAR8->VAR19 + VAR8->VAR18;
    VAR12 = VAR8->VAR19 * VAR8->VAR21 - VAR11;
    if (VAR10 > VAR12)
    {
        FUN5(VAR8->VAR2, VAR17, "");
    }
    if ((VAR8->VAR18 == 0 && VAR8->VAR20 == 0) || VAR8->VAR22 == NULL)
    {
        if (VAR8->VAR22)
        {
            FUN6(VAR8);
            FUN7(VAR8);
            VAR8->VAR18 = VAR8->VAR20 = VAR8->VAR23 = VAR8->VAR24 = 0;
        }
        if (FUN8(VAR8, VAR2) < 0)
            FUN9(VAR8);
    }
    FUN10(VAR2, "", VAR8->VAR25);
    if (VAR8->VAR15 == VAR16)
    {
        if (VAR8->VAR20 == 0)
            VAR8->VAR26 = 1;
    }
    else
    {
        VAR8->VAR26 = 1;
        VAR8->VAR23 = VAR8->VAR18;
    }
    VAR13 = VAR8->VAR18;
    VAR8->VAR24 = VAR8->VAR20;
    if (VAR8->VAR27)
    {
        VAR8->VAR28 = VAR8->VAR29 = VAR30;
    }
    else
    {
        VAR8->VAR28 = VAR8->VAR29 = VAR31;
    }
    if (VAR8->VAR32)
        VAR8->VAR33 = VAR34;
    FUN11(VAR8, VAR8->VAR25);
    VAR8->VAR35[0] = 0;
    VAR8->VAR35[1] = 0;
    VAR8->VAR35[2] = 0;
    VAR8->VAR36[0] = VAR8->VAR36[1] = VAR8->VAR36[2] = VAR8->VAR36[3] = VAR8->VAR37;
    VAR8->VAR36[4] = VAR8->VAR36[5] = VAR8->VAR38;
    FUN12(VAR8);
    for (VAR8->VAR39 = VAR10; VAR8->VAR39 > 0; VAR8->VAR39--)
    {
        int VAR40;
        FUN13(VAR8);
        FUN10(VAR2, "", VAR8->VAR18, VAR8->VAR20);
        VAR8->VAR41 = VAR42;
        VAR8->VAR43 = VAR44;
        VAR40 = FUN14(VAR8, VAR8->VAR45);
        if (VAR40 != VAR46 && VAR8->VAR14.VAR47 < FUN15(&VAR8->VAR14) && 8 * VAR6 >= FUN15(&VAR8->VAR14))
        {
            FUN5(VAR2, VAR48, "", VAR8->VAR14.VAR47, 8 * VAR6);
            VAR8->VAR14.VAR47 = 8 * VAR6;
            VAR40 = VAR49;
        }
        if (VAR40 == VAR46 || VAR8->VAR14.VAR47 < FUN15(&VAR8->VAR14))
        {
            FUN5(VAR8->VAR2, VAR17, "", VAR8->VAR18, VAR8->VAR20);
        }
        if (VAR8->VAR50 != VAR51)
            FUN16(VAR8);
        FUN17(VAR8, VAR8->VAR45);
        if (VAR8->VAR52)
            FUN18(VAR8);
        if (++VAR8->VAR18 == VAR8->VAR19)
        {
            VAR8->VAR18 = 0;
            VAR8->VAR20++;
            FUN12(VAR8);
        }
        if (VAR8->VAR18 == VAR8->VAR23)
            VAR8->VAR26 = 0;
        if (VAR40 == VAR53)
            break;
    }
    FUN19(VAR8, VAR13, VAR8->VAR24, VAR8->VAR18 - 1, VAR8->VAR20, VAR54 | VAR55 | VAR56);
    return VAR8->VAR14.VAR47;