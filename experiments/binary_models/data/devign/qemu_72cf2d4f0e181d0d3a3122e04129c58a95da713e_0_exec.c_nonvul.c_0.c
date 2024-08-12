int FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5, VAR6 **VAR7)
{
    target_ulong VAR8 = ~(VAR4 - 1);
    VAR6 *VAR9;
    if ((VAR4 != 1 && VAR4 != 2 && VAR4 != 4 && VAR4 != 8) || (VAR3 & ~VAR8))
    {
        fprintf(VAR10, "" VAR11 "" VAR12 "", VAR3, VAR4);
        return -VAR13;
    }
    VAR9 = FUN2(sizeof(*VAR9));
    VAR9->VAR14 = VAR3;
    VAR9->VAR8 = VAR8;
    VAR9->VAR5 = VAR5;
    if (VAR5 & VAR15)
        FUN3(&VAR2->VAR16, VAR9, VAR17);
    else
        FUN4(&VAR2->VAR16, VAR9, VAR17);
    FUN5(VAR2, VAR3);
    if (VAR7)
        *VAR7 = VAR9;
    return 0;
}