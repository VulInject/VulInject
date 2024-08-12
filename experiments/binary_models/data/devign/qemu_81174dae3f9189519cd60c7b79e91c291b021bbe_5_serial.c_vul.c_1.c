VAR1 *FUN1(int VAR2, qemu_irq VAR3, int VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7;
    VAR7 = FUN2(sizeof(VAR1));
    if (!VAR7)
        return NULL;
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR8 = FUN3(VAR9, VAR10, VAR7);
    if (!VAR7->VAR8)
        return NULL;
    FUN4(VAR11, VAR7);
    FUN5(VAR7);
    FUN6("", VAR2, 2, VAR12, VAR13, VAR7);
    FUN7(VAR2, 8, 1, VAR14, VAR7);
    FUN8(VAR2, 8, 1, VAR15, VAR7);
    VAR7->VAR6 = VAR6;
    FUN9(VAR6, VAR16, VAR17, VAR18, VAR7);
    return VAR7;
}