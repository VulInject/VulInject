static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7.VAR2);
    hwaddr VAR8, VAR9;
    int VAR10;
    if (FUN3(VAR4))
    {
        FUN4("" VAR11 "" VAR12 "", VAR4->VAR13, VAR4->VAR13 + VAR4->VAR14 - 1);
        return;
    }
    if (FUN5((VAR4->VAR13 & ~VAR15) != (VAR4->VAR16 & ~VAR15)))
    {
        FUN6("", VAR17);
        return;
    }
    VAR8 = FUN7(VAR4->VAR13);
    VAR9 = (VAR4->VAR13 + FUN8(VAR4->VAR14)) & VAR15;
    if (VAR8 >= VAR9)
    {
        return;
    }
    FUN4("" VAR11 "" VAR11 "", VAR8, VAR9 - 1);
    VAR10 = FUN9(VAR6, VAR8, VAR9 - VAR8);
    FUN10(VAR4->VAR18);
    if (VAR10)
    {
        FUN6("" VAR11 ""
                     "" VAR11 "",
                     VAR6, VAR8, VAR9 - VAR8, VAR10);
    }
}