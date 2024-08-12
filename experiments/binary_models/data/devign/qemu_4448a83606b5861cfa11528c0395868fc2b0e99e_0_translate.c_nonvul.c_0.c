void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    DisasContext VAR9;
    target_ulong VAR10;
    int VAR11;
    int VAR12;
    VAR10 = VAR4->VAR13;
    VAR9.VAR13 = VAR10;
    VAR9.VAR14 = (VAR15)VAR4->VAR16;
    VAR9.VAR17 = VAR4->VAR16 & VAR18;
    VAR9.VAR19 = VAR20;
    VAR9.VAR21 = (VAR9.VAR14 & (1u << VAR22)) == 0 ? 1 : 0;
    VAR9.VAR23 = -1;
    VAR9.VAR4 = VAR4;
    VAR9.VAR24 = VAR8->VAR24;
    VAR9.VAR25 = VAR2->VAR25;
    VAR9.VAR26 = (VAR9.VAR14 & VAR27);
    VAR12 = VAR4->VAR28 & VAR29;
    if (VAR12 == 0)
    {
        VAR12 = VAR29;
    }
    VAR12 = FUN4(VAR12, VAR30);
    VAR11 = -(VAR9.VAR13 | VAR31) / 2;
    VAR12 = FUN4(VAR12, VAR11);
    if (VAR9.VAR24 || VAR32)
    {
        VAR12 = 1;
    }
    FUN5(VAR4);
    VAR11 = 0;
    while (VAR9.VAR19 == VAR20 && VAR11 < VAR12 && !FUN6())
    {
        FUN7(VAR9.VAR13, VAR9.VAR17);
        VAR11++;
        if (FUN8(FUN9(VAR8, VAR9.VAR13, VAR33)))
        {
            FUN10(&VAR9, true);
            FUN11(VAR34);
            VAR9.VAR19 = VAR35;
            VAR9.VAR13 += 2;
            break;
        }
        if (VAR11 == VAR12 && (VAR4->VAR28 & VAR36))
        {
            FUN12();
        }
        VAR9.VAR37 = FUN13(VAR2, VAR9.VAR13);
        FUN14(&VAR9);
        VAR9.VAR13 += 2;
    }
    if (VAR4->VAR28 & VAR36)
    {
        FUN15();
    }
    if (VAR8->VAR24)
    {
        FUN10(&VAR9, true);
        FUN11(VAR34);
    }
    else
    {
        switch (VAR9.VAR19)
        {
        case VAR38:
            FUN10(&VAR9, true);
            FUN16(0);
            break;
        case VAR20:
            FUN10(&VAR9, false);
            FUN17(&VAR9, 0, VAR9.VAR13);
            break;
        case VAR35:
        case VAR39:
        default:
            break;
        }
    }
    FUN18(VAR4, VAR11);
    VAR4->VAR40 = VAR9.VAR13 - VAR10;
    VAR4->VAR41 = VAR11;
    if (FUN19(VAR42) && FUN20(VAR10))
    {
        FUN21();
        FUN22("");
        FUN23(VAR8, VAR10, VAR9.VAR13 - VAR10, 0);
        FUN22("");
        FUN24();
    }
}