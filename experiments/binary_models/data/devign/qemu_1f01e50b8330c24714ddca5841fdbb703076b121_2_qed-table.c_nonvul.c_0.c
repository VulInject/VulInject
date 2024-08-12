int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5)
{
    int VAR6;
    FUN2(VAR4->VAR7);
    VAR4->VAR7 = FUN3(&VAR2->VAR8, VAR5);
    if (VAR4->VAR7)
    {
        return 0;
    }
    VAR4->VAR7 = FUN4(&VAR2->VAR8);
    VAR4->VAR7->VAR9 = FUN5(VAR2);
    FUN6(VAR2->VAR10->VAR11, VAR12);
    VAR6 = FUN7(VAR2, VAR5, VAR4->VAR7->VAR9);
    if (VAR6)
    {
        FUN2(VAR4->VAR7);
        VAR4->VAR7 = NULL;
    }
    else
    {
        VAR4->VAR7->VAR5 = VAR5;
        FUN8(&VAR2->VAR8, VAR4->VAR7);
        VAR4->VAR7 = FUN3(&VAR2->VAR8, VAR5);
        assert(VAR4->VAR7 != NULL);
    }
    return VAR6;
}