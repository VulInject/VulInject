static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    BlockInterfaceErrorAction VAR5 = FUN2(VAR2->VAR6->VAR7, VAR4);
    VAR8 *VAR9 = VAR2->VAR6;
    if (VAR5 == VAR10)
    {
        FUN3(VAR2->VAR6->VAR7, VAR11, VAR4);
        return 0;
    }
    if ((VAR3 == VAR12 && VAR5 == VAR13) || VAR5 == VAR14)
    {
        VAR2->VAR15 = VAR9->VAR16;
        VAR9->VAR16 = VAR2;
        FUN3(VAR2->VAR6->VAR7, VAR17, VAR4);
        FUN4(0);
    }
    else
    {
        FUN5(VAR2, VAR18);
        FUN3(VAR2->VAR6->VAR7, VAR19, VAR4);
    }
    return 1;
}