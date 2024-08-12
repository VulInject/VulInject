static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(FUN4(FUN5(VAR4)));
    VAR7 *VAR8 = FUN6(VAR6);
    int VAR9 = 0;
    if (!VAR8->VAR10)
    {
        VAR9 = VAR8->FUN7(VAR6->VAR11, VAR2->VAR12.VAR13, false);
        if (VAR9 < 0)
        {
            FUN8("", VAR9);
        }
    }
    assert(VAR9 >= 0);
    FUN9(VAR2);
    FUN10(&VAR2->VAR12, VAR4);
    FUN11(&VAR2->VAR12, VAR4);
}