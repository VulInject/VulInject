VAR1 *FUN1(VAR2 *VAR3, qemu_irq VAR4[4], target_phys_addr_t VAR5, target_phys_addr_t VAR6, target_phys_addr_t VAR7, target_phys_addr_t VAR8)
{
    VAR9 *VAR10;
    int VAR11;
    static int VAR12;
    VAR13 *VAR14;
    VAR10 = FUN2(sizeof(VAR9));
    VAR10->VAR15.VAR16 = FUN3(NULL, "", VAR17, VAR18, VAR4, 0, 4);
    VAR10->VAR19 = FUN4(VAR10->VAR15.VAR16, "", sizeof(VAR20), 0, NULL, NULL);
    VAR14 = VAR10->VAR19->VAR21;
    FUN5(VAR14, VAR22);
    FUN6(VAR14, VAR23);
    FUN7(VAR14, VAR24);
    VAR11 = FUN8(VAR25, VAR26, VAR10);
    if (VAR11 < 0)
        goto free;
    FUN9(VAR5 + VAR27, 4, VAR11);
    VAR11 = FUN10(&VAR10->VAR15);
    if (VAR11 < 0)
        goto free;
    FUN9(VAR5 + VAR28, 4, VAR11);
    VAR11 = FUN8(VAR29, VAR30, VAR10);
    if (VAR11 < 0)
        goto free;
    FUN9(VAR8, VAR31, VAR11);
    FUN11(VAR32, VAR10);
    FUN12("", VAR12++, 1, VAR33, VAR34, VAR10);
    return VAR10->VAR15.VAR16;
free:
    FUN13("", VAR35);
    FUN14(VAR10);
    return NULL;
}