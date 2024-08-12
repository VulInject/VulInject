static struct VAR1 *FUN1(target_phys_addr_t VAR2, qemu_irq VAR3, struct VAR4 *VAR5)
{
    int VAR6;
    struct VAR1 *VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR2 = VAR2;
    VAR7->VAR3 = VAR3;
    VAR7->VAR5 = VAR5;
    VAR7->VAR8 = VAR9;
    FUN3(VAR7);
    VAR6 = FUN4(0, VAR10, VAR11, VAR7);
    FUN5(VAR7->VAR2 & 0xfff00000, 0xfffff, VAR6);
    FUN6("", VAR2, 0, VAR12, VAR13, VAR7);
    return VAR7;
}