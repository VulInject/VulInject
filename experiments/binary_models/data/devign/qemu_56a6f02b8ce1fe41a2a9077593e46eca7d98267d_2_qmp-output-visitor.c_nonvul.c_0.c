static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(&VAR2->VAR8);
    VAR4 *VAR9 = VAR7 ? VAR7->VAR5 : NULL;
    if (!VAR9)
    {
        assert(!VAR2->VAR10);
        VAR2->VAR10 = VAR5;
    }
    else
    {
        switch (FUN3(VAR9))
        {
        case VAR11:
            assert(VAR3);
            FUN4(FUN5(VAR9), VAR3, VAR5);
            break;
        case VAR12:
            assert(!VAR3);
            FUN6(FUN7(VAR9), VAR5);
            break;
        default:
            FUN8();
        }
    }
}