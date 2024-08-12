static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct
    {
        struct kvm_msrs VAR5;
        struct kvm_msr_entry VAR6[1];
    } VAR7;
    struct VAR8 *VAR9 = VAR7.VAR6;
    if (!VAR10)
    {
        return 0;
    }
    FUN2(&VAR9[0], VAR11, VAR4->VAR12);
    VAR7.VAR5 = (struct VAR13){
        .VAR14 = 1,
    };
    return FUN3(FUN4(VAR2), VAR15, &VAR7);
}