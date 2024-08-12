int FUN1(int VAR1, uint16_t VAR2, uint16_t VAR3, bool VAR4)
{
    struct kvm_ioeventfd VAR5 = {
        .VAR6 = VAR3,
        .VAR2 = VAR2,
        .VAR7 = 2,
        .VAR8 = VAR9 | VAR10,
        .VAR1 = VAR1,
    };
    int VAR11;
    if (!FUN2())
        return -VAR12;
    if (!VAR4)
        VAR5.VAR8 |= VAR13;
    VAR11 = FUN3(VAR14, VAR15, &VAR5);
    if (VAR11 < 0)
        return VAR11;
    return 0;
    return -VAR12;
}