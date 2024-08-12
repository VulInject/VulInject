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
    unsigned int VAR23[VAR24] = {1, 2, 3, 4};
    VAR25 **VAR26, *VAR27;
    VAR28 *VAR29;
    VAR10 *VAR30 = NULL;
    VAR5 *VAR31;
    VAR32 *VAR33;
    VAR34 *VAR35;
    if (VAR2->VAR36 == NULL)
    {
        VAR2->VAR36 = "";
    }
    VAR26 = FUN4(VAR37 * sizeof(VAR25 *));
    VAR26[0] = FUN4(VAR37 * sizeof(VAR25) * VAR38);
    for (VAR22 = 0; VAR22 < VAR37; VAR22++)
    {
        VAR39 *VAR40;
        VAR41 *VAR42;
        VAR25 *VAR43;
        VAR40 = FUN5(VAR2->VAR36);
        if (VAR40 == NULL)
        {
            fprintf(VAR44, "");
            FUN6(1);
        }
        VAR11 = &VAR40->VAR11;
        VAR42 = FUN7(VAR40);
        if (!VAR30)
        {
            VAR30 = VAR11;
        }
        VAR26[VAR22] = VAR26[0] + (VAR22 * VAR38);
        VAR43 = (VAR25 *)VAR11->VAR45;
        VAR26[VAR22][VAR46] = VAR43[VAR47];
        VAR26[VAR22][VAR48] = VAR43[VAR49];
        VAR11->VAR50[VAR51].VAR52 = VAR42->VAR53 = VAR22;
        VAR11->VAR54 = VAR55 + VAR56 + 0xa0;
        FUN8(VAR40, 400000000, VAR57);
        if (!VAR22)
        {
            struct VAR58 *VAR58;
            VAR58 = FUN4(sizeof(struct VAR58));
            FUN9(VAR59, VAR40);
            VAR11->VAR60 = VAR58;
        }
        else
        {
            FUN9(VAR61, VAR40);
        }
    }
    VAR11 = VAR30;
    VAR62 &= ~(VAR63 - 1);
    VAR2->VAR62 = VAR62;
    FUN10(VAR7, NULL, "", VAR62);
    FUN11(VAR7);
    FUN12(VAR6, 0, VAR7);
    VAR29 = FUN13(NULL, "");
    FUN14(FUN15(), "", FUN16(VAR29), NULL);
    FUN17(VAR29);
    VAR35 = FUN18(VAR29);
    VAR31 = &VAR35->VAR64;
    FUN12(VAR6, VAR55, VAR31);
    VAR27 = FUN19(VAR4, VAR31, VAR26);
    if (VAR65[0])
    {
        FUN20(VAR31, VAR66, 0, VAR27[42], 399193, VAR65[0], VAR67);
    }
    if (VAR65[1])
    {
        FUN20(VAR31, VAR68, 0, VAR27[42], 399193, VAR65[1], VAR67);
    }
    VAR29 = FUN13(NULL, "");
    FUN17(VAR29);
    VAR33 = FUN21(VAR29);
    FUN12(VAR31, VAR69, FUN22(VAR33, 0));
    VAR29 = FUN13(NULL, "");
    FUN23(VAR29, "", VAR4->VAR70);
    FUN23(VAR29, "", VAR23[0]);
    FUN17(VAR29);
    VAR33 = FUN21(VAR29);
    for (VAR22 = 0; VAR22 < VAR24; VAR22++)
    {
        FUN24(VAR33, VAR22, VAR27[VAR23[VAR22]]);
    }
    FUN12(VAR31, VAR71, FUN22(VAR33, 0));
    VAR9 = (VAR8 *)FUN25(VAR29, "");
    if (!VAR9)
        FUN26("");
    FUN27(FUN21(VAR29), 1, VAR72);
    if (VAR9)
    {
        for (VAR22 = 0; VAR22 < VAR73; VAR22++)
        {
            FUN28(&VAR74[VAR22], VAR9, "", NULL);
        }
    }
    FUN29("", VAR75, NULL);
    if (VAR2->VAR76)
    {
        VAR17 = FUN30(VAR2->VAR76, &VAR14, &VAR15, NULL);
        if (VAR17 < 0)
        {
            VAR17 = FUN31(VAR2->VAR76, NULL, NULL, &VAR12, &VAR13, NULL, 1, VAR77, 0);
            VAR14 = VAR12;
            VAR15 = VAR13;
        }
        if (VAR17 < 0)
        {
            fprintf(VAR44, "", VAR2->VAR76);
            FUN6(1);
        }
        VAR21 = VAR15 + VAR17;
        VAR18 = (VAR21 + VAR78) & ~VAR79;
        VAR21 += VAR80;
    }
    if (VAR2->VAR81)
    {
        VAR19 = (VAR21 + VAR82) & ~VAR83;
        VAR20 = FUN32(VAR2->VAR81, VAR19, VAR62 - VAR19);
        if (VAR20 < 0)
        {
            fprintf(VAR44, "", VAR2->VAR81);
            FUN6(1);
        }
        VAR21 = VAR19 + VAR20;
    }
    if (VAR2->VAR76)
    {
        struct VAR58 *VAR58;
        int VAR84;
        VAR84 = FUN33(VAR2, VAR4, VAR18, VAR19, VAR20, VAR15, VAR17);
        if (VAR84 < 0)
        {
            fprintf(VAR44, "");
            FUN6(1);
        }
        assert(VAR84 < VAR80);
        VAR58 = VAR11->VAR60;
        VAR58->VAR14 = VAR14;
        VAR58->VAR18 = VAR18;
        VAR58->VAR84 = VAR84;
    }
    if (FUN34())
    {
        FUN35();
    }
}