static void FUN1(target_phys_addr_t VAR1, target_phys_addr_t VAR2, target_phys_addr_t VAR3, qemu_irq VAR4, qemu_irq VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(NULL, "");
    FUN3(VAR7);
    VAR9 = FUN4(VAR7);
    if (VAR1)
    {
        FUN5(VAR9, 0, VAR1 + VAR10);
        FUN5(VAR9, 1, VAR1 + VAR11);
        FUN5(VAR9, 2, VAR1 + VAR12);
        FUN5(VAR9, 3, VAR1 + VAR13);
        FUN5(VAR9, 4, VAR1 + VAR14);
    }
    if (VAR2)
    {
        FUN5(VAR9, 5, VAR2);
    }
    if (VAR3)
    {
        FUN5(VAR9, 6, VAR3);
    }
    FUN6(VAR9, 0, VAR4);
    FUN6(VAR9, 1, VAR5);
    VAR15 = FUN7(VAR7, 0);
}