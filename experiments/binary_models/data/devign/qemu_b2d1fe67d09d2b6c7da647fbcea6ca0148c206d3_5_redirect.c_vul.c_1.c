static void FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    struct VAR5 *VAR6 = VAR3;
    VAR7 *VAR8 = VAR6->VAR8;
    struct VAR9 *VAR10;
    int VAR11 = 0;
    FUN2(VAR2, VAR6->VAR12);
    FUN3(VAR10, &VAR6->VAR13, VAR14)
    {
        FUN4("", VAR11 + 1, VAR6->VAR12, VAR10->VAR15, VAR10->VAR16);
        FUN2(VAR2, VAR10->VAR15);
        FUN2(VAR2, VAR10->VAR16);
        FUN5(VAR2, VAR10->VAR17, VAR10->VAR15);
        VAR11++;
    }
    assert(VAR11 == VAR6->VAR12);
}