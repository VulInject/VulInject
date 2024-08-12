void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2();
    VAR5 *VAR7 = FUN3(VAR5, 1);
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    uint64_t VAR12;
    hwaddr VAR13 = -1LL;
    int VAR14 = 0;
    hwaddr VAR15 = 0;
    hwaddr VAR16 = 0;
    int VAR17 = 0;
    hwaddr VAR18 = 0;
    char *VAR19;
    hwaddr VAR20 = 0;
    target_long VAR21;
    struct VAR22 *VAR22;
    int VAR23;
    int VAR24;
    unsigned int VAR25[VAR26] = {1, 2, 3, 4};
    VAR27 **VAR28, *VAR29;
    VAR30 *VAR31;
    VAR10 *VAR32 = NULL;
    VAR5 *VAR33;
    VAR34 *VAR35;
    VAR36 *VAR37;
    if (VAR2->VAR38 == NULL)
    {
        VAR2->VAR38 = "";
    }
    VAR28 = FUN4(VAR39 * sizeof(VAR27 *));
    VAR28[0] = FUN4(VAR39 * sizeof(VAR27) * VAR40);
    for (VAR24 = 0; VAR24 < VAR39; VAR24++)
    {
        VAR41 *VAR42;
        VAR43 *VAR44;
        VAR27 *VAR45;
        VAR42 = FUN5(VAR2->VAR38);
        if (VAR42 == NULL)
        {
            fprintf(VAR46, "");
            FUN6(1);
        }
        VAR11 = &VAR42->VAR11;
        VAR44 = FUN7(VAR42);
        if (!VAR32)
        {
            VAR32 = VAR11;
        }
        VAR28[VAR24] = VAR28[0] + (VAR24 * VAR40);
        VAR45 = (VAR27 *)VAR11->VAR47;
        VAR28[VAR24][VAR48] = VAR45[VAR49];
        VAR28[VAR24][VAR50] = VAR45[VAR51];
        VAR11->VAR52[VAR53].VAR54 = VAR44->VAR55 = VAR24;
        VAR11->VAR56 = VAR4->VAR57 + VAR58 + 0xa0;
        FUN8(VAR42, 400000000, VAR59);
        if (!VAR24)
        {
            struct VAR22 *VAR22;
            VAR22 = FUN4(sizeof(struct VAR22));
            FUN9(VAR60, VAR42);
            VAR11->VAR61 = VAR22;
        }
        else
        {
            FUN9(VAR62, VAR42);
        }
    }
    VAR11 = VAR32;
    VAR63 &= ~(VAR64 - 1);
    VAR2->VAR63 = VAR63;
    FUN10(VAR7, NULL, "", VAR63);
    FUN11(VAR6, 0, VAR7);
    VAR31 = FUN12(NULL, "");
    FUN13(FUN14(), "", FUN15(VAR31), NULL);
    FUN16(VAR31);
    VAR37 = FUN17(VAR31);
    VAR33 = &VAR37->VAR65;
    FUN11(VAR6, VAR4->VAR57, VAR33);
    VAR29 = FUN18(VAR4, VAR33, VAR28);
    if (VAR66[0])
    {
        FUN19(VAR33, VAR67, 0, VAR29[42], 399193, VAR66[0], VAR68);
    }
    if (VAR66[1])
    {
        FUN19(VAR33, VAR69, 0, VAR29[42], 399193, VAR66[1], VAR68);
    }
    VAR31 = FUN12(NULL, "");
    FUN16(VAR31);
    VAR35 = FUN20(VAR31);
    FUN11(VAR33, VAR70, FUN21(VAR35, 0));
    VAR31 = FUN12(NULL, "");
    FUN22(VAR31, "", VAR4->VAR71);
    FUN22(VAR31, "", VAR25[0]);
    FUN16(VAR31);
    VAR35 = FUN20(VAR31);
    for (VAR24 = 0; VAR24 < VAR26; VAR24++)
    {
        FUN23(VAR35, VAR24, VAR29[VAR25[VAR24]]);
    }
    FUN11(VAR33, VAR72, FUN21(VAR35, 0));
    VAR9 = (VAR8 *)FUN24(VAR31, "");
    if (!VAR9)
        FUN25("");
    if (VAR9)
    {
        for (VAR24 = 0; VAR24 < VAR73; VAR24++)
        {
            FUN26(&VAR74[VAR24], VAR9, "", NULL);
        }
    }
    FUN27("", VAR4->VAR75, NULL);
    if (VAR18 < (32 * 1024 * 1024))
    {
        VAR18 = (32 * 1024 * 1024);
    }
    if (VAR4->VAR76)
    {
        qemu_irq VAR77;
        VAR31 = FUN12(NULL, "");
        VAR35 = FUN20(VAR31);
        FUN16(VAR31);
        FUN23(VAR35, 0, VAR29[VAR78]);
        FUN11(VAR33, VAR79, FUN21(VAR35, 0));
        VAR77 = FUN28(VAR80, NULL, 0);
        FUN29(VAR31, 0, VAR77);
    }
    if (VAR4->VAR81)
    {
        VAR31 = FUN12(NULL, VAR82);
        VAR31->VAR83 = VAR82;
        FUN22(VAR31, "", VAR4->VAR84);
        FUN22(VAR31, "", VAR4->VAR85);
        FUN16(VAR31);
        VAR35 = FUN20(VAR31);
        for (VAR24 = 0; VAR24 < VAR4->VAR84; VAR24++)
        {
            int VAR86 = VAR4->VAR87 + VAR24;
            FUN23(VAR35, VAR24, VAR29[VAR86]);
        }
        FUN11(VAR6, VAR4->VAR88, FUN21(VAR35, 0));
    }
    if (VAR2->VAR89)
    {
        VAR13 = VAR18;
        VAR14 = FUN30(VAR2->VAR89, VAR18, VAR63 - VAR18);
        if (VAR14 < 0)
        {
            fprintf(VAR46, "", VAR2->VAR89);
            FUN6(1);
        }
        VAR18 += VAR14;
    }
    if (VAR2->VAR90)
    {
        VAR16 = (VAR18 + VAR91) & ~VAR92;
        VAR17 = FUN30(VAR2->VAR90, VAR16, VAR63 - VAR16);
        if (VAR17 < 0)
        {
            fprintf(VAR46, "", VAR2->VAR90);
            FUN6(1);
        }
        VAR18 = VAR16 + VAR17;
    }
    if (VAR93 == NULL)
    {
        if (VAR2->VAR89)
        {
            VAR93 = VAR2->VAR89;
        }
        else
        {
            VAR93 = "";
        }
    }
    VAR19 = FUN31(VAR94, VAR93);
    VAR21 = FUN32(VAR19, NULL, NULL, &VAR20, &VAR12, NULL, 1, VAR95, 0);
    if (VAR21 < 0)
    {
        VAR14 = FUN33(VAR19, &VAR20, &VAR12, NULL, NULL, NULL);
        if (VAR14 < 0)
        {
            fprintf(VAR46, "", VAR19);
            FUN6(1);
        }
    }
    VAR15 = (VAR12 + VAR21 + VAR96) & ~VAR97;
    VAR23 = FUN34(VAR2, VAR4, VAR15, VAR16, VAR17, VAR13, VAR14);
    if (VAR23 < 0)
    {
        fprintf(VAR46, "");
        FUN6(1);
    }
    assert(VAR23 < VAR98);
    VAR22 = VAR11->VAR61;
    VAR22->VAR99 = VAR20;
    VAR22->VAR15 = VAR15;
    VAR22->VAR23 = VAR23;
    if (FUN35())
    {
        FUN36();
    }
}