VAR1 *FUN1(qemu_irq VAR2, target_phys_addr_t VAR3, uint32_t VAR4, uint16_t VAR5, int VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR8 = FUN2(NULL, "");
    FUN3(VAR8, "", VAR6);
    FUN3(VAR8, "", VAR5);
    FUN3(VAR8, "", VAR4);
    FUN4(VAR8);
    VAR10 = FUN5(VAR8);
    FUN6(VAR10, 0, VAR2);
    if (VAR4 != 0)
    {
        FUN7(VAR4, 0x04, 1, VAR13, VAR10);
        FUN8(VAR4, 0x04, 1, VAR14, VAR10);
    }
    if (VAR3 != 0)
    {
        FUN9(VAR10, 0, VAR3);
    }
    VAR12 = FUN10(VAR11, VAR10);
    return &VAR12->VAR15;
}