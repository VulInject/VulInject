static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    struct kvm_device_attr VAR4 = {
        .VAR5 = VAR6,
        .VAR4 = VAR7,
    };
    if (!FUN2(VAR2, VAR7) || !FUN2(VAR2, VAR8))
    {
        return;
    }
    VAR3 = FUN3(VAR2, VAR9, &VAR4);
    if (!VAR3)
    {
        FUN4(VAR10, VAR2);
    }
    FUN5(VAR3);
}