static struct VAR1 *FUN1(target_phys_addr_t VAR2, qemu_irq VAR3, int VAR4)
{
    int VAR5, VAR6;
    struct VAR1 *VAR7;
    VAR7 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    VAR7->VAR4 = VAR4;
    VAR7->VAR8 = FUN2(sizeof(struct VAR9) * VAR7->VAR4);
    VAR7->VAR2 = VAR2;
    VAR7->VAR3 = VAR3;
    VAR7->VAR10 = (VAR11)VAR12;
    VAR7->VAR13 = FUN2(sizeof(VAR14) * VAR15);
    memset(VAR7->VAR8, 0, sizeof(struct VAR9) * VAR7->VAR4);
    for (VAR5 = 0; VAR5 < VAR7->VAR4; VAR5++)
        VAR7->VAR8[VAR5].VAR16 = VAR17;
    memset(VAR7->VAR13, 0, sizeof(VAR14) * VAR15);
    VAR6 = FUN3(0, VAR18, VAR19, VAR7);
    FUN4(VAR2, 0x0000ffff, VAR6);
    FUN5("", 0, 0, VAR20, VAR21, VAR7);
    return VAR7;
}