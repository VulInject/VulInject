static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(&VAR2->VAR5);
    assert(VAR4 != NULL);
    assert(VAR4->VAR6 == VAR2->VAR6);
    FUN3(VAR2);
    if (!VAR2->VAR7)
    {
        int VAR8 = FUN4(VAR2->VAR9.VAR10, VAR11);
        VAR8--;
        FUN5(&VAR2->VAR9.VAR10, VAR8, VAR11);
    }
    if (VAR4->VAR12 == VAR13)
    {
        FUN6(VAR2->VAR14, VAR2->VAR7, VAR15);
    }
    else
    {
        FUN6(VAR2->VAR14, VAR2->VAR7, VAR16);
    }
    FUN7(VAR2);
    return 1;
}