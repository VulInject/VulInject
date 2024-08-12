static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    uint64_t VAR11;
    uint64_t VAR12;
    target_phys_addr_t VAR13 = 0;
    target_phys_addr_t VAR14 = VAR15;
    target_long VAR16 = 0;
    target_ulong VAR17 = VAR18;
    target_ulong VAR19 = VAR20;
    target_long VAR21 = 0;
    void *VAR22;
    int VAR23 = 0;
    unsigned int VAR24[4] = {1, 2, 3, 4};
    VAR25 *VAR26, *VAR27, *VAR28;
    VAR29 *VAR30[2];
    VAR10 = FUN2("");
    if (!VAR10)
    {
        fprintf(VAR31, "");
        FUN3(1);
    }
    VAR1 &= ~(VAR32 - 1);
    FUN4(0, VAR1, FUN5(VAR1));
    VAR26 = FUN6(sizeof(VAR25) * VAR33);
    VAR26[VAR34] = ((VAR25 *)VAR10->VAR35)[VAR36];
    VAR26[VAR37] = ((VAR25 *)VAR10->VAR35)[VAR38];
    VAR27 = FUN7(VAR39, 1, &VAR26, NULL);
    if (VAR40[0])
        VAR30[0] = FUN8(VAR41, 0, VAR27[12 + 26], 399193, VAR40[0], 1);
    if (VAR40[1])
        VAR30[0] = FUN8(VAR42, 0, VAR27[12 + 26], 399193, VAR40[0], 1);
    VAR28 = FUN9(sizeof(VAR25) * 4);
    VAR28[0] = VAR27[VAR24[0]];
    VAR28[1] = VAR27[VAR24[1]];
    VAR28[2] = VAR27[VAR24[2]];
    VAR28[3] = VAR27[VAR24[3]];
    VAR8 = FUN10(VAR28, VAR43);
    if (!VAR8)
        FUN11("");
    FUN12(VAR44, VAR45);
    if (VAR8)
    {
        for (VAR23 = 0; VAR23 < VAR46; VAR23++)
        {
            FUN13(&VAR47[VAR23], "", NULL);
        }
    }
    if (VAR3)
    {
        VAR16 = FUN14(VAR3, &VAR13, &VAR14, NULL);
        if (VAR16 < 0)
        {
            VAR16 = FUN15(VAR3, 0, &VAR11, &VAR12, NULL, 1, VAR48, 0);
            VAR13 = VAR11;
            VAR14 = VAR12;
        }
        if (VAR16 < 0)
        {
            fprintf(VAR31, "", VAR3);
            FUN3(1);
        }
    }
    if (VAR5)
    {
        VAR21 = FUN16(VAR5, VAR19, VAR1 - VAR19);
        if (VAR21 < 0)
        {
            fprintf(VAR31, "", VAR5);
            FUN3(1);
        }
    }
    if (VAR3)
    {
        VAR22 = FUN17(VAR17, VAR1, VAR19, VAR21, VAR4);
        if (VAR22 == NULL)
        {
            fprintf(VAR31, "");
            FUN3(1);
        }
        VAR10->VAR49[1] = (16 << 20) - 8;
        VAR10->VAR49[3] = VAR17;
        VAR10->VAR50 = VAR13;
    }
    if (FUN18())
        FUN19();
    return;
}