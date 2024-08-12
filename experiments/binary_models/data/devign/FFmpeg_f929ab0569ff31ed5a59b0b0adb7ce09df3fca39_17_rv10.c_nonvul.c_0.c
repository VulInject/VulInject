static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR17 = VAR5 * 8;
    FUN2(&VAR11->VAR19, VAR4, FUN3(VAR5, VAR6) * 8);
    if (VAR11->VAR20 == VAR21)
        VAR13 = FUN4(VAR11);
    else
        VAR13 = FUN5(VAR8);
    if (VAR13 < 0)
    {
        FUN6(VAR11->VAR2, VAR22, "");
        return VAR23;
    }
    if (VAR11->VAR24 >= VAR11->VAR25 || VAR11->VAR26 >= VAR11->VAR27)
    {
        FUN6(VAR11->VAR2, VAR22, "", VAR11->VAR24, VAR11->VAR26);
        return VAR23;
    }
    VAR14 = VAR11->VAR26 * VAR11->VAR25 + VAR11->VAR24;
    VAR15 = VAR11->VAR25 * VAR11->VAR27 - VAR14;
    if (VAR13 > VAR15)
    {
        FUN6(VAR11->VAR2, VAR22, "");
        return VAR23;
    }
    if ((VAR11->VAR24 == 0 && VAR11->VAR26 == 0) || !VAR11->VAR28)
    {
        if (VAR11->VAR28)
        {
            FUN7(&VAR11->VAR29);
            FUN8(VAR11);
            VAR11->VAR24 = VAR11->VAR26 = VAR11->VAR30 = VAR11->VAR31 = 0;
        }
        if ((VAR18 = FUN9(VAR11, VAR2)) < 0)
            return VAR18;
        FUN10(VAR11);
    }
    else
    {
        if (VAR11->VAR28->VAR32->VAR33 != VAR11->VAR33)
        {
            FUN6(VAR11->VAR2, VAR22, "");
            return VAR23;
        }
    }
    FUN11(VAR2, "", VAR11->VAR34);
    if (VAR11->VAR20 == VAR21)
    {
        if (VAR11->VAR26 == 0)
            VAR11->VAR35 = 1;
    }
    else
    {
        VAR11->VAR35 = 1;
        VAR11->VAR30 = VAR11->VAR24;
    }
    VAR16 = VAR11->VAR24;
    VAR11->VAR31 = VAR11->VAR26;
    if (VAR11->VAR36)
    {
        VAR11->VAR37 = VAR11->VAR38 = VAR39;
    }
    else
    {
        VAR11->VAR37 = VAR11->VAR38 = VAR40;
    }
    if (VAR11->VAR41)
        VAR11->VAR42 = VAR43;
    FUN12(VAR11, VAR11->VAR34);
    VAR11->VAR44[0] = 0;
    VAR11->VAR44[1] = 0;
    VAR11->VAR44[2] = 0;
    VAR11->VAR45[0] = VAR11->VAR45[1] = VAR11->VAR45[2] = VAR11->VAR45[3] = VAR11->VAR46;
    VAR11->VAR45[4] = VAR11->VAR45[5] = VAR11->VAR47;
    FUN13(VAR11);
    for (VAR11->VAR48 = VAR13; VAR11->VAR48 > 0; VAR11->VAR48--)
    {
        int VAR18;
        FUN14(VAR11);
        FUN11(VAR2, "", VAR11->VAR24, VAR11->VAR26);
        VAR11->VAR49 = VAR50;
        VAR11->VAR51 = VAR52;
        VAR18 = FUN15(VAR11, VAR11->VAR53);
        if (VAR18 != VAR54)
        {
            int VAR55 = FUN16(&VAR11->VAR19, 16);
            if (FUN17(&VAR11->VAR19) + 16 > VAR17)
                VAR55 >>= FUN17(&VAR11->VAR19) + 16 - VAR17;
            if (!VAR55)
                VAR18 = VAR56;
        }
        if (VAR18 != VAR54 && VAR17 < FUN17(&VAR11->VAR19) && 8 * VAR6 >= FUN17(&VAR11->VAR19))
        {
            VAR17 = VAR6 * 8;
            FUN6(VAR2, VAR57, "", 8 * VAR5, VAR17);
            VAR18 = VAR58;
        }
        if (VAR18 == VAR54 || VAR17 < FUN17(&VAR11->VAR19))
        {
            FUN6(VAR11->VAR2, VAR22, "", VAR11->VAR24, VAR11->VAR26);
            return VAR23;
        }
        if (VAR11->VAR33 != VAR59)
            FUN18(VAR11);
        FUN19(VAR11, VAR11->VAR53);
        if (VAR11->VAR60)
            FUN20(VAR11);
        if (++VAR11->VAR24 == VAR11->VAR25)
        {
            VAR11->VAR24 = 0;
            VAR11->VAR26++;
            FUN13(VAR11);
        }
        if (VAR11->VAR24 == VAR11->VAR30)
            VAR11->VAR35 = 0;
        if (VAR18 == VAR56)
            break;
    }
    FUN21(&VAR11->VAR29, VAR16, VAR11->VAR31, VAR11->VAR24 - 1, VAR11->VAR26, VAR61);
    return VAR17;
}