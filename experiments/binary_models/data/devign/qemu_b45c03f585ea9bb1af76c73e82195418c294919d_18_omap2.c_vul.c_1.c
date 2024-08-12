static struct VAR1 *FUN1(struct VAR2 *VAR3, qemu_irq VAR4, qemu_irq VAR5, qemu_irq VAR6, struct VAR7 *VAR8)
{
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR10[0] = VAR4;
    VAR9->VAR10[1] = VAR5;
    VAR9->VAR10[2] = VAR6;
    VAR9->VAR8 = VAR8;
    FUN3(VAR9);
    FUN4(&VAR9->VAR11, NULL, &VAR12, VAR9, "", FUN5(VAR3, 0));
    FUN4(&VAR9->VAR13, NULL, &VAR12, VAR9, "", FUN5(VAR3, 1));
    FUN6(VAR3, 0, &VAR9->VAR11);
    FUN6(VAR3, 1, &VAR9->VAR13);
    return VAR9;
}