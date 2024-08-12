VAR1 *FUN1(VAR2 *VAR3, unsigned long VAR4)
{
    int VAR5, VAR6;
    VAR1 *VAR7 = FUN2(VAR1, 1);
    qemu_irq VAR8[VAR9][VAR10];
    unsigned long VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR17 = FUN3(VAR18, "");
    assert(VAR17);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        VAR19 *VAR20 = FUN4(FUN5(VAR17));
        if (FUN6(VAR20, "", NULL))
        {
            FUN7(VAR20, false, "", &VAR21);
        }
        VAR7->VAR22[VAR6] = FUN8(VAR20);
        FUN9(VAR20, VAR23, "", &VAR24);
        FUN7(VAR20, true, "", &VAR21);
    }
    VAR7->VAR25 = FUN10(&VAR7->VAR26);
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        VAR13 = FUN11(NULL, "");
        FUN12(VAR13, "", VAR10);
        FUN13(VAR13);
        for (VAR6 = 0; VAR6 < VAR10; VAR6++)
        {
            VAR8[VAR5][VAR6] = FUN14(VAR13, VAR6);
        }
        VAR15 = FUN15(VAR13);
        FUN16(VAR15, 0, FUN14(FUN17(VAR7->VAR22[VAR5]), VAR27));
    }
    VAR13 = FUN11(NULL, "");
    FUN12(VAR13, "", VAR9);
    FUN13(VAR13);
    VAR15 = FUN15(VAR13);
    FUN18(VAR15, 0, VAR23);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        FUN16(VAR15, VAR6, VAR8[VAR6][0]);
    }
    for (VAR6 = 0; VAR6 < VAR28; VAR6++)
    {
        VAR7->VAR26.VAR29[VAR6] = FUN14(VAR13, VAR6);
    }
    FUN19("", VAR30, NULL);
    VAR13 = FUN11(NULL, "");
    FUN12(VAR13, "", VAR9);
    FUN13(VAR13);
    VAR15 = FUN15(VAR13);
    FUN18(VAR15, 0, VAR31);
    FUN18(VAR15, 1, VAR32);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        FUN16(VAR15, VAR6, VAR8[VAR6][1]);
    }
    for (VAR6 = 0; VAR6 < VAR33; VAR6++)
    {
        VAR7->VAR26.VAR34[VAR6] = FUN14(VAR13, VAR6);
    }
    VAR13 = FUN11(NULL, "");
    FUN13(VAR13);
    VAR15 = FUN15(VAR13);
    for (VAR6 = 0; VAR6 < VAR35; VAR6++)
    {
        FUN16(VAR15, VAR6, VAR7->VAR26.VAR29[VAR6]);
    }
    FUN20(&VAR7->VAR26, VAR13, 0);
    FUN18(VAR15, 0, VAR36);
    VAR13 = FUN11(NULL, "");
    FUN12(VAR13, "", 1);
    FUN13(VAR13);
    VAR15 = FUN15(VAR13);
    for (VAR6 = 0; VAR6 < VAR35; VAR6++)
    {
        FUN16(VAR15, VAR6, VAR7->VAR26.VAR34[VAR6]);
    }
    FUN20(&VAR7->VAR26, VAR13, 1);
    FUN18(VAR15, 0, VAR37);
    FUN21(&VAR7->VAR26);
    FUN22(&VAR7->VAR38, NULL, &VAR39, NULL, "", sizeof(VAR40));
    FUN23(VAR3, VAR41, &VAR7->VAR38);
    FUN24(&VAR7->VAR42, NULL, "", VAR43, &VAR21);
    FUN25(&VAR7->VAR42);
    FUN26(&VAR7->VAR42, true);
    FUN23(VAR3, VAR44, &VAR7->VAR42);
    FUN27(&VAR7->VAR45, NULL, "", &VAR7->VAR42, 0, VAR43);
    FUN26(&VAR7->VAR45, true);
    FUN23(VAR3, VAR46, &VAR7->VAR45);
    FUN24(&VAR7->VAR47, NULL, "", VAR48, &VAR21);
    FUN25(&VAR7->VAR47);
    FUN23(VAR3, VAR49, &VAR7->VAR47);
    VAR11 = VAR4;
    if (VAR11 > VAR50)
    {
        FUN24(&VAR7->VAR51, NULL, "", VAR11 - VAR50, &VAR21);
        FUN25(&VAR7->VAR51);
        FUN23(VAR3, VAR52, &VAR7->VAR51);
        VAR11 = VAR50;
    }
    FUN24(&VAR7->VAR53, NULL, "", VAR11, &VAR21);
    FUN25(&VAR7->VAR53);
    FUN23(VAR3, VAR54, &VAR7->VAR53);
    FUN19("", VAR55, NULL);
    FUN28("", VAR56, VAR7->VAR25[FUN29(22, 0)], VAR7->VAR25[FUN29(22, 1)], VAR7->VAR25[FUN29(22, 2)], VAR7->VAR25[FUN29(22, 3)], VAR7->VAR25[FUN29(22, 4)], NULL);
    FUN28("", VAR57, VAR7->VAR25[FUN29(23, 0)], VAR7->VAR25[FUN29(23, 1)], NULL);
    VAR13 = FUN11(NULL, "");
    FUN13(VAR13);
    VAR15 = FUN15(VAR13);
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        FUN16(VAR15, VAR6, VAR7->VAR25[FUN29(1, 4 + VAR6)]);
    }
    FUN16(VAR15, 4, VAR7->VAR25[FUN29(51, 0)]);
    FUN16(VAR15, 5, VAR7->VAR25[FUN29(35, 3)]);
    FUN18(VAR15, 0, VAR58);
    for (VAR6 = 0; VAR6 < VAR59; VAR6++)
    {
        uint32_t VAR60 = VAR61 + VAR62 * VAR6;
        qemu_irq VAR63;
        if (VAR6 < 8)
        {
            VAR63 = VAR7->VAR25[FUN29(VAR64, VAR6)];
        }
        else
        {
            VAR63 = VAR7->VAR25[FUN29(VAR65, 1)];
        }
        VAR13 = FUN11(NULL, "");
        FUN13(VAR13);
        VAR15 = FUN15(VAR13);
        FUN16(VAR15, 0, VAR63);
        FUN18(VAR15, 0, VAR60);
        VAR7->VAR66[VAR6] = (VAR67 *)FUN30(VAR13, "");
    }
    FUN31(VAR68, VAR69, 0, NULL, VAR7->VAR25[FUN29(VAR70, 0)]);
    FUN31(VAR71, VAR72, 1, NULL, VAR7->VAR25[FUN29(VAR70, 1)]);
    FUN31(VAR73, VAR74, 2, NULL, VAR7->VAR25[FUN29(VAR70, 2)]);
    FUN31(VAR75, VAR76, 3, NULL, VAR7->VAR25[FUN29(VAR70, 3)]);
    FUN28("", VAR77, VAR7->VAR25[FUN29(11, 0)], VAR7->VAR25[FUN29(11, 1)], VAR7->VAR25[FUN29(11, 2)], NULL);
    FUN19(VAR78, VAR79, VAR7->VAR25[FUN29(28, 3)]);
    return VAR7;