static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN3(VAR4->VAR9);
    FUN4(VAR6);
    FUN5(VAR4->VAR9);
    while (VAR4->VAR10)
    {
        VAR8 = VAR4->VAR10;
        VAR4->VAR10 = VAR8->VAR11;
        FUN6(VAR8->VAR12, &VAR8->VAR13, 0);
        FUN7(VAR8);
    }
    FUN8(VAR6);
    assert(!VAR4->VAR14);
    FUN9(VAR4->VAR9, VAR4->VAR15);
}