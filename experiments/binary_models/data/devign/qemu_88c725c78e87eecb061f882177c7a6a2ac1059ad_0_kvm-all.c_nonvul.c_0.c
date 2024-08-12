int FUN1(VAR1 *VAR2, int VAR3, MSIMessage VAR4, VAR5 *VAR6)
{
    struct kvm_irq_routing_entry VAR7 = {};
    if (FUN2())
    {
        return 0;
    }
    if (!FUN3())
    {
        return -VAR8;
    }
    VAR7.VAR9 = VAR3;
    VAR7.VAR10 = VAR11;
    VAR7.VAR12 = 0;
    VAR7.VAR13.VAR14.VAR15 = (VAR16)VAR4.VAR17;
    VAR7.VAR13.VAR14.VAR18 = VAR4.VAR17 >> 32;
    VAR7.VAR13.VAR14.VAR19 = FUN4(VAR4.VAR19);
    if (VAR20 && FUN5())
    {
        VAR7.VAR12 = VAR21;
        VAR7.VAR13.VAR14.VAR22 = FUN6(VAR6);
    }
    if (FUN7(&VAR7, VAR4.VAR17, VAR4.VAR19, VAR6))
    {
        return -VAR23;
    }
    FUN8(VAR3);
    return FUN9(VAR2, &VAR7);
}