void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    unsigned int VAR7 = VAR6->VAR8.VAR9;
    assert(!FUN3(VAR6, VAR10));
    FUN4(VAR2->VAR11);
    FUN5(VAR12, "", FUN6(VAR6), VAR7);
    if (FUN7(VAR12) && !FUN8(VAR2->VAR11))
    {
        FUN5(VAR12, "" VAR13 "", VAR6->VAR8.VAR14 >> VAR15, VAR6->VAR8.VAR14);
    }
    if (FUN9(VAR4, VAR2->VAR11))
    {
        FUN10(VAR4);
        FUN5(VAR12, "");
        return;
    }