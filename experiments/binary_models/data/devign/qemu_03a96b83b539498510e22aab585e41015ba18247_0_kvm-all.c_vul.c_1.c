static int FUN1(int VAR1, hwaddr VAR2, uint32_t VAR3, bool VAR4, uint32_t VAR5, bool VAR6)
{
    int VAR7;
    struct kvm_ioeventfd VAR8;
    VAR8.VAR6 = VAR6 ? FUN2(VAR3, VAR5) : 0;
    VAR8.VAR2 = VAR2;
    VAR8.VAR9 = VAR5;
    VAR8.VAR10 = 0;
    VAR8.VAR1 = VAR1;
    if (!FUN3())
    {
        return -VAR11;
    }
    if (VAR6)
    {
        VAR8.VAR10 |= VAR12;
    }
    if (!VAR4)
    {
        VAR8.VAR10 |= VAR13;
    }
    VAR7 = FUN4(VAR14, VAR15, &VAR8);
    if (VAR7 < 0)
    {
        return -VAR16;
    }
    return 0;
}