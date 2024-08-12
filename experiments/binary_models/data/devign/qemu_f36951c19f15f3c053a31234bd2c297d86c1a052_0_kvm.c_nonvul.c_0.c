VAR1 FUN1(uint64_t VAR2, unsigned int VAR3)
{
    struct kvm_ppc_smmu_info VAR4;
    long VAR5, VAR6;
    int VAR7;
    if (VAR8 >= 2)
    {
        return VAR2;
    }
    FUN2(FUN3(VAR9), &VAR4);
    VAR5 = FUN4();
    VAR6 = 0;
    for (VAR7 = 0; VAR7 < VAR10; VAR7++)
    {
        struct VAR11 *VAR12 = &VAR4.VAR12[VAR7];
        if (!VAR12->VAR13)
        {
            continue;
        }
        if ((VAR12->VAR13 > VAR6) && ((1UL << VAR12->VAR13) <= VAR5))
        {
            VAR6 = VAR12->VAR13;
        }
    }
    return FUN5(VAR2, 1ULL << (VAR6 + VAR3 - 7));
}