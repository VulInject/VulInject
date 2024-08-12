VAR1 FUN1(qemu_irq VAR2, qemu_irq VAR3)
{
    VAR1 *VAR4 = FUN2(2 * sizeof(VAR1));
    VAR4[0] = VAR2;
    VAR4[1] = VAR3;
    return FUN3(VAR5, VAR4, 1)[0];
}