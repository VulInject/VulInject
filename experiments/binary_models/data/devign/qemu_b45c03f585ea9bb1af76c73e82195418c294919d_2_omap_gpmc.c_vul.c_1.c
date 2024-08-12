struct VAR1 *FUN1(struct VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6)
{
    int VAR7;
    struct VAR1 *VAR8 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    FUN3(&VAR8->VAR9, NULL, &VAR10, VAR8, "", 0x1000);
    FUN4(FUN5(), VAR4, &VAR8->VAR9);
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = VAR6;
    VAR8->VAR11 = FUN6(VAR3);
    VAR8->VAR12 = FUN7(VAR3) ? 0x50 : 0x20;
    VAR8->VAR13 = 0;
    FUN8(VAR8);
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        FUN3(&VAR8->VAR14[VAR7].VAR15, NULL, &VAR16, &VAR8->VAR14[VAR7], "", 256 * 1024 * 1024);
    }
    FUN3(&VAR8->VAR17.VAR9, NULL, &VAR18, VAR8, "", 256 * 1024 * 1024);
    return VAR8;
}