static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    FUN2(FUN3());
    assert(VAR8->VAR9 == FUN4());
    if (FUN5(VAR8->VAR10, VAR4, VAR6) < 0)
    {
        return -VAR11;
    }
    FUN6(VAR4->VAR12, VAR4->VAR13, FUN7(VAR4->VAR13));
    if (VAR4->VAR13 != VAR14)
    {
        VAR2->VAR15 = true;
    }
    if (VAR4->VAR13 == VAR16)
    {
        return -VAR11;
    }
    if ((VAR4->VAR17 + VAR4->VAR18) < VAR4->VAR17)
    {
        FUN8(VAR6, "");
        return -VAR19;
    }
    if (VAR4->VAR13 == VAR20 || VAR4->VAR13 == VAR14)
    {
        if (VAR4->VAR18 > VAR21)
        {
            FUN8(VAR6, "" VAR22 "", VAR4->VAR18, VAR21);
            return -VAR19;
        }
        VAR2->VAR23 = FUN9(VAR8->VAR24->VAR25, VAR4->VAR18);
        if (VAR2->VAR23 == NULL)
        {
            FUN8(VAR6, "");
            return -VAR26;
        }
    }
    if (VAR4->VAR13 == VAR14)
    {
        if (FUN10(VAR8->VAR10, VAR2->VAR23, VAR4->VAR18, VAR6) < 0)
        {
            FUN11(VAR6, "");
            return -VAR11;
        }
        VAR2->VAR15 = true;
        FUN12(VAR4->VAR12, VAR4->VAR18);
    }
    if (VAR4->VAR17 + VAR4->VAR18 > VAR8->VAR24->VAR27)
    {
        FUN8(VAR6, "" VAR28 "" VAR22 "" VAR28, VAR4->VAR17, VAR4->VAR18, (VAR29)VAR8->VAR24->VAR27);
        return VAR4->VAR13 == VAR14 ? -VAR30 : -VAR19;
    }
    if (VAR4->VAR31 & ~(VAR32 | VAR33))
    {
        FUN8(VAR6, "", VAR4->VAR31);
        return -VAR19;
    }
    if (VAR4->VAR13 != VAR34 && (VAR4->VAR31 & VAR33))
    {
        FUN8(VAR6, "", VAR4->VAR31);
        return -VAR19;
    }
    return 0;
}