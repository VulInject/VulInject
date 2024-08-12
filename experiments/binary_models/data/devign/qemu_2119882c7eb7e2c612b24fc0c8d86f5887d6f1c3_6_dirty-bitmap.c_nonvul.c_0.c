static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR3 *VAR6, *VAR7;
    FUN2(VAR2);
    FUN3(VAR6, &VAR2->VAR8, VAR9, VAR7)
    {
        if ((!VAR4 || VAR6 == VAR4) && (!VAR5 || VAR6->VAR10))
        {
            assert(!VAR6->VAR11);
            assert(!FUN4(VAR6));
            assert(!VAR6->VAR12);
            FUN5(VAR6, VAR9);
            FUN6(VAR6->VAR4);
            FUN7(VAR6->VAR10);
            FUN7(VAR6);
            if (VAR4)
            {
                goto VAR13;
            }
        }
    }
    if (VAR4)
    {
        FUN8();
    }
VAR13:
    FUN9(VAR2);
}