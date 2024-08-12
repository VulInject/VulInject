static void FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    target_ulong VAR11, VAR12, VAR13;
    int VAR14;
    VAR11 = FUN2(VAR2, VAR3);
    VAR8 = FUN3(VAR3);
    if (!VAR8)
    {
        FUN4(VAR2);
        VAR8 = FUN3(VAR3);
    }
    VAR10 = VAR15;
    VAR8->VAR10 = VAR10;
    VAR8->VAR4 = VAR4;
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = VAR6;
    FUN5(VAR2, VAR8, VAR16, &VAR14);
    VAR15 = (void *)(((unsigned long)VAR15 + VAR14 + VAR17 - 1) & ~(VAR17 - 1));
    VAR13 = (VAR3 + VAR8->VAR18 - 1) & VAR19;
    VAR12 = -1;
    if ((VAR3 & VAR19) != VAR13)
    {
        VAR12 = FUN2(VAR2, VAR13);
    }
    FUN6(VAR8, VAR11, VAR12);
}