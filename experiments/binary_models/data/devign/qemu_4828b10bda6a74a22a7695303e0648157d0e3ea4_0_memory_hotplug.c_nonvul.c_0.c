void FUN1(VAR1 *VAR2, qemu_irq VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11;
    VAR11 = FUN2(VAR5, VAR7, VAR9);
    if (!VAR11)
    {
        return;
    }
    VAR11->VAR12 = VAR7;
    VAR11->VAR13 = true;
    if (VAR7->VAR14)
    {
        VAR11->VAR15 = true;
        FUN3(VAR2, VAR3, VAR16);
    }
    return;
}