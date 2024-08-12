static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7.VAR2);
    hwaddr VAR8, VAR9;
    void *VAR10;
    int VAR11;
    assert(!FUN3(VAR4->VAR12));
    if (FUN4(VAR4))
    {
        FUN5("" VAR13 "" VAR14 "", VAR4->VAR15, VAR4->VAR15 + FUN6(FUN7(VAR4->VAR16, FUN8())));
        return;
    }
    if (FUN9((VAR4->VAR15 & ~VAR17) != (VAR4->VAR18 & ~VAR17)))
    {
        FUN10("", VAR19);
        return;
    }
    VAR8 = FUN11(VAR4->VAR15);
    VAR9 = (VAR4->VAR15 + FUN6(VAR4->VAR16)) & VAR17;
    if (VAR8 >= VAR9)
    {
        return;
    }
    VAR10 = FUN12(VAR4->VAR12) + VAR4->VAR18 + (VAR8 - VAR4->VAR15);
    FUN5("" VAR13 "" VAR13 "", VAR8, VAR9 - 1, VAR10);
    FUN13(VAR4->VAR12);
    VAR11 = FUN14(VAR6, VAR8, VAR9 - VAR8, VAR10, VAR4->VAR20);
    if (VAR11)
    {
        FUN10("" VAR13 ""
                     "" VAR13 "",
                     VAR6, VAR8, VAR9 - VAR8, VAR10, VAR11);
    }
}