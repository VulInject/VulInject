static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11, *VAR12;
    uint32_t VAR13;
    int32_t VAR14;
    int VAR15, VAR16;
    int VAR17, VAR18;
    int VAR19;
    VAR13 = FUN2(VAR6);
    if (VAR13 != FUN3('', '', '', ''))
        return -1;
    VAR19 = FUN4(VAR6);
    VAR8->VAR20 = FUN5(VAR6);
    if (!VAR8->VAR20)
    {
        FUN6(VAR2, VAR21, "");
        return -1;
    }
    VAR14 = FUN7(VAR6);
    if (VAR14 > 0)
    {
        VAR18 = 1000;
        VAR17 = VAR14;
    }
    else if (VAR14 < 0)
    {
        VAR18 = 100000;
        VAR17 = -VAR14;
    }
    else
    {
        VAR18 = 10;
        VAR17 = 1;
    }
    VAR15 = FUN5(VAR6);
    VAR16 = FUN5(VAR6);
    VAR8->VAR22 = 0;
    VAR11 = FUN8(VAR2, 0);
    if (!VAR11)
        return -1;
    if (FUN2(VAR6) == FUN3('', '', '', ''))
    {
        uint32_t VAR23, VAR24;
        VAR8->VAR22 = 1;
        VAR23 = FUN7(VAR6);
        VAR8->VAR25 = FUN9(VAR6) + VAR23;
        FUN10(VAR6, 16);
        VAR24 = FUN2(VAR6);
        VAR12 = FUN8(VAR2, 0);
        if (!VAR12)
            return -1;
        FUN11(VAR6, VAR12->VAR26, VAR24);
        while (FUN9(VAR6) < VAR8->VAR25 && !VAR6->VAR27)
        {
            VAR13 = FUN2(VAR6);
            VAR24 = FUN2(VAR6);
            if (VAR13 == FUN3('', '', '', ''))
                break;
            FUN10(VAR6, VAR24);
        }
        VAR8->VAR28 = (VAR24 + VAR8->VAR20 - 1) / VAR8->VAR20;
        if (VAR12->VAR26->VAR29)
            VAR8->VAR28 = ((VAR8->VAR28 + VAR12->VAR26->VAR29 - 1) / VAR12->VAR26->VAR29) * VAR12->VAR26->VAR29;
        VAR8->VAR30 = VAR24;
        VAR8->VAR31 = FUN9(VAR6);
        FUN12(VAR6, VAR8->VAR25, VAR32);
    }
    VAR11->VAR26->VAR33 = VAR34;
    VAR11->VAR26->VAR35 = VAR36;
    VAR11->VAR26->VAR37 = VAR15;
    VAR11->VAR26->VAR38 = VAR16;
    FUN13(&VAR18, &VAR17, VAR18, VAR17, (1UL << 31) - 1);
    FUN14(VAR11, 33, VAR17, VAR18);
    if (VAR19 & 0xC0)
    {
        VAR11->VAR26->VAR38 >>= 1;
    }
    VAR8->VAR39 = !VAR8->VAR22;
    VAR8->VAR25 = FUN9(VAR6);
    VAR2->VAR40 = 0;
    VAR2->VAR41 = (VAR42)VAR8->VAR20 * VAR43 * VAR17 / VAR18;
    FUN6(VAR2, VAR44, "", VAR8->VAR20);
    return 0;
}