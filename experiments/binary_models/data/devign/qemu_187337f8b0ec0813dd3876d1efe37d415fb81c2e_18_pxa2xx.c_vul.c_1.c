static struct VAR1 *FUN1(target_phys_addr_t VAR2, qemu_irq VAR3, struct VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8;
    struct VAR1 *VAR9 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR5 = VAR5;
    VAR9->VAR7 = VAR7;
    FUN3(VAR9);
    VAR8 = FUN4(0, VAR10, VAR11, VAR9);
    FUN5(VAR9->VAR2, 0xfff, VAR8);
    if (VAR7)
        FUN6(VAR7, VAR12, VAR13, VAR14, VAR9);
    FUN7("", 0, 0, VAR15, VAR16, VAR9);
    return VAR9;
}