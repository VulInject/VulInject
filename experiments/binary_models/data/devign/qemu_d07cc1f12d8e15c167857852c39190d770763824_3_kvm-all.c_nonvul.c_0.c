int FUN1(VAR1 *VAR2, int VAR3, MSIMessage VAR4)
{
    struct kvm_irq_routing_entry VAR5;
    if (!FUN2())
    {
        return -VAR6;
    }
    VAR5.VAR7 = VAR3;
    VAR5.VAR8 = VAR9;
    VAR5.VAR10 = 0;
    VAR5.VAR11.VAR12.VAR13 = (VAR14)VAR4.VAR15;
    VAR5.VAR11.VAR12.VAR16 = VAR4.VAR15 >> 32;
    VAR5.VAR11.VAR12.VAR17 = FUN3(VAR4.VAR17);
    return FUN4(VAR2, &VAR5);
}