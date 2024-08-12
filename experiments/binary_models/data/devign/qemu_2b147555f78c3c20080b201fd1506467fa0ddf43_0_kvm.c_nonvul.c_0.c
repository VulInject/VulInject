int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5)
{
    int VAR6;
    struct kvm_device_attr VAR7 = {
        .VAR8 = VAR9,
        .VAR7 = VAR10,
        .VAR11 = (VAR4)&VAR3,
    };
    if (!FUN2(VAR2, VAR10))
    {
        return 0;
    }
    VAR6 = FUN3(VAR2, VAR5);
    if (VAR6)
    {
        return VAR6;
    }
    else if (*VAR5 < VAR3)
    {
        return -VAR12;
    }
    return FUN4(VAR2, VAR13, &VAR7);
}