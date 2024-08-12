static struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6, qemu_irq VAR7, omap_clk VAR8)
{
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR10 = VAR7;
    FUN3(VAR9);
    FUN4(&VAR9->VAR11, NULL, &VAR12, VAR9, "", 0x800);
    FUN5(VAR3, VAR4, &VAR9->VAR11);
    return VAR9;
}