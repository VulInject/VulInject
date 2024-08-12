static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3();
    uint8_t VAR9;
    uint64_t VAR10;
    const char *VAR11 = VAR6->VAR11 ? VAR6->VAR11 : "";
    ram_addr_t VAR12, VAR13;
    qemu_irq VAR14[VAR15];
    VAR3 *VAR16 = NULL;
    VAR10 = FUN4(VAR6->VAR17);
    if (VAR10 > VAR18)
    {
        assert(VAR10 <= VAR19);
        VAR12 = VAR18;
        VAR13 = VAR10 - VAR18;
        FUN5(&VAR6->VAR20, NULL, "", VAR6->VAR17, VAR12, VAR13);
        FUN6(FUN3(), VAR21, &VAR6->VAR20);
    }
    else
    {
        assert(VAR10);
        VAR12 = VAR10;
    }
    FUN5(&VAR6->VAR22, NULL, "", VAR6->VAR17, 0, VAR12);
    FUN6(FUN3(), 0, &VAR6->VAR22);
    for (VAR9 = 0; VAR9 < VAR23; VAR9++)
    {
        char *VAR24 = FUN7("", VAR9);
        FUN8(&VAR6->VAR25[VAR9], NULL, VAR24, VAR26, &VAR27);
        FUN9(&VAR6->VAR25[VAR9]);
        FUN6(FUN3(), VAR28 + VAR9 * VAR26, &VAR6->VAR25[VAR9]);
        FUN10(VAR24);
    }
    FUN11(FUN12(&VAR6->VAR29), "", VAR15 + 32);
    FUN11(FUN12(&VAR6->VAR29), "", 2);
    FUN11(FUN12(&VAR6->VAR29), "", VAR30);
    FUN13(FUN14(&VAR6->VAR29), true, "", &VAR16);
    if (VAR16)
    {
        FUN15(VAR4, VAR16);
        return;
    }
    assert(FUN16(VAR31) == VAR32);
    for (VAR9 = 0; VAR9 < VAR32; VAR9++)
    {
        VAR33 *VAR29 = FUN17(&VAR6->VAR29);
        const VAR34 *VAR35 = &VAR31[VAR9];
        VAR7 *VAR36 = FUN18(VAR29, VAR35->VAR37);
        uint32_t VAR38 = VAR35->VAR39;
        int VAR40;
        FUN19(VAR29, VAR35->VAR37, VAR38);
        for (VAR40 = 0; VAR40 < VAR41; VAR40++)
        {
            VAR7 *VAR42 = &VAR6->VAR43[VAR9][VAR40];
            VAR38 += VAR44;
            FUN5(VAR42, FUN14(VAR6), "", VAR36, 0, VAR44);
            FUN6(VAR8, VAR38, VAR42);
        }
    }
    for (VAR9 = 0; VAR9 < VAR30; VAR9++)
    {
        qemu_irq VAR45;
        char *VAR46;
        FUN20(FUN14(&VAR6->VAR47[VAR9]), VAR48, "", &VAR49);
        VAR46 = FUN21(FUN14(&VAR6->VAR47[VAR9]));
        if (strcmp(VAR46, VAR11))
        {
            FUN13(FUN14(&VAR6->VAR47[VAR9]), true, "", &VAR49);
        }
        else
        {
            VAR6->VAR50 = &VAR6->VAR47[VAR9];
        }
        FUN10(VAR46);
        FUN13(FUN14(&VAR6->VAR47[VAR9]), VAR6->VAR51, "", NULL);
        FUN20(FUN14(&VAR6->VAR47[VAR9]), VAR52, "", &VAR49);
        FUN13(FUN14(&VAR6->VAR47[VAR9]), true, "", &VAR16);
        if (VAR16)
        {
            FUN15(VAR4, VAR16);
            return;
        }
        FUN22(FUN17(&VAR6->VAR29), VAR9, FUN23(FUN12(&VAR6->VAR47[VAR9]), VAR53));
        VAR45 = FUN23(FUN12(&VAR6->VAR29), FUN24(VAR9, VAR54));
        FUN25(FUN12(&VAR6->VAR47[VAR9]), 0, VAR45);
        VAR45 = FUN23(FUN12(&VAR6->VAR29), FUN24(VAR9, VAR55));
        FUN25(FUN12(&VAR6->VAR47[VAR9]), 1, VAR45);
    }
    if (VAR6->VAR56)
    {
        FUN26(VAR6, VAR11, &VAR16);
        if (VAR16)
        {
            FUN15(VAR4, VAR16);
            return;
        }
    }
    if (!VAR6->VAR50)
    {
        FUN27(VAR4, "", VAR11);
        return;
    }
    for (VAR9 = 0; VAR9 < VAR15; VAR9++)
    {
        VAR14[VAR9] = FUN23(FUN12(&VAR6->VAR29), VAR9);
    }
    for (VAR9 = 0; VAR9 < VAR57; VAR9++)
    {
        VAR58 *VAR59 = &VAR60[VAR9];
        if (VAR59->VAR61)
        {
            FUN28(VAR59, VAR62);
            FUN29(FUN12(&VAR6->VAR63[VAR9]), VAR59);
        }
        FUN13(FUN14(&VAR6->VAR63[VAR9]), true, "", &VAR16);
        if (VAR16)
        {
            FUN15(VAR4, VAR16);
            return;
        }
        FUN19(FUN17(&VAR6->VAR63[VAR9]), 0, VAR64[VAR9]);
        FUN22(FUN17(&VAR6->VAR63[VAR9]), 0, VAR14[VAR65[VAR9]]);
    }
    for (VAR9 = 0; VAR9 < VAR66; VAR9++)
    {
        FUN13(FUN14(&VAR6->VAR67[VAR9]), true, "", &VAR16);
        if (VAR16)
        {
            FUN15(VAR4, VAR16);
            return;
        }
        FUN19(FUN17(&VAR6->VAR67[VAR9]), 0, VAR68[VAR9]);
        FUN22(FUN17(&VAR6->VAR67[VAR9]), 0, VAR14[VAR69[VAR9]]);
    }
    FUN20(FUN14(&VAR6->VAR70), VAR71, "", &VAR49);
    FUN13(FUN14(&VAR6->VAR70), true, "", &VAR16);
    if (VAR16)
    {
        FUN15(VAR4, VAR16);
        return;
    }
    FUN19(FUN17(&VAR6->VAR70), 0, VAR72);
    FUN22(FUN17(&VAR6->VAR70), 0, VAR14[VAR73]);
    for (VAR9 = 0; VAR9 < VAR74; VAR9++)
    {
        char *VAR75;
        FUN13(FUN14(&VAR6->VAR76[VAR9]), true, "", &VAR16);
        if (VAR16)
        {
            FUN15(VAR4, VAR16);
            return;
        }
        FUN19(FUN17(&VAR6->VAR76[VAR9]), 0, VAR77[VAR9]);
        FUN22(FUN17(&VAR6->VAR76[VAR9]), 0, VAR14[VAR78[VAR9]]);
        VAR75 = FUN7("", VAR9);
        FUN30(FUN14(VAR6), VAR75, FUN14(&VAR6->VAR76[VAR9]), "", &VAR49);
        FUN10(VAR75);
    }
    for (VAR9 = 0; VAR9 < VAR79; VAR9++)
    {
        VAR80 *VAR75;
        FUN13(FUN14(&VAR6->VAR81[VAR9]), true, "", &VAR16);
        FUN19(FUN17(&VAR6->VAR81[VAR9]), 0, VAR82[VAR9]);
        FUN22(FUN17(&VAR6->VAR81[VAR9]), 0, VAR14[VAR83[VAR9]]);
        VAR75 = FUN7("", VAR9);
        FUN30(FUN14(VAR6), VAR75, FUN14(&VAR6->VAR81[VAR9]), "", &VAR49);
        FUN10(VAR75);
    }
}