int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    struct kvm_irq_routing_entry VAR6 = {};
    int VAR7;
    MSIMessage VAR8 = {0, 0};
    if (VAR9 && VAR5)
    {
        VAR8 = FUN2(VAR5, VAR3);
    }
    if (FUN3())
    {
        return FUN4(VAR8.VAR10);
    }
    if (!FUN5())
    {
        return -VAR11;
    }
    VAR7 = FUN6(VAR2);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR6.VAR12 = VAR7;
    VAR6.VAR13 = VAR14;
    VAR6.VAR15 = 0;
    VAR6.VAR16.VAR17.VAR18 = (VAR19)VAR8.VAR20;
    VAR6.VAR16.VAR17.VAR21 = VAR8.VAR20 >> 32;
    VAR6.VAR16.VAR17.VAR10 = FUN7(VAR8.VAR10);
    if (VAR9 && FUN8())
    {
        VAR6.VAR15 = VAR22;
        VAR6.VAR16.VAR17.VAR23 = FUN9(VAR5);
    }
    if (FUN10(&VAR6, VAR8.VAR20, VAR8.VAR10, VAR5))
    {
        FUN11(VAR2, VAR7);
        return -VAR24;
    }
    FUN12(VAR5 ? VAR5->VAR25 : (char *)"", VAR3, VAR7);
    FUN13(VAR2, &VAR6);
    FUN14(&VAR6, VAR3, VAR5);
    FUN15(VAR2);
    return VAR7;
}