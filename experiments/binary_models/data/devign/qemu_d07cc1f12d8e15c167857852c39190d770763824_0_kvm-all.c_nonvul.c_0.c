int FUN1(VAR1 *VAR2, MSIMessage VAR3)
{
    struct kvm_irq_routing_entry VAR4;
    int VAR5;
    if (!FUN2())
    {
        return -VAR6;
    }
    VAR5 = FUN3(VAR2);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    VAR4.VAR7 = VAR5;
    VAR4.VAR8 = VAR9;
    VAR4.VAR10 = 0;
    VAR4.VAR11.VAR12.VAR13 = (VAR14)VAR3.VAR15;
    VAR4.VAR11.VAR12.VAR16 = VAR3.VAR15 >> 32;
    VAR4.VAR11.VAR12.VAR17 = FUN4(VAR3.VAR17);
    FUN5(VAR2, &VAR4);
    return VAR5;
}