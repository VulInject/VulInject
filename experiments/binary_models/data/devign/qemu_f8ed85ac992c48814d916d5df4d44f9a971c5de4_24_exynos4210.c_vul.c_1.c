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
        VAR21 *VAR22 = NULL;
        if (FUN6(VAR20, "", NULL))
        {
            FUN7(VAR20, false, "", &VAR22);
            if (VAR22)
            {
                FUN8(VAR22);
                FUN9(1);
            }
        }
        VAR7->VAR23[VAR6] = FUN10(VAR20);
        FUN11(VAR20, VAR24, "", &VAR25);
        FUN7(VAR20, true, "", &VAR22);
        if (VAR22)
        {
            FUN8(VAR22);
            FUN9(1);
        }
    }
    VAR7->VAR26 = FUN12(&VAR7->VAR27);
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        VAR13 = FUN13(NULL, "");
        FUN14(VAR13, "", VAR10);
        FUN15(VAR13);
        for (VAR6 = 0; VAR6 < VAR10; VAR6++)
        {
            VAR8[VAR5][VAR6] = FUN16(VAR13, VAR6);
        }
        VAR15 = FUN17(VAR13);
        FUN18(VAR15, 0, FUN16(FUN19(VAR7->VAR23[VAR5]), VAR28));
    }
    VAR13 = FUN13(NULL, "");
    FUN14(VAR13, "", VAR9);
    FUN15(VAR13);
    VAR15 = FUN17(VAR13);
    FUN20(VAR15, 0, VAR24);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        FUN18(VAR15, VAR6, VAR8[VAR6][0]);
    }
    for (VAR6 = 0; VAR6 < VAR29; VAR6++)
    {
        VAR7->VAR27.VAR30[VAR6] = FUN16(VAR13, VAR6);
    }
    FUN21("", VAR31, NULL);
    VAR13 = FUN13(NULL, "");
    FUN14(VAR13, "", VAR9);
    FUN15(VAR13);
    VAR15 = FUN17(VAR13);
    FUN20(VAR15, 0, VAR32);
    FUN20(VAR15, 1, VAR33);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        FUN18(VAR15, VAR6, VAR8[VAR6][1]);
    }
    for (VAR6 = 0; VAR6 < VAR34; VAR6++)
    {
        VAR7->VAR27.VAR35[VAR6] = FUN16(VAR13, VAR6);
    }
    VAR13 = FUN13(NULL, "");
    FUN15(VAR13);
    VAR15 = FUN17(VAR13);
    for (VAR6 = 0; VAR6 < VAR36; VAR6++)
    {
        FUN18(VAR15, VAR6, VAR7->VAR27.VAR30[VAR6]);
    }
    FUN22(&VAR7->VAR27, VAR13, 0);
    FUN20(VAR15, 0, VAR37);
    VAR13 = FUN13(NULL, "");
    FUN14(VAR13, "", 1);
    FUN15(VAR13);
    VAR15 = FUN17(VAR13);
    for (VAR6 = 0; VAR6 < VAR36; VAR6++)
    {
        FUN18(VAR15, VAR6, VAR7->VAR27.VAR35[VAR6]);
    }
    FUN22(&VAR7->VAR27, VAR13, 1);
    FUN20(VAR15, 0, VAR38);
    FUN23(&VAR7->VAR27);
    FUN24(&VAR7->VAR39, NULL, &VAR40, NULL, "", sizeof(VAR41));
    FUN25(VAR3, VAR42, &VAR7->VAR39);
    FUN26(&VAR7->VAR43, NULL, "", VAR44, &VAR25);
    FUN27(&VAR7->VAR43);
    FUN28(&VAR7->VAR43, true);
    FUN25(VAR3, VAR45, &VAR7->VAR43);
    FUN29(&VAR7->VAR46, NULL, "", &VAR7->VAR43, 0, VAR44);
    FUN28(&VAR7->VAR46, true);
    FUN25(VAR3, VAR47, &VAR7->VAR46);
    FUN26(&VAR7->VAR48, NULL, "", VAR49, &VAR25);
    FUN27(&VAR7->VAR48);
    FUN25(VAR3, VAR50, &VAR7->VAR48);
    VAR11 = VAR4;
    if (VAR11 > VAR51)
    {
        FUN26(&VAR7->VAR52, NULL, "", VAR11 - VAR51, &VAR25);
        FUN27(&VAR7->VAR52);
        FUN25(VAR3, VAR53, &VAR7->VAR52);
        VAR11 = VAR51;
    }
    FUN26(&VAR7->VAR54, NULL, "", VAR11, &VAR25);
    FUN27(&VAR7->VAR54);
    FUN25(VAR3, VAR55, &VAR7->VAR54);
    FUN21("", VAR56, NULL);
    FUN30("", VAR57, VAR7->VAR26[FUN31(22, 0)], VAR7->VAR26[FUN31(22, 1)], VAR7->VAR26[FUN31(22, 2)], VAR7->VAR26[FUN31(22, 3)], VAR7->VAR26[FUN31(22, 4)], NULL);
    FUN30("", VAR58, VAR7->VAR26[FUN31(23, 0)], VAR7->VAR26[FUN31(23, 1)], NULL);
    VAR13 = FUN13(NULL, "");
    FUN15(VAR13);
    VAR15 = FUN17(VAR13);
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        FUN18(VAR15, VAR6, VAR7->VAR26[FUN31(1, 4 + VAR6)]);
    }
    FUN18(VAR15, 4, VAR7->VAR26[FUN31(51, 0)]);
    FUN18(VAR15, 5, VAR7->VAR26[FUN31(35, 3)]);
    FUN20(VAR15, 0, VAR59);
    for (VAR6 = 0; VAR6 < VAR60; VAR6++)
    {
        uint32_t VAR61 = VAR62 + VAR63 * VAR6;
        qemu_irq VAR64;
        if (VAR6 < 8)
        {
            VAR64 = VAR7->VAR26[FUN31(VAR65, VAR6)];
        }
        else
        {
            VAR64 = VAR7->VAR26[FUN31(VAR66, 1)];
        }
        VAR13 = FUN13(NULL, "");
        FUN15(VAR13);
        VAR15 = FUN17(VAR13);
        FUN18(VAR15, 0, VAR64);
        FUN20(VAR15, 0, VAR61);
        VAR7->VAR67[VAR6] = (VAR68 *)FUN32(VAR13, "");
    }
    FUN33(VAR69, VAR70, 0, NULL, VAR7->VAR26[FUN31(VAR71, 0)]);
    FUN33(VAR72, VAR73, 1, NULL, VAR7->VAR26[FUN31(VAR71, 1)]);
    FUN33(VAR74, VAR75, 2, NULL, VAR7->VAR26[FUN31(VAR71, 2)]);
    FUN33(VAR76, VAR77, 3, NULL, VAR7->VAR26[FUN31(VAR71, 3)]);
    FUN30("", VAR78, VAR7->VAR26[FUN31(11, 0)], VAR7->VAR26[FUN31(11, 1)], VAR7->VAR26[FUN31(11, 2)], NULL);
    FUN21(VAR79, VAR80, VAR7->VAR26[FUN31(28, 3)]);
    return VAR7;
}