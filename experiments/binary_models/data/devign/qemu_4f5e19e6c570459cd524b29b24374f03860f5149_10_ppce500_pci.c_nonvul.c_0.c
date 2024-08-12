VAR1 *FUN1(qemu_irq VAR2[4], target_phys_addr_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    static int VAR9;
    VAR5 = FUN2(sizeof(VAR4));
    VAR5->VAR10.VAR11 = FUN3(NULL, "", VAR12, VAR13, VAR2, 0x88, 4);
    VAR7 = FUN4(VAR5->VAR10.VAR11, "", sizeof(VAR6), 0, NULL, NULL);
    FUN5(VAR7->VAR14, VAR15);
    FUN6(VAR7->VAR14, VAR16);
    FUN7(VAR7->VAR14, VAR17);
    VAR5->VAR18 = VAR7;
    VAR8 = FUN8(VAR19, VAR20, VAR5);
    if (VAR8 < 0)
        goto free;
    FUN9(VAR3 + VAR21, 4, VAR8);
    VAR8 = FUN10(&VAR5->VAR10);
    if (VAR8 < 0)
        goto free;
    FUN9(VAR3 + VAR22, 4, VAR8);
    VAR8 = FUN8(VAR23, VAR24, VAR5);
    if (VAR8 < 0)
        goto free;
    FUN9(VAR3 + VAR25, VAR26, VAR8);
    FUN11("", VAR9++, 1, VAR27, VAR28, VAR5);
    return VAR5->VAR10.VAR11;
free:
    FUN12("", VAR29);
    FUN13(VAR5);
    return NULL;
}