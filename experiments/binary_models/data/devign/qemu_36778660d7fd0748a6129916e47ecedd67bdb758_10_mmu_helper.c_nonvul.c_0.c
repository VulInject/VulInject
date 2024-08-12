void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    FUN2(VAR4, "" VAR5 "", VAR6, VAR3);
    assert(!VAR2->VAR7);
    if (VAR2->VAR8 & VAR9)
    {
        VAR10 *VAR11 = FUN3(VAR2);
        VAR12 *VAR13 = NULL;
        FUN4(VAR11, VAR3, &VAR13);
        if (VAR13)
        {
            FUN5(VAR13);
            FUN6(VAR13);
            return;
        }
    }
    VAR2->VAR14[VAR15] = VAR3;
}