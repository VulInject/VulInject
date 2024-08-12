void FUN1(VAR1 *VAR2, int VAR3)
{
    static int VAR4 = 1;
    VAR5 *VAR6;
    if (VAR4)
    {
        VAR7 = FUN2(VAR8, VAR9, NULL);
        VAR4 = 0;
    }
    VAR6 = FUN3(sizeof(*VAR6));
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    if (VAR3 & VAR10)
    {
        VAR6->VAR11 = FUN4(VAR6, VAR12);
        FUN5(VAR6, 0);
    }
    FUN6(VAR2, VAR13, VAR14, VAR15, VAR6);
    FUN7(&VAR16, VAR6, VAR17);
    if (!VAR18 || (VAR3 & VAR19))
        VAR18 = VAR6;
}