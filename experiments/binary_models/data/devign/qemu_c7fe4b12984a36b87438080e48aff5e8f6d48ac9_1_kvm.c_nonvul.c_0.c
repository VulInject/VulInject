static int FUN1(VAR1 *VAR2)
{
    struct
    {
        struct kvm_msrs VAR3;
        struct kvm_msr_entry VAR4;
    } VAR5;
    FUN2(&VAR5.VAR4, VAR6, VAR2->VAR7.VAR8);
    VAR5.VAR3 = (struct VAR9){
        .VAR10 = 1,
    };
    return FUN3(FUN4(VAR2), VAR11, &VAR5);
}