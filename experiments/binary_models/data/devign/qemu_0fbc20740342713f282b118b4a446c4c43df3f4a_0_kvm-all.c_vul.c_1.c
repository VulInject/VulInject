void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    struct kvm_irq_routing_entry VAR6;
    assert(VAR5 < VAR2->VAR7);
    VAR6.VAR8 = VAR3;
    VAR6.VAR9 = VAR10;
    VAR6.VAR11 = 0;
    VAR6.VAR12.VAR4.VAR4 = VAR4;
    VAR6.VAR12.VAR4.VAR5 = VAR5;
    FUN2(VAR2, &VAR6);
}