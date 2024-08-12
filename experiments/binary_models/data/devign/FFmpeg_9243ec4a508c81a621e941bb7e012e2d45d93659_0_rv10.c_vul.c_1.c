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
        return -1;
    }
    if (VAR8->VAR18 >= VAR8->VAR19 || VAR8->VAR20 >= VAR8->VAR21)
    {
        FUN5(VAR8->VAR2, VAR17, "", VAR8->VAR18, VAR8->VAR20);
        return -1;
    }
    VAR11 = VAR8->VAR20 * VAR8->VAR19 + VAR8->VAR18;
    VAR12 = VAR8->VAR19 * VAR8->VAR21 - VAR11;
    if (VAR10 > VAR12)
    {
        FUN5(VAR8->VAR2, VAR17, "");
        return -1;
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
            return -1;
        FUN9(VAR8);
    }
    else
    {
        if (VAR8->VAR22->VAR25.VAR26 != VAR8->VAR26)
        {
            FUN5(VAR8->VAR2, VAR17, "");
            return -1;
        }
    }
    FUN10(VAR2, "", VAR8->VAR27);
    if (VAR8->VAR15 == VAR16)
    {
        if (VAR8->VAR20 == 0)
            VAR8->VAR28 = 1;
    }
    else
    {
        VAR8->VAR28 = 1;
        VAR8->VAR23 = VAR8->VAR18;
    }
    VAR13 = VAR8->VAR18;
    VAR8->VAR24 = VAR8->VAR20;
    if (VAR8->VAR29)
    {
        VAR8->VAR30 = VAR8->VAR31 = VAR32;
    }
    else
    {
        VAR8->VAR30 = VAR8->VAR31 = VAR33;
    }
    if (VAR8->VAR34)
        VAR8->VAR35 = VAR36;
    FUN11(VAR8, VAR8->VAR27);
    VAR8->VAR37[0] = 0;
    VAR8->VAR37[1] = 0;
    VAR8->VAR37[2] = 0;
    VAR8->VAR38[0] = VAR8->VAR38[1] = VAR8->VAR38[2] = VAR8->VAR38[3] = VAR8->VAR39;
    VAR8->VAR38[4] = VAR8->VAR38[5] = VAR8->VAR40;
    FUN12(VAR8);
    for (VAR8->VAR41 = VAR10; VAR8->VAR41 > 0; VAR8->VAR41--)
    {
        int VAR42;
        FUN13(VAR8);
        FUN10(VAR2, "", VAR8->VAR18, VAR8->VAR20);
        VAR8->VAR43 = VAR44;
        VAR8->VAR45 = VAR46;
        VAR42 = FUN14(VAR8, VAR8->VAR47);
        if (VAR42 != VAR48 && VAR8->VAR14.VAR49 < FUN15(&VAR8->VAR14) && 8 * VAR6 >= FUN15(&VAR8->VAR14))
        {
            FUN5(VAR2, VAR50, "", VAR8->VAR14.VAR49, 8 * VAR6);
            VAR8->VAR14.VAR49 = 8 * VAR6;
            VAR42 = VAR51;
        }
        if (VAR42 == VAR48 || VAR8->VAR14.VAR49 < FUN15(&VAR8->VAR14))
        {
            FUN5(VAR8->VAR2, VAR17, "", VAR8->VAR18, VAR8->VAR20);
            return -1;
        }
        if (VAR8->VAR26 != VAR52)
            FUN16(VAR8);
        FUN17(VAR8, VAR8->VAR47);
        if (VAR8->VAR53)
            FUN18(VAR8);
        if (++VAR8->VAR18 == VAR8->VAR19)
        {
            VAR8->VAR18 = 0;
            VAR8->VAR20++;
            FUN12(VAR8);
        }
        if (VAR8->VAR18 == VAR8->VAR23)
            VAR8->VAR28 = 0;
        if (VAR42 == VAR54)
            break;
    }
    FUN19(VAR8, VAR13, VAR8->VAR24, VAR8->VAR18 - 1, VAR8->VAR20, VAR55);
    return VAR8->VAR14.VAR49;
}