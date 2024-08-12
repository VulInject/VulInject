VAR1 *FUN1(target_phys_addr_t VAR2, int VAR3, VAR1 **VAR4, qemu_irq VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    struct
    {
        VAR9 *const *read;
        VAR10 *const *write;
        target_phys_addr_t VAR11;
        ram_addr_t VAR12;
    } const VAR13[] = {
        {VAR14, VAR15, VAR16, VAR17},
        {VAR18, VAR19, VAR20, VAR21},
        {VAR22, VAR23, VAR24, VAR25},
        {VAR26, VAR27, VAR28, VAR29},
        {VAR30, VAR31, VAR32, VAR33},
        {VAR34, VAR35, VAR36, VAR37},
        {VAR38, VAR39, VAR40, VAR41},
    };
    if (VAR3 != 1)
        return NULL;
    VAR7 = FUN2(sizeof(VAR6));
    for (VAR8 = 0; VAR8 < sizeof(VAR13) / sizeof(VAR13[0]); VAR8++)
    {
        int VAR42;
        VAR42 = FUN3(VAR13[VAR8].read, VAR13[VAR8].write, VAR7, VAR43);
        if (VAR42 < 0)
        {
            goto free;
        }
        FUN4(VAR2 + VAR13[VAR8].VAR11, VAR13[VAR8].VAR12, VAR42);
    }
    VAR7->VAR3 = VAR3;
    VAR7->VAR44 = VAR45;
    VAR7->VAR46 = VAR47;
    VAR7->VAR48 = VAR49;
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
        VAR7->VAR50[VAR8].VAR4 = VAR4[VAR8];
    VAR7->VAR5 = VAR5;
    VAR7->VAR51 = VAR52;
    VAR7->VAR53 = VAR54;
    FUN5(NULL, "", 0, 2, VAR55, VAR56, VAR7);
    FUN6(VAR54, VAR7);
    return FUN7(VAR57, VAR7, VAR7->VAR44);
free:
    FUN8(VAR7);
    return NULL;
}