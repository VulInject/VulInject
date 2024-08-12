void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    target_phys_addr_t VAR4;
    target_ulong VAR5, VAR6;
    uint64_t VAR7;
    int VAR8;
    int VAR9;
    VAR9 = FUN2(VAR2, VAR3, &VAR5, &VAR6, &VAR8);
    if (VAR9 >= 0)
    {
        VAR4 = VAR2->VAR10[VAR11];
        VAR4 += 12 * VAR9;
        VAR7 = FUN3(VAR4);
        if (FUN4(VAR7))
        {
            FUN5(&VAR7);
            FUN6(VAR4, VAR7);
            FUN7(VAR2, 1);
        }
    }
}