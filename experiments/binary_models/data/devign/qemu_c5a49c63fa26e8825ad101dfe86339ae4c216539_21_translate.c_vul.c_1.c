void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    DisasContext VAR8;
    target_ulong VAR9;
    int VAR10;
    int VAR11;
    VAR9 = VAR4->VAR12;
    VAR8.VAR12 = VAR9;
    VAR8.VAR13 = (VAR14)VAR4->VAR15;
    VAR8.VAR16 = VAR4->VAR15 & VAR17;
    VAR8.VAR18 = VAR19;
    VAR8.VAR20 = (VAR8.VAR13 & (1u << VAR21)) == 0 ? 1 : 0;
    VAR8.VAR22 = -1;
    VAR8.VAR4 = VAR4;
    VAR8.VAR23 = VAR2->VAR23;
    VAR8.VAR24 = VAR6->VAR24;
    VAR8.VAR25 = (VAR8.VAR13 & VAR26);
    VAR8.VAR27 = ((VAR8.VAR13 & (1 << VAR21)) && (VAR8.VAR13 & (1 << VAR28))) * 0x10;
    VAR8.VAR29 = VAR8.VAR13 & VAR30 ? 0x10 : 0;
    VAR11 = VAR4->VAR31 & VAR32;
    if (VAR11 == 0)
    {
        VAR11 = VAR32;
    }
    VAR11 = FUN2(VAR11, VAR33);
    VAR10 = -(VAR8.VAR12 | VAR34) / 2;
    VAR11 = FUN2(VAR11, VAR10);
    if (VAR8.VAR23 || VAR35)
    {
        VAR11 = 1;
    }
    FUN3(VAR4);
    VAR10 = 0;
    if (VAR8.VAR13 & VAR36)
    {
        VAR10 = FUN4(&VAR8, VAR6, &VAR11);
    }
    while (VAR8.VAR18 == VAR19 && VAR10 < VAR11 && !FUN5())
    {
        FUN6(VAR8.VAR12, VAR8.VAR16);
        VAR10++;
        if (FUN7(FUN8(VAR2, VAR8.VAR12, VAR37)))
        {
            FUN9(&VAR8, true);
            FUN10(VAR38);
            VAR8.VAR18 = VAR39;
            VAR8.VAR12 += 2;
            break;
        }
        if (VAR10 == VAR11 && (VAR4->VAR31 & VAR40))
        {
            FUN11();
        }
        VAR8.VAR41 = FUN12(VAR6, VAR8.VAR12);
        FUN13(&VAR8);
        VAR8.VAR12 += 2;
    }
    if (VAR4->VAR31 & VAR40)
    {
        FUN14();
    }
    if (VAR8.VAR13 & VAR42)
    {
        VAR8.VAR16 &= ~VAR36;
    }
    if (VAR2->VAR23)
    {
        FUN9(&VAR8, true);
        FUN10(VAR38);
    }
    else
    {
        switch (VAR8.VAR18)
        {
        case VAR43:
            FUN9(&VAR8, true);
            FUN15(0);
            break;
        case VAR19:
            FUN9(&VAR8, false);
            FUN16(&VAR8, 0, VAR8.VAR12);
            break;
        case VAR39:
        case VAR44:
        default:
            break;
        }
    }
    FUN17(VAR4, VAR10);
    VAR4->VAR45 = VAR8.VAR12 - VAR9;
    VAR4->VAR46 = VAR10;
    if (FUN18(VAR47) && FUN19(VAR9))
    {
        FUN20();
        FUN21("");
        FUN22(VAR2, VAR9, VAR8.VAR12 - VAR9, 0);
        FUN21("");
        FUN23();
    }
}