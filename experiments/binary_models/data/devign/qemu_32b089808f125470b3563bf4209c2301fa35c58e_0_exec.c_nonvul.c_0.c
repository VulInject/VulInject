VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    int VAR5, VAR6, VAR7;
    void *VAR8;
    VAR9 *VAR10;
    VAR6 = (VAR4 >> VAR11) & (VAR12 - 1);
    VAR5 = FUN2(VAR3);
    if (FUN3(VAR3->VAR13[VAR5][VAR6].VAR14 != (VAR4 & VAR15)))
    {
        FUN4(VAR3, VAR4);
        FUN5(VAR4);
    }
    VAR7 = VAR3->VAR16[VAR5][VAR6] & ~VAR15;
    VAR10 = FUN6(VAR7);
    if (VAR10 != &VAR17 && VAR10 != &VAR18 && VAR10 != &VAR19 && !VAR10->VAR20 && VAR10 != &VAR21)
    {
        FUN7(VAR3, VAR4, 0, 1, 0, 4);
        FUN8(VAR3, "" VAR22 "", VAR4);
    }
    VAR8 = (void *)((VAR23)VAR4 + VAR3->VAR13[VAR5][VAR6].VAR24);
    return FUN9(VAR8);
}