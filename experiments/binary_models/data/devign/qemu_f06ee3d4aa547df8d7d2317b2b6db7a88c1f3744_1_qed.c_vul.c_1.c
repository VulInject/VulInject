static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint64_t VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10;
    if (VAR4 == 0)
    {
        FUN2(VAR8, 0);
        return;
    }
    VAR10 = FUN3(sizeof(*VAR10), VAR7, VAR8);
    VAR10->VAR2 = VAR2;
    VAR10->VAR5 = VAR5;
    VAR10->VAR11.VAR12 = FUN4(VAR2->VAR13, VAR4);
    VAR10->VAR11.VAR14 = VAR4;
    FUN5(&VAR10->VAR15, &VAR10->VAR11, 1);
    FUN6(VAR2, VAR3, &VAR10->VAR15, VAR16, VAR10);
}