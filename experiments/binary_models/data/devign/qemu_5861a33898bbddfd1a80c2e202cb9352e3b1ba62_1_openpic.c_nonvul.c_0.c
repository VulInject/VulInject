VAR1 *FUN1(VAR2 **VAR3, int VAR4, VAR1 **VAR5, qemu_irq VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10;
    struct
    {
        const char *VAR11;
        MemoryRegionOps const *VAR12;
        hwaddr VAR13;
        ram_addr_t VAR14;
    } const VAR15[] = {
        {"", &VAR16, VAR17, VAR18},
        {"", &VAR19, VAR20, VAR21},
        {"", &VAR22, VAR23, VAR24},
        {"", &VAR25, VAR26, VAR27},
    };
    if (VAR4 != 1)
        return NULL;
    VAR8 = FUN2(sizeof(VAR7));
    FUN3(&VAR8->VAR28, "", 0x40000);
    for (VAR9 = 0; VAR9 < FUN4(VAR15); VAR9++)
    {
        FUN5(&VAR8->VAR29[VAR9], VAR15[VAR9].VAR12, VAR8, VAR15[VAR9].VAR11, VAR15[VAR9].VAR14);
        FUN6(&VAR8->VAR28, VAR15[VAR9].VAR13, &VAR8->VAR29[VAR9]);
    }
    VAR8->VAR4 = VAR4;
    VAR8->VAR30 = VAR31;
    VAR8->VAR32 = VAR33;
    VAR8->VAR34 = VAR35;
    for (VAR9 = 0; VAR9 < VAR36; VAR9++)
    {
        VAR8->VAR37[VAR9].VAR38 = VAR39;
    }
    for (; VAR9 < VAR35; VAR9++)
    {
        VAR8->VAR37[VAR9].VAR38 = VAR40;
    }
    VAR10 = VAR33;
    for (; VAR9 < VAR10; VAR9++)
    {
        VAR8->VAR37[VAR9].VAR38 = VAR41;
    }
    for (; VAR9 < VAR31; VAR9++)
    {
        VAR8->VAR37[VAR9].VAR38 = VAR42;
    }
    for (VAR9 = 0; VAR9 < VAR4; VAR9++)
        VAR8->VAR43[VAR9].VAR5 = VAR5[VAR9];
    VAR8->VAR6 = VAR6;
    FUN7(&VAR8->VAR44.VAR45, "", 0, 2, VAR46, VAR47, VAR8);
    FUN8(VAR48, VAR8);
    VAR8->VAR49 = VAR48;
    if (VAR3)
        *VAR3 = &VAR8->VAR28;
    return FUN9(VAR50, VAR8, VAR8->VAR30);
}