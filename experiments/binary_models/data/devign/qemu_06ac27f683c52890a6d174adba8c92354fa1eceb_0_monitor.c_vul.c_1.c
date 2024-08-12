void FUN1(VAR1 *VAR2, int VAR3)
{
    static int VAR4 = 1;
    VAR5 *VAR6;
    if (VAR4)
    {
        FUN2();
        FUN3();
        VAR4 = 0;
    }
    VAR6 = FUN4(sizeof(*VAR6));
    FUN5(VAR6);
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    if (VAR3 & VAR7)
    {
        VAR6->VAR8 = FUN6(VAR9, VAR10, VAR6, VAR11);
        FUN7(VAR6, 0);
    }
    if (FUN8(VAR6))
    {
        FUN9(VAR2, VAR12, VAR13, VAR14, VAR6);
        FUN10(VAR2, true);
        FUN11(&VAR6->VAR15.VAR16, VAR17);
    }
    else
    {
        FUN9(VAR2, VAR12, VAR18, VAR19, VAR6);
    }
    FUN12(&VAR20);
    FUN13(&VAR21, VAR6, VAR22);
    FUN14(&VAR20);
    if (!VAR23 || (VAR3 & VAR24))
        VAR23 = VAR6;
}