static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4 ? VAR2->VAR4 : "";
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    VAR8 *VAR9[4];
    VAR10 *VAR11;
    VAR12 *VAR13;
    qemu_irq VAR14;
    long VAR15, VAR16;
    char *VAR17;
    uint64_t VAR18, VAR19, VAR20;
    uint64_t VAR21, VAR22, VAR23;
    memset(VAR9, 0, sizeof(VAR9));
    for (VAR16 = 0; VAR16 < VAR24; ++VAR16)
    {
        VAR9[VAR16] = FUN2(FUN3(VAR25, VAR4));
        if (!VAR9[VAR16])
        {
            FUN4("");
            FUN5(1);
        }
    }
    VAR9[0]->VAR26.VAR27 = VAR3;
    VAR9[0]->VAR26.VAR28 = 0;
    VAR9[0]->VAR26.VAR29 = VAR24;
    VAR11 = FUN6(VAR3, &VAR13, &VAR14, VAR9, VAR30);
    FUN7(VAR13, 1900, VAR14);
    FUN8(VAR13, 0x40, 0, NULL);
    FUN9(VAR13, "");
    FUN10(VAR11);
    FUN11(VAR13, 0, VAR31);
    for (VAR16 = 0; VAR16 < VAR32; VAR16++)
    {
        FUN12(&VAR33[VAR16], VAR11, "", NULL);
    }
    {
        VAR34 *VAR35[VAR36 * VAR37];
        FUN13(VAR35, FUN14(VAR35));
        FUN15(VAR11, VAR35, 0);
    }
    VAR17 = FUN16(VAR38, VAR39 ? VAR39 : "");
    if (VAR17 == NULL)
    {
        FUN4("");
        FUN5(1);
    }
    VAR15 = FUN17(VAR17, VAR40, NULL, &VAR18, &VAR19, &VAR20, 0, VAR41, 0, 0);
    if (VAR15 < 0)
    {
        FUN4("", VAR17);
        FUN5(1);
    }
    FUN18(VAR17);
    for (VAR16 = 0; VAR16 < VAR24; ++VAR16)
    {
        VAR9[VAR16]->VAR26.VAR42 = VAR18;
        VAR9[VAR16]->VAR26.VAR43 = VAR18;
    }
    if (VAR5)
    {
        uint64_t VAR44;
        VAR15 = FUN17(VAR5, VAR40, NULL, &VAR21, &VAR22, &VAR23, 0, VAR41, 0, 0);
        if (VAR15 < 0)
        {
            FUN4("", VAR5);
            FUN5(1);
        }
        VAR9[0]->VAR26.VAR28 = VAR21;
        VAR44 = VAR22 - 0x6000;
        if (VAR6)
        {
            FUN19("", VAR44, 0x100, VAR6);
        }
        if (VAR7)
        {
            long VAR45, VAR46;
            VAR46 = FUN20(VAR7);
            if (VAR46 < 0)
            {
                FUN4("", VAR7);
                FUN5(1);
            }
            VAR45 = (VAR3 - VAR46) & VAR47;
            FUN21(VAR7, VAR45, VAR3 - VAR45);
            FUN22(&VAR48, VAR44 + 0x100, VAR45 + 0xfffffc0000000000ULL, VAR49, NULL);
            FUN22(&VAR48, VAR44 + 0x108, VAR46, VAR49, NULL);
        }
    }
}