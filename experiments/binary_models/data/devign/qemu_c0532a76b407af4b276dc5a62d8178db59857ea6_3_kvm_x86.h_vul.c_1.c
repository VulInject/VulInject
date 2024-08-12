void FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    struct kvm_x86_mce VAR8 = {
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
    };
    struct kvm_x86_mce_data VAR9 = {
        .VAR10 = VAR2,
        .VAR8 = &VAR8,
    };
    FUN2(VAR2, VAR11, &VAR9);
}