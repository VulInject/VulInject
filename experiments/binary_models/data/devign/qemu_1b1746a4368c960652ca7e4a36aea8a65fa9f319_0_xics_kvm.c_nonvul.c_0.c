static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    int VAR11;
    VAR6 = FUN3(VAR4);
    VAR8 = &VAR2->VAR8[VAR6->VAR12];
    assert(VAR6->VAR12 < VAR2->VAR13);
    if (VAR10->VAR14 == -1)
    {
        FUN4();
    }
    if (VAR8->VAR15)
    {
        return;
    }
    VAR11 = FUN5(VAR6, VAR16, 0, VAR10->VAR14, FUN6(VAR6));
    if (VAR11 < 0)
    {
        FUN7("", FUN6(VAR6), strerror(VAR17));
        FUN8(1);
    }
    VAR8->VAR15 = true;
}