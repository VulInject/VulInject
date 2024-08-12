VAR1 *FUN1(qemu_irq VAR2, int VAR3, int VAR4, target_phys_addr_t VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8;
    int VAR9;
    VAR8 = FUN2(VAR2, VAR3, VAR5, VAR7);
    VAR8->VAR10 = 0;
    if (VAR4)
    {
        VAR9 = FUN3(0, VAR11, VAR12, VAR8);
        FUN4(VAR5, 0x08, VAR9);
    }
    else
    {
        FUN5((VAR13)VAR5 + 0x01, 5, 1, &VAR14, VAR8);
        FUN5((VAR13)VAR5 + 0x07, 1, 1, &VAR14, VAR8);
        FUN6((VAR13)VAR5 + 0x01, 5, 1, &VAR15, VAR8);
        FUN6((VAR13)VAR5 + 0x07, 1, 1, &VAR15, VAR8);
    }
    return VAR8;
}