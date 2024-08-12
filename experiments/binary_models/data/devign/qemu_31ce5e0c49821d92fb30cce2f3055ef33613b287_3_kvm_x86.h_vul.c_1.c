void FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7, int VAR8)
{
    struct kvm_x86_mce VAR9 = {
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
    };
    struct kvm_x86_mce_data VAR10 = {
        .VAR11 = VAR2,
        .VAR9 = &VAR9,
    };
    if (!VAR2->VAR12)
    {
        fprintf(VAR13, "");
        return;
    }
    FUN2(VAR2, VAR14, &VAR10);
    if (VAR8)
        FUN3();
}