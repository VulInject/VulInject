static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(&VAR2->VAR5);
    int VAR6 = 0;
    assert(VAR4 != NULL);
    assert(VAR4->VAR7 == VAR2->VAR7);
    FUN3(VAR2, FUN4(VAR4->VAR7), (VAR8 *)&VAR2->VAR9.VAR10);
    FUN5(VAR2->VAR11, FUN4(VAR4->VAR7), (VAR12 *)&VAR2->VAR9.VAR10, sizeof(VAR8) >> 2);
    FUN6(VAR4);
    if (VAR2->VAR9.VAR13 & VAR14)
    {
        FUN7(VAR2->VAR11, VAR2->VAR15, VAR16);
        VAR6 = 1;
    }
    else
    {
        FUN7(VAR2->VAR11, VAR2->VAR15, VAR17);
        VAR6 = 1;
    }
    return VAR6;
}