void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5 = FUN2();
    CoroutineAction VAR6;
    FUN3(VAR2, VAR5, VAR4, VAR4->VAR7);
    if (VAR4->VAR8)
    {
        fprintf(VAR9, "");
        VAR4->VAR8 = VAR5;
        VAR4->VAR2 = VAR2;
        FUN4();
        VAR6 = FUN5(VAR5, VAR4, VAR10);
        FUN6(VAR4);
        switch (VAR6)
        {
        case VAR11:
            return;
        case VAR12:
            assert(!VAR4->VAR13);
            FUN7(VAR4);
            FUN8(VAR4);
            return;
            default