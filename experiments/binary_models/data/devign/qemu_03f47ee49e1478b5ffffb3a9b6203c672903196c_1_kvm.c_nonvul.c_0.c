void FUN1(void)
{
    int VAR1;
    struct kvm_device_attr VAR2 = {
        .VAR3 = VAR4,
        .VAR2 = VAR5,
    };
    if (!FUN2())
    {
        return;
    }
    VAR1 = FUN3(VAR6, VAR7, &VAR2);
    FUN4(VAR1);
}