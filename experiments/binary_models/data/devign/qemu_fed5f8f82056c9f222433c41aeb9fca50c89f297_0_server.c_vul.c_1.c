static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    FUN2(FUN3());
    assert(VAR8->VAR10 == FUN4());
    if (FUN5(VAR8->VAR11, VAR4, VAR6) < 0)
    {
        return -VAR12;
    }
    FUN6(VAR4->VAR13, VAR4->VAR14, FUN7(VAR4->VAR14));
    if (VAR4->VAR14 != VAR15)
    {
        VAR2->VAR16 = true;
    }
    if (VAR4->VAR14 == VAR17)
    {
        return -VAR12;
    }
    if ((VAR4->VAR18 + VAR4->VAR19) < VAR4->VAR18)
    {
        FUN8(VAR6, "");
        return -VAR20;
    }
    if (VAR4->VAR14 == VAR21 || VAR4->VAR14 == VAR15)
    {
        if (VAR4->VAR19 > VAR22)
        {
            FUN8(VAR6, "" VAR23 "", VAR4->VAR19, VAR22);
            return -VAR20;
        }
        VAR2->VAR24 = FUN9(VAR8->VAR25->VAR26, VAR4->VAR19);
        if (VAR2->VAR24 == NULL)
        {
            FUN8(VAR6, "");
            return -VAR27;
        }
    }
    if (VAR4->VAR14 == VAR15)
    {
        if (FUN10(VAR8->VAR11, VAR2->VAR24, VAR4->VAR19, VAR6) < 0)
        {
            FUN11(VAR6, "");
            return -VAR12;
        }
        VAR2->VAR16 = true;
        FUN12(VAR4->VAR13, VAR4->VAR19);
    }
    if (VAR4->VAR18 + VAR4->VAR19 > VAR8->VAR25->VAR28)
    {
        FUN8(VAR6, "" VAR29 "" VAR23 "" VAR29, VAR4->VAR18, VAR4->VAR19, (VAR30)VAR8->VAR25->VAR28);
        return VAR4->VAR14 == VAR15 ? -VAR31 : -VAR20;
    }
    VAR9 = VAR32;
    if (VAR4->VAR14 == VAR21 && VAR8->VAR33)
    {
        VAR9 |= VAR34;
    }
    else if (VAR4->VAR14 == VAR35)
    {
        VAR9 |= VAR36;
    }
    if (VAR4->VAR37 & ~VAR9)
    {
        FUN8(VAR6, "", FUN7(VAR4->VAR14), VAR4->VAR37);
        return -VAR20;
    }
    return 0;
}