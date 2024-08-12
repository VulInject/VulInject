static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    VAR8 *VAR9[4];
    VAR10 *VAR11;
    VAR12 *VAR13;
    qemu_irq VAR14;
    long VAR15, VAR16;
    const char *VAR17;
    uint64_t VAR18, VAR19, VAR20;
    uint64_t VAR21, VAR22, VAR23;
    memset(VAR9, 0, sizeof(VAR9));
    for (VAR16 = 0; VAR16 < VAR24; ++VAR16)
    {
        VAR9[VAR16] = FUN2(VAR4 ? VAR4 : "");
    }
    VAR9[0]->VAR25.VAR26 = VAR3;
    VAR9[0]->VAR25.VAR27 = 0;
    VAR9[0]->VAR25.VAR28 = VAR24;
    VAR11 = FUN3(VAR3, &VAR13, &VAR14, VAR9, VAR29);
    FUN4(VAR13, 1900, VAR14);
    FUN5(VAR13, 0x40, 0, NULL);
    FUN6(VAR13, "");
    FUN7(VAR11);
    FUN8(VAR13, VAR30);
    for (VAR16 = 0; VAR16 < VAR31; VAR16++)
    {
        FUN9(&VAR32[VAR16], VAR11, "", NULL);
    }
    {
        VAR33 *VAR34[VAR35 * VAR36];
        FUN10(VAR34, FUN11(VAR34));
        FUN12(VAR11, VAR34, 0);
    }
    VAR17 = (VAR37 ? VAR37 : "");
    VAR17 = FUN13(VAR38, VAR17);
    if (VAR17 == NULL)
    {
        FUN14("");
        FUN15(1);
    }
    VAR15 = FUN16(VAR17, VAR39, NULL, &VAR18, &VAR19, &VAR20, 0, VAR40, 0);
    if (VAR15 < 0)
    {
        FUN14("", VAR17);
        FUN15(1);
    }
    for (VAR16 = 0; VAR16 < VAR24; ++VAR16)
    {
        VAR9[VAR16]->VAR25.VAR41 = 1;
        VAR9[VAR16]->VAR25.VAR42 = VAR18;
        VAR9[VAR16]->VAR25.VAR43 = VAR18;
    }
    if (VAR5)
    {
        uint64_t VAR44;
        VAR15 = FUN16(VAR5, VAR39, NULL, &VAR21, &VAR22, &VAR23, 0, VAR40, 0);
        if (VAR15 < 0)
        {
            FUN14("", VAR5);
            FUN15(1);
        }
        VAR9[0]->VAR25.VAR27 = VAR21;
        VAR44 = VAR22 - 0x6000;
        if (VAR6)
        {
            FUN17("", VAR44, 0x100, VAR6);
        }
        if (VAR7)
        {
            long VAR45, VAR46;
            VAR46 = FUN18(VAR7);
            if (VAR46 < 0)
            {
                FUN14("", VAR7);
                FUN15(1);
            }
            VAR45 = (VAR3 - VAR46) & VAR47;
            FUN19(VAR7, VAR45, VAR3 - VAR45);
            FUN20(&VAR48, VAR44 + 0x100, VAR45 + 0xfffffc0000000000ULL, VAR49, NULL);
            FUN20(&VAR48, VAR44 + 0x108, VAR46, VAR49, NULL);
        }
    }
}