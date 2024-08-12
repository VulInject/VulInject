void FUN1(VAR1 *VAR2, qemu_irq VAR3, qemu_irq VAR4)
{
    VAR2->VAR5 = VAR3;
    VAR2->VAR6 = VAR4;
    FUN2(VAR3, FUN3(VAR2->VAR7));
    FUN2(VAR4, FUN4(VAR2->VAR7));
}