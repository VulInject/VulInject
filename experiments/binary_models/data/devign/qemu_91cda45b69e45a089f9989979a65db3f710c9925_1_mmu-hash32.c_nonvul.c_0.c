VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    struct mmu_ctx_hash32 VAR5;
    if (FUN2(FUN3(VAR3, &VAR5, VAR4, 0) != 0))
    {
        return -1;
    }
    return VAR5.VAR6 & VAR7;
}