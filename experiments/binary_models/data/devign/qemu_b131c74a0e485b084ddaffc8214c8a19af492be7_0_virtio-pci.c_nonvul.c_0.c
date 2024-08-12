static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2->VAR7, VAR3);
    VAR8 *VAR9 = FUN3(VAR6);
    VAR10 *VAR11 = &VAR2->VAR12[VAR4];
    int VAR13;
    VAR13 = FUN4(VAR14, VAR9, VAR11->VAR15);
    assert(VAR13 == 0);
    if (--VAR11->VAR16 == 0)
    {
        FUN5(VAR14, VAR11->VAR15);
    }
    FUN6(VAR6, true, false);
}