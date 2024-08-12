static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint8_t VAR4, bool VAR5, bool VAR6)
{
    struct kvm_s390_io_adapter VAR7 = {
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR8 = VAR6,
        .VAR5 = VAR5,
    };
    VAR9 *VAR10 = FUN2(VAR2);
    int VAR11;
    struct kvm_device_attr VAR12 = {
        .VAR13 = VAR14,
        .VAR15 = (VAR16)&VAR7,
    };
    if (!FUN3(VAR17, VAR18))
    {
        return 0;
    }
    VAR11 = FUN4(VAR10->VAR19, VAR20, &VAR12);
    return VAR11 ? -VAR21 : 0;
}