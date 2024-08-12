void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2();
    VAR5 *VAR7 = FUN3(VAR5, 1);
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    uint64_t VAR12;
    uint64_t VAR13;
    hwaddr VAR14 = 0;
    hwaddr VAR15 = VAR16;
    target_long VAR17 = 0;
    target_ulong VAR18 = 0;
    target_ulong VAR19 = 0;
    target_long VAR20 = 0;
    target_ulong VAR21 = 0;
    int VAR22;
    unsigned int VAR23[4] = {1, 2, 3, 4};
    VAR24 **VAR25, *VAR26;
    VAR27 *VAR28;
    VAR10 *VAR29 = NULL;
    VAR5 *VAR30;
    VAR31 *VAR32;
    VAR33 *VAR34;
    if (VAR2->VAR35 == NULL)
    {
        VAR2->VAR35 = "";
    }
    VAR25 = FUN4(VAR36 * sizeof(VAR24 *));
    VAR25[0] = FUN4(VAR36 * sizeof(VAR24) * VAR37);
    for (VAR22 = 0; VAR22 < VAR36; VAR22++)
    {
        VAR38 *VAR39;
        VAR40 *VAR41;
        VAR24 *VAR42;
        VAR39 = FUN5(VAR2->VAR35);
        if (VAR39 == NULL)
        {
            fprintf(VAR43, "");
            FUN6(1);
        }
        VAR11 = &VAR39->VAR11;
        VAR41 = FUN7(VAR39);
        if (!VAR29)
        {
            VAR29 = VAR11;
        }
        VAR25[VAR22] = VAR25[0] + (VAR22 * VAR37);
        VAR42 = (VAR24 *)VAR11->VAR44;
        VAR25[VAR22][VAR45] = VAR42[VAR46];
        VAR25[VAR22][VAR47] = VAR42[VAR48];
        VAR11->VAR49[VAR50] = VAR41->VAR51 = VAR22;
        VAR11->VAR52 = VAR53 + VAR54 + 0xa0;
        FUN8(VAR39, 400000000, VAR55);
        if (!VAR22)
        {
            struct VAR56 *VAR56;
            VAR56 = FUN4(sizeof(struct VAR56));
            FUN9(VAR57, VAR39);
            VAR11->VAR58 = VAR56;
        }
        else
        {
            FUN9(VAR59, VAR39);
        }
    }
    VAR11 = VAR29;
    VAR60 &= ~(VAR61 - 1);
    VAR2->VAR60 = VAR60;
    FUN10(VAR7, NULL, "", VAR60);
    FUN11(VAR7);
    FUN12(VAR6, 0, VAR7);
    VAR28 = FUN13(NULL, "");
    FUN14(FUN15(), "", FUN16(VAR28), NULL);
    FUN17(VAR28);
    VAR34 = FUN18(VAR28);
    VAR30 = &VAR34->VAR62;
    FUN12(VAR6, VAR53, VAR30);
    VAR26 = FUN19(VAR4, VAR30, VAR25);
    if (VAR63[0])
    {
        FUN20(VAR30, VAR64, 0, VAR26[42], 399193, VAR63[0], VAR65);
    }
    if (VAR63[1])
    {
        FUN20(VAR30, VAR66, 0, VAR26[42], 399193, VAR63[1], VAR65);
    }
    VAR28 = FUN13(NULL, "");
    FUN17(VAR28);
    VAR32 = FUN21(VAR28);
    FUN12(VAR30, VAR67, FUN22(VAR32, 0));
    VAR28 = FUN13(NULL, "");
    FUN23(VAR28, "", VAR4->VAR68);
    FUN17(VAR28);
    VAR32 = FUN21(VAR28);
    FUN24(VAR32, 0, VAR26[VAR23[0]]);
    FUN24(VAR32, 1, VAR26[VAR23[1]]);
    FUN24(VAR32, 2, VAR26[VAR23[2]]);
    FUN24(VAR32, 3, VAR26[VAR23[3]]);
    FUN12(VAR30, VAR69, FUN22(VAR32, 0));
    VAR9 = (VAR8 *)FUN25(VAR28, "");
    if (!VAR9)
        FUN26("");
    FUN27(FUN21(VAR28), 1, VAR70);
    if (VAR9)
    {
        for (VAR22 = 0; VAR22 < VAR71; VAR22++)
        {
            FUN28(&VAR72[VAR22], VAR9, "", NULL);
        }
    }
    FUN29("", VAR73, NULL);
    if (VAR2->VAR74)
    {
        VAR17 = FUN30(VAR2->VAR74, &VAR14, &VAR15, NULL);
        if (VAR17 < 0)
        {
            VAR17 = FUN31(VAR2->VAR74, NULL, NULL, &VAR12, &VAR13, NULL, 1, VAR75, 0);
            VAR14 = VAR12;
            VAR15 = VAR13;
        }
        if (VAR17 < 0)
        {
            fprintf(VAR43, "", VAR2->VAR74);
            FUN6(1);
        }
        VAR21 = VAR15 + VAR17;
        VAR18 = (VAR21 + VAR76) & ~VAR77;
        VAR21 += VAR78;
    }
    if (VAR2->VAR79)
    {
        VAR19 = (VAR21 + VAR80) & ~VAR81;
        VAR20 = FUN32(VAR2->VAR79, VAR19, VAR60 - VAR19);
        if (VAR20 < 0)
        {
            fprintf(VAR43, "", VAR2->VAR79);
            FUN6(1);
        }
        VAR21 = VAR19 + VAR20;
    }
    if (VAR2->VAR74)
    {
        struct VAR56 *VAR56;
        int VAR82;
        VAR82 = FUN33(VAR2, VAR4, VAR18, VAR19, VAR20);
        if (VAR82 < 0)
        {
            fprintf(VAR43, "");
            FUN6(1);
        }
        assert(VAR82 < VAR78);
        VAR56 = VAR11->VAR58;
        VAR56->VAR14 = VAR14;
        VAR56->VAR18 = VAR18;
        VAR56->VAR82 = VAR82;
    }
    if (FUN34())
    {
        FUN35();
    }
}