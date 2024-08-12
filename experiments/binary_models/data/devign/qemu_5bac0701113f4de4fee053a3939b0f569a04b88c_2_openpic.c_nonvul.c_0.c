VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4, int VAR5, VAR1 **VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    struct
    {
        const char *VAR10;
        MemoryRegionOps const *VAR11;
        hwaddr VAR12;
        ram_addr_t VAR13;
    } const VAR14[] = {
        {"", &VAR15, VAR16, VAR17},
        {"", &VAR18, VAR19, VAR20},
        {"", &VAR21, VAR22, VAR23},
        {"", &VAR24, VAR25, VAR26},
    };
    VAR8 = FUN2(sizeof(VAR7));
    FUN3(&VAR8->VAR27, "", 0x40000);
    FUN4(VAR3, VAR4, &VAR8->VAR27);
    for (VAR9 = 0; VAR9 < sizeof(VAR14) / sizeof(VAR14[0]); VAR9++)
    {
        FUN5(&VAR8->VAR28[VAR9], VAR14[VAR9].VAR11, VAR8, VAR14[VAR9].VAR10, VAR14[VAR9].VAR13);
        FUN4(&VAR8->VAR27, VAR14[VAR9].VAR12, &VAR8->VAR28[VAR9]);
    }
    VAR8->VAR5 = VAR5;
    VAR8->VAR29 = 80;
    VAR8->VAR30 = VAR31;
    VAR8->VAR32 = VAR33;
    VAR8->VAR34 = 0xFFFF;
    VAR8->VAR35 = 0x00000000;
    VAR8->VAR36 = 0x80000000;
    VAR8->VAR37 = 0x00000001;
    VAR8->VAR38 = VAR39;
    VAR8->VAR40 = VAR41;
    VAR8->VAR42 = VAR43;
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        VAR8->VAR44[VAR9].VAR6 = VAR6[VAR9];
    VAR8->VAR45 |= VAR46;
    FUN6(NULL, "", 0, 2, VAR47, VAR48, VAR8);
    FUN7(VAR49, VAR8);
    return FUN8(VAR50, VAR8, VAR8->VAR38);
}