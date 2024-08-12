static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    unsigned int VAR7[4] = {28, 27, 26, 25};
    VAR8 *VAR9 = FUN2();
    VAR8 *VAR10 = FUN3(VAR8, 1);
    VAR8 *VAR11 = FUN4(VAR12 * sizeof(*VAR11));
    hwaddr VAR13[VAR12];
    hwaddr VAR14[VAR12];
    VAR15 *VAR16;
    VAR15 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    uint64_t VAR24;
    uint64_t VAR25;
    hwaddr VAR26 = 0;
    target_long VAR27 = 0;
    VAR28 *VAR29;
    int VAR30;
    int VAR31;
    if (VAR2->VAR32 == NULL)
    {
        VAR2->VAR32 = "";
    }
    VAR21 = FUN5(FUN6(VAR33, VAR2->VAR32));
    if (VAR21 == NULL)
    {
        fprintf(VAR34, "");
        FUN7(1);
    }
    VAR23 = &VAR21->VAR23;
    if (VAR23->VAR35 != VAR36)
    {
        fprintf(VAR34, "", VAR23->VAR35);
        FUN7(1);
    }
    FUN8(VAR37, VAR21);
    FUN9(VAR21, 400000000, 0);
    FUN10(VAR23, NULL, NULL);
    VAR17 = FUN11(sizeof(VAR15) * VAR38);
    VAR17[VAR39] = ((VAR15 *)VAR23->VAR40)[VAR41];
    VAR17[VAR42] = ((VAR15 *)VAR23->VAR40)[VAR43];
    VAR16 = FUN12(VAR23, VAR17, 0x0C0, 0, 1);
    memset(VAR13, 0, sizeof(VAR13));
    memset(VAR14, 0, sizeof(VAR14));
    VAR3 = FUN13(VAR3, VAR12, VAR11, VAR13, VAR14, VAR44);
    FUN14(VAR23, VAR16[14], VAR12, VAR11, VAR13, VAR14, 1);
    VAR29 = FUN15(VAR45, VAR46, VAR16[VAR7[0]], VAR16[VAR7[1]], VAR16[VAR7[2]], VAR16[VAR7[3]], NULL);
    VAR19 = (VAR18 *)FUN16(VAR29, "");
    if (!VAR19)
    {
        fprintf(VAR34, "");
        FUN7(1);
    }
    FUN17(VAR10, NULL, "", FUN18(), 0, VAR47);
    FUN19(FUN2(), VAR48, VAR10);
    if (VAR49[0] != NULL)
    {
        FUN20(VAR9, 0xef600300, 0, VAR16[0], VAR50, VAR49[0], VAR51);
    }
    if (VAR49[1] != NULL)
    {
        FUN20(VAR9, 0xef600400, 0, VAR16[1], VAR50, VAR49[1], VAR51);
    }
    if (VAR19)
    {
        for (VAR31 = 0; VAR31 < VAR52; VAR31++)
        {
            FUN21(&VAR53[VAR31], VAR19, "", NULL);
        }
    }
    if (VAR4)
    {
        VAR30 = FUN22(VAR4, &VAR54, &VAR26, NULL, NULL, NULL);
        if (VAR30 < 0)
        {
            VAR30 = FUN23(VAR4, NULL, NULL, &VAR24, &VAR25, NULL, 1, VAR55, 0, 0);
            VAR54 = VAR24;
            VAR26 = VAR25;
        }
        if (VAR30 < 0)
        {
            fprintf(VAR34, "", VAR4);
            FUN7(1);
        }
    }
    if (VAR6)
    {
        VAR27 = FUN24(VAR6, VAR56, VAR3 - VAR56);
        if (VAR27 < 0)
        {
            fprintf(VAR34, "", VAR6, VAR56);
            FUN7(1);
        }
    }
    if (VAR4)
    {
        if (FUN25(VAR57, VAR3, VAR56, VAR27, VAR5) < 0)
        {
            fprintf(VAR34, "");
            FUN7(1);
        }
    }
}