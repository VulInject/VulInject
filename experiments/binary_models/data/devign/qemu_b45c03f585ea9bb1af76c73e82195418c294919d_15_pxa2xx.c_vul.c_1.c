static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, qemu_irq VAR5, qemu_irq VAR6, qemu_irq VAR7)
{
    VAR1 *VAR8 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = VAR6;
    VAR8->VAR7 = VAR7;
    VAR8->VAR9 = VAR10;
    FUN3(VAR8);
    FUN4(&VAR8->VAR11, NULL, &VAR12, VAR8, "", 0x100000);
    FUN5(VAR3, VAR4, &VAR8->VAR11);
    FUN6(NULL, VAR4, &VAR13, VAR8);
    return VAR8;
}