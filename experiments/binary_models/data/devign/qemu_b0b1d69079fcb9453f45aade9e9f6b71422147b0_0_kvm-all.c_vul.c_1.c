int FUN1(VAR1 *VAR2, unsigned long VAR3)
{
    struct kvm_set_guest_debug_data VAR4;
    VAR4.VAR5.VAR6 = 0;
    if (VAR2->VAR7)
        VAR4.VAR5.VAR6 = VAR8 | VAR9;
    FUN2(VAR2, &VAR4.VAR5);
    VAR4.VAR5.VAR6 |= VAR3;
    VAR4.VAR2 = VAR2;
    FUN3(VAR2, VAR10, &VAR4);
    return VAR4.VAR11;
}