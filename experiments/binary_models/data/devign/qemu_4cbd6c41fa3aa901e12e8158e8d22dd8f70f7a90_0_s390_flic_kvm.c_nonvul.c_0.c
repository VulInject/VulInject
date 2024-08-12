static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4, bool VAR5)
{
    struct kvm_s390_io_adapter_req VAR6 = {
        .VAR3 = VAR3,
        .VAR7 = VAR5 ? VAR8 : VAR9,
        .VAR10 = VAR4,
    };
    struct kvm_device_attr VAR11 = {
        .VAR12 = VAR13,
        .VAR10 = (VAR14)&VAR6,
    };
    VAR15 *VAR16 = FUN2(VAR2);
    int VAR17;
    if (!FUN3())
    {
        return 0;
    }
    VAR17 = FUN4(VAR16->VAR18, VAR19, &VAR11);
    return VAR17 ? -VAR20 : 0;
}