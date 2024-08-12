static struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6, VAR7 *VAR8, omap_clk VAR9)
{
    struct VAR1 *VAR10 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR10->VAR5 = VAR5;
    VAR10->VAR6 = VAR6;
    VAR10->VAR11 = VAR8[0];
    VAR10->VAR12 = VAR8[1];
    VAR10->VAR13 = FUN3(VAR14, VAR15, VAR10);
    VAR10->VAR16 = FUN3(VAR14, VAR17, VAR10);
    FUN4(VAR10);
    FUN5(&VAR10->VAR18, NULL, &VAR19, VAR10, "", 0x800);
    FUN6(VAR3, VAR4, &VAR10->VAR18);
    return VAR10;
}