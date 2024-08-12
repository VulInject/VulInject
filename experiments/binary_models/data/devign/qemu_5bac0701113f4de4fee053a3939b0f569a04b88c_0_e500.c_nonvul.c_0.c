void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    VAR3 *VAR5 = FUN3(VAR3, 1);
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    uint64_t VAR10;
    uint64_t VAR11;
    hwaddr VAR12 = 0;
    hwaddr VAR13 = VAR14;
    target_long VAR15 = 0;
    target_ulong VAR16 = 0;
    target_ulong VAR17 = 0;
    target_long VAR18 = 0;
    int VAR19 = 0;
    unsigned int VAR20[4] = {1, 2, 3, 4};
    VAR21 **VAR22, *VAR23;
    VAR24 *VAR25;
    VAR8 *VAR26 = NULL;
    VAR3 *VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    if (VAR2->VAR32 == NULL)
    {
        VAR2->VAR32 = "";
    }
    VAR22 = FUN4(VAR33 * sizeof(VAR21 *));
    VAR22[0] = FUN4(VAR33 * sizeof(VAR21) * VAR34);
    for (VAR19 = 0; VAR19 < VAR33; VAR19++)
    {
        VAR35 *VAR36;
        VAR21 *VAR37;
        VAR36 = FUN5(VAR2->VAR32);
        if (VAR36 == NULL)
        {
            fprintf(VAR38, "");
            FUN6(1);
        }
        VAR9 = &VAR36->VAR9;
        if (!VAR26)
        {
            VAR26 = VAR9;
        }
        VAR22[VAR19] = VAR22[0] + (VAR19 * VAR34);
        VAR37 = (VAR21 *)VAR9->VAR39;
        VAR22[VAR19][VAR40] = VAR37[VAR41];
        VAR22[VAR19][VAR42] = VAR37[VAR43];
        VAR9->VAR44[VAR45] = VAR9->VAR46 = VAR19;
        VAR9->VAR47 = VAR48 + VAR49 + 0x20000;
        FUN7(VAR9, 400000000, VAR50);
        if (!VAR19)
        {
            struct VAR51 *VAR51;
            VAR51 = FUN4(sizeof(struct VAR51));
            FUN8(VAR52, VAR36);
            VAR9->VAR53 = VAR51;
        }
        else
        {
            FUN8(VAR54, VAR36);
        }
    }
    VAR9 = VAR26;
    VAR55 &= ~(VAR56 - 1);
    FUN9(VAR5, "", VAR55);
    FUN10(VAR5);
    FUN11(VAR4, 0, VAR5);
    VAR25 = FUN12(NULL, "");
    FUN13(FUN14(), "", FUN15(VAR25), NULL);
    FUN16(VAR25);
    VAR31 = FUN17(VAR25);
    VAR27 = &VAR31->VAR57;
    FUN11(VAR4, VAR48, VAR27);
    VAR23 = FUN18(VAR27, VAR49, VAR33, VAR22);
    if (!VAR23)
    {
        FUN19(VAR9, "");
    }
    if (VAR58[0])
    {
        FUN20(VAR27, VAR59, 0, VAR23[42], 399193, VAR58[0], VAR60);
    }
    if (VAR58[1])
    {
        FUN20(VAR27, VAR61, 0, VAR23[42], 399193, VAR58[1], VAR60);
    }
    VAR25 = FUN12(NULL, "");
    FUN16(VAR25);
    VAR29 = FUN21(VAR25);
    FUN11(VAR27, VAR62, FUN22(VAR29, 0));
    VAR25 = FUN12(NULL, "");
    FUN16(VAR25);
    VAR29 = FUN21(VAR25);
    FUN23(VAR29, 0, VAR23[VAR20[0]]);
    FUN23(VAR29, 1, VAR23[VAR20[1]]);
    FUN23(VAR29, 2, VAR23[VAR20[2]]);
    FUN23(VAR29, 3, VAR23[VAR20[3]]);
    FUN11(VAR27, VAR63, FUN22(VAR29, 0));
    VAR7 = (VAR6 *)FUN24(VAR25, "");
    if (!VAR7)
        FUN25("");
    FUN26(FUN27(VAR25), 1, VAR64);
    if (VAR7)
    {
        for (VAR19 = 0; VAR19 < VAR65; VAR19++)
        {
            FUN28(&VAR66[VAR19], "", NULL);
        }
    }
    FUN29("", VAR67, NULL);
    if (VAR2->VAR68)
    {
        VAR15 = FUN30(VAR2->VAR68, &VAR12, &VAR13, NULL);
        if (VAR15 < 0)
        {
            VAR15 = FUN31(VAR2->VAR68, NULL, NULL, &VAR10, &VAR11, NULL, 1, VAR69, 0);
            VAR12 = VAR10;
            VAR13 = VAR11;
        }
        if (VAR15 < 0)
        {
            fprintf(VAR38, "", VAR2->VAR68);
            FUN6(1);
        }
    }
    if (VAR2->VAR70)
    {
        VAR17 = (VAR13 + VAR15 + VAR71) & ~VAR72;
        VAR18 = FUN32(VAR2->VAR70, VAR17, VAR55 - VAR17);
        if (VAR18 < 0)
        {
            fprintf(VAR38, "", VAR2->VAR70);
            FUN6(1);
        }
    }
    if (VAR2->VAR68)
    {
        struct VAR51 *VAR51;
        int VAR73;
        VAR16 = (VAR13 + VAR15 + VAR74) & ~VAR75;
        VAR73 = FUN33(VAR9, VAR2, VAR16, VAR17, VAR18);
        if (VAR73 < 0)
        {
            fprintf(VAR38, "");
            FUN6(1);
        }
        VAR51 = VAR9->VAR53;
        VAR51->VAR12 = VAR12;
        VAR51->VAR16 = VAR16;
        VAR51->VAR73 = VAR73;
    }
    if (FUN34())
    {
        FUN35();
    }
}