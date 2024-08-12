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
    int VAR22 = 0;
    unsigned int VAR23[4] = {1, 2, 3, 4};
    VAR24 *VAR25, *VAR26, *VAR27;
    VAR28 *VAR29[2];
    VAR10 = FUN2("");
    if (!VAR10)
    {
        fprintf(VAR30, "");
        FUN3(1);
    }
    VAR1 &= ~(VAR31 - 1);
    FUN4(0, VAR1, FUN5(VAR1));
    VAR25 = FUN6(sizeof(VAR24) * VAR32);
    VAR25[VAR33] = ((VAR24 *)VAR10->VAR34)[VAR35];
    VAR25[VAR36] = ((VAR24 *)VAR10->VAR34)[VAR37];
    VAR26 = FUN7(VAR38, 1, &VAR25, NULL);
    if (VAR39[0])
        VAR29[0] = FUN8(VAR40, 0, VAR26[12 + 26], 399193, VAR39[0], 1);
    if (VAR39[1])
        VAR29[0] = FUN8(VAR41, 0, VAR26[12 + 26], 399193, VAR39[0], 1);
    VAR27 = FUN9(sizeof(VAR24) * 4);
    VAR27[0] = VAR26[VAR23[0]];
    VAR27[1] = VAR26[VAR23[1]];
    VAR27[2] = VAR26[VAR23[2]];
    VAR27[3] = VAR26[VAR23[3]];
    VAR8 = FUN10(VAR27, VAR42);
    if (!VAR8)
        FUN11("");
    FUN12(VAR43, VAR44);
    if (VAR8)
    {
        for (VAR22 = 0; VAR22 < VAR45; VAR22++)
        {
            FUN13(&VAR46[VAR22], "", NULL);
        }
    }
    if (VAR3)
    {
        VAR16 = FUN14(VAR3, &VAR13, &VAR14, NULL);
        if (VAR16 < 0)
        {
            VAR16 = FUN15(VAR3, 0, &VAR11, &VAR12, NULL, 1, VAR47, 0);
            VAR13 = VAR11;
            VAR14 = VAR12;
        }
        if (VAR16 < 0)
        {
            fprintf(VAR30, "", VAR3);
            FUN3(1);
        }
    }
    if (VAR5)
    {
        VAR21 = FUN16(VAR5, VAR19, VAR1 - VAR19);
        if (VAR21 < 0)
        {
            fprintf(VAR30, "", VAR5);
            FUN3(1);
        }
    }
    if (VAR3)
    {
        if (FUN17(VAR17, VAR1, VAR19, VAR21, VAR4) < 0)
        {
            fprintf(VAR30, "");
            FUN3(1);
        }
        FUN18(VAR10);
        VAR10->VAR48[1] = (16 << 20) - 8;
        VAR10->VAR48[3] = VAR17;
        VAR10->VAR49 = VAR13;
    }
    if (FUN19())
        FUN20();
    return;
}