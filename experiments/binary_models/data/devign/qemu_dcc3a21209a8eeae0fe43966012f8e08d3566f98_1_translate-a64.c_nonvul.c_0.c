static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7);
    VAR8 *VAR9 = VAR4->VAR10;
    if (VAR6->VAR11 && !VAR6->VAR12)
    {
        assert(VAR6->VAR7.VAR13 == 1);
        FUN3(VAR14, FUN4(VAR6->VAR15, 0, 0), FUN5(VAR6));
        VAR6->VAR7.VAR16 = VAR17;
    }
    else
    {
        FUN6(VAR9, VAR6);
    }
    VAR6->VAR7.VAR18 = VAR6->VAR19;
    FUN7(&VAR6->VAR7);
}