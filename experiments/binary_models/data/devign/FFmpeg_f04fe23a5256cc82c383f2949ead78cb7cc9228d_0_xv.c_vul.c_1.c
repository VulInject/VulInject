static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned int VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11 = 0, VAR12;
    VAR13 *VAR14 = VAR2->VAR15[0]->VAR16;
    if (VAR2->VAR17 > 1 || VAR14->VAR18 != VAR19 || VAR14->VAR20 != VAR21)
    {
        FUN2(VAR2, VAR22, "");
        return FUN3(VAR23);
    }
    VAR4->VAR24 = FUN4(VAR4->VAR25);
    if (!VAR4->VAR24)
    {
        FUN2(VAR2, VAR22, "", VAR4->VAR25);
        return FUN3(VAR23);
    }
    VAR4->VAR26 = VAR14->VAR27;
    VAR4->VAR28 = VAR14->VAR29;
    if (!VAR4->VAR30 && !VAR4->VAR31)
    {
        VAR4->VAR30 = VAR14->VAR27;
        VAR4->VAR31 = VAR14->VAR29;
    }
    VAR4->VAR32 = FUN5(VAR4->VAR24, FUN6(VAR4->VAR24), VAR4->VAR33, VAR4->VAR34, VAR4->VAR30, VAR4->VAR31, 0, 0, 0);
    if (!VAR4->VAR35)
    {
        if (!(VAR4->VAR35 = FUN7(VAR2->VAR36)))
            return FUN3(VAR37);
    }
    FUN8(VAR4->VAR24, VAR4->VAR32, VAR4->VAR35);
    FUN9(VAR4->VAR24, VAR4->VAR32);
    if (FUN10(VAR4->VAR24, FUN6(VAR4->VAR24), &VAR6, &VAR8) != VAR38)
        return VAR39;
    VAR4->VAR40 = VAR8[0].VAR41;
    if (VAR14->VAR42 != VAR43)
    {
        FUN2(VAR2, VAR22, "", FUN11(VAR14->VAR42));
        return VAR44;
    }
    VAR10 = FUN12(VAR4->VAR24, VAR4->VAR40, &VAR11);
    if (!VAR10)
        return VAR39;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (VAR10[VAR12].VAR45 == FUN13('', '', '', ''))
        {
            break;
        }
    }
    FUN14(VAR10);
    if (VAR12 >= VAR11)
    {
        FUN2(VAR2, VAR22, "");
        return FUN3(VAR23);
    }
    VAR4->VAR46 = FUN15(VAR4->VAR24, VAR4->VAR32, 0, 0);
    VAR4->VAR26 = VAR14->VAR27;
    VAR4->VAR28 = VAR14->VAR29;
    VAR4->VAR47 = FUN16(VAR4->VAR24, VAR4->VAR40, FUN13('', '', '', ''), 0, VAR4->VAR26, VAR4->VAR28, &VAR4->VAR48);
    VAR4->VAR48.VAR49 = FUN17(VAR50, VAR4->VAR47->VAR51, VAR52 | 0777);
    VAR4->VAR48.VAR53 = (char *)FUN18(VAR4->VAR48.VAR49, 0, 0);
    VAR4->VAR47->VAR54 = VAR4->VAR48.VAR53;
    VAR4->VAR48.VAR55 = VAR56;
    FUN19(VAR4->VAR24, &VAR4->VAR48);
    FUN20(VAR4->VAR24, VAR56);
    FUN21(VAR4->VAR48.VAR49, VAR57, 0);
    return 0;