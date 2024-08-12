int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct kvm_irq_routing_entry VAR5;
    int VAR6;
    if (!FUN2())
    {
        return -VAR7;
    }
    VAR6 = FUN3(VAR2);
    if (VAR6 < 0)
    {
        return VAR6;
    }
    VAR5.VAR8 = VAR6;
    VAR5.VAR9 = VAR10;
    VAR5.VAR11 = 0;
    VAR5.VAR12.VAR4.VAR13 = VAR4->VAR13;
    VAR5.VAR12.VAR4.VAR14 = VAR4->VAR14;
    VAR5.VAR12.VAR4.VAR15 = VAR4->VAR15;
    VAR5.VAR12.VAR4.VAR16 = VAR4->VAR16;
    VAR5.VAR12.VAR4.VAR17 = VAR4->VAR17;
    FUN4(VAR2, &VAR5);
    FUN5(VAR2);
    return VAR6;
}