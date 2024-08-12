static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    int32_t VAR12, VAR13, VAR14;
    size_t VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18 = 0;
    size_t VAR19 = 0;
    uint32_t VAR20;
    enum AVSphericalProjection VAR21;
    if (VAR2->VAR22->VAR23 < 1)
        return 0;
    VAR7 = VAR2->VAR22->VAR24[VAR2->VAR22->VAR23 - 1];
    VAR9 = VAR7->VAR25;
    if (VAR5.VAR10 < 8)
    {
        FUN2(VAR2->VAR22, VAR26, "");
        return VAR27;
    }
    VAR10 = FUN3(VAR4);
    if (VAR10 <= 12 || VAR10 > VAR5.VAR10)
        return VAR27;
    VAR20 = FUN4(VAR4);
    if (VAR20 != FUN5('', '', '', ''))
    {
        FUN2(VAR2->VAR22, VAR26, "");
        return 0;
    }
    FUN6(VAR4, 4);
    FUN6(VAR4, VAR10 - 12);
    VAR10 = FUN3(VAR4);
    if (VAR10 > VAR5.VAR10)
        return VAR27;
    VAR20 = FUN4(VAR4);
    if (VAR20 != FUN5('', '', '', ''))
    {
        FUN2(VAR2->VAR22, VAR26, "");
        return 0;
    }
    VAR10 = FUN3(VAR4);
    if (VAR10 > VAR5.VAR10)
        return VAR27;
    VAR20 = FUN4(VAR4);
    if (VAR20 != FUN5('', '', '', ''))
    {
        FUN2(VAR2->VAR22, VAR26, "");
        return 0;
    }
    FUN6(VAR4, 4);
    VAR12 = FUN3(VAR4);
    VAR13 = FUN3(VAR4);
    VAR14 = FUN3(VAR4);
    VAR10 = FUN3(VAR4);
    if (VAR10 > VAR5.VAR10)
        return VAR27;
    VAR20 = FUN4(VAR4);
    FUN6(VAR4, 4);
    switch (VAR20)
    {
    case FUN5('', '', '', ''):
        VAR11 = FUN3(VAR4);
        if (VAR11)
        {
            FUN2(VAR2->VAR22, VAR28, "", VAR11);
            return 0;
        }
        VAR21 = VAR29;
        VAR19 = FUN3(VAR4);
        break;
    case FUN5('', '', '', ''):
        VAR16 = FUN3(VAR4);
        VAR18 = FUN3(VAR4);
        VAR15 = FUN3(VAR4);
        VAR17 = FUN3(VAR4);
        if (VAR18 >= VAR30 - VAR16 || VAR17 >= VAR30 - VAR15)
        {
            FUN2(VAR2->VAR22, VAR26, "" VAR31 ""
                                        "" VAR31 "" VAR31 "" VAR31 "",
                   VAR15, VAR16, VAR17, VAR18);
            return VAR27;
        }
        if (VAR15 || VAR16 || VAR17 || VAR18)
            VAR21 = VAR32;
        else
            VAR21 = VAR33;
        break;
    default:
        FUN2(VAR2->VAR22, VAR26, "");
        return 0;
    }
    VAR9->VAR34 = FUN7(&VAR9->VAR35);
    if (!VAR9->VAR34)
        return FUN8(VAR36);
    VAR9->VAR34->VAR21 = VAR21;
    VAR9->VAR34->VAR12 = VAR12;
    VAR9->VAR34->VAR13 = VAR13;
    VAR9->VAR34->VAR14 = VAR14;
    VAR9->VAR34->VAR19 = VAR19;
    VAR9->VAR34->VAR37 = VAR15;
    VAR9->VAR34->VAR38 = VAR16;
    VAR9->VAR34->VAR39 = VAR17;
    VAR9->VAR34->VAR40 = VAR18;
    return 0;
}