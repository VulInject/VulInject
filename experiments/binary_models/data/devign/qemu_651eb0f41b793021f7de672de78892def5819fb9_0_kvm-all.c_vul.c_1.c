static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct kvm_userspace_memory_region VAR5;
    VAR5.VAR4 = VAR4->VAR4;
    VAR5.VAR6 = VAR4->VAR7;
    VAR5.VAR8 = (unsigned long)VAR4->VAR9;
    VAR5.VAR10 = VAR4->VAR10;
    if (VAR2->VAR11)
    {
        VAR5.VAR10 |= VAR12;
    }
    if (VAR5.VAR10 & VAR13)
    {
        VAR5.VAR14 = 0;
        FUN2(VAR2, VAR15, &VAR5);
    }
    VAR5.VAR14 = VAR4->VAR14;
    return FUN2(VAR2, VAR15, &VAR5);
}