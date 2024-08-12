static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3();
    uint8_t VAR9;
    const char *VAR10 = VAR6->VAR10 ? VAR6->VAR10 : "";
    qemu_irq VAR11[VAR12];
    VAR3 *VAR13 = NULL;
    for (VAR9 = 0; VAR9 < VAR14; VAR9++)
    {
        char *VAR15 = FUN4("", VAR9);
        FUN5(&VAR6->VAR16[VAR9], NULL, VAR15, VAR17, &VAR18);
        FUN6(&VAR6->VAR16[VAR9]);
        FUN7(FUN3(), VAR19 + VAR9 * VAR17, &VAR6->VAR16[VAR9]);
        FUN8(VAR15);
    }
    FUN9(FUN10(&VAR6->VAR20), "", VAR12 + 32);
    FUN9(FUN10(&VAR6->VAR20), "", 2);
    FUN9(FUN10(&VAR6->VAR20), "", VAR21);
    FUN11(FUN12(&VAR6->VAR20), true, "", &VAR13);
    if (VAR13)
    {
        FUN13(VAR4, VAR13);
        return;
    }
    assert(FUN14(VAR22) == VAR23);
    for (VAR9 = 0; VAR9 < VAR23; VAR9++)
    {
        VAR24 *VAR20 = FUN15(&VAR6->VAR20);
        const VAR25 *VAR26 = &VAR22[VAR9];
        VAR7 *VAR27 = FUN16(VAR20, VAR26->VAR28);
        uint32_t VAR29 = VAR26->VAR30;
        int VAR31;
        FUN17(VAR20, VAR26->VAR28, VAR29);
        for (VAR31 = 0; VAR31 < VAR32; VAR31++)
        {
            VAR7 *VAR33 = &VAR6->VAR34[VAR9][VAR31];
            VAR29 += VAR35;
            FUN18(VAR33, FUN12(VAR6), "", VAR27, 0, VAR35);
            FUN7(VAR8, VAR29, VAR33);
        }
    }
    for (VAR9 = 0; VAR9 < VAR21; VAR9++)
    {
        qemu_irq VAR36;
        char *VAR37;
        FUN19(FUN12(&VAR6->VAR38[VAR9]), VAR39, "", &VAR18);
        VAR37 = FUN20(FUN12(&VAR6->VAR38[VAR9]));
        if (strcmp(VAR37, VAR10))
        {
            FUN11(FUN12(&VAR6->VAR38[VAR9]), true, "", &VAR18);
        }
        else
        {
            VAR6->VAR40 = &VAR6->VAR38[VAR9];
        }
        FUN8(VAR37);
        FUN19(FUN12(&VAR6->VAR38[VAR9]), VAR41, "", &VAR18);
        FUN11(FUN12(&VAR6->VAR38[VAR9]), true, "", &VAR13);
        if (VAR13)
        {
            FUN13(VAR4, VAR13);
            return;
        }
        FUN21(FUN15(&VAR6->VAR20), VAR9, FUN22(FUN10(&VAR6->VAR38[VAR9]), VAR42));
        VAR36 = FUN22(FUN10(&VAR6->VAR20), FUN23(VAR9, VAR43));
        FUN24(FUN10(&VAR6->VAR38[VAR9]), 0, VAR36);
        VAR36 = FUN22(FUN10(&VAR6->VAR20), FUN23(VAR9, VAR44));
        FUN24(FUN10(&VAR6->VAR38[VAR9]), 1, VAR36);
    }
    for (VAR9 = 0; VAR9 < VAR45; VAR9++)
    {
        char *VAR37;
        VAR37 = FUN20(FUN12(&VAR6->VAR46[VAR9]));
        if (strcmp(VAR37, VAR10))
        {
            FUN11(FUN12(&VAR6->VAR46[VAR9]), true, "", &VAR18);
        }
        else
        {
            VAR6->VAR40 = &VAR6->VAR46[VAR9];
        }
        FUN8(VAR37);
        FUN11(FUN12(&VAR6->VAR46[VAR9]), true, "", &VAR18);
        FUN11(FUN12(&VAR6->VAR46[VAR9]), true, "", &VAR13);
        if (VAR13)
        {
            FUN13(VAR4, VAR13);
            return;
        }
    }
    if (!VAR6->VAR40)
    {
        FUN25(VAR4, "", VAR10);
        return;
    }
    for (VAR9 = 0; VAR9 < VAR12; VAR9++)
    {
        VAR11[VAR9] = FUN22(FUN10(&VAR6->VAR20), VAR9);
    }
    for (VAR9 = 0; VAR9 < VAR47; VAR9++)
    {
        VAR48 *VAR49 = &VAR50[VAR9];
        if (VAR49->VAR51)
        {
            FUN26(VAR49, VAR52);
            FUN27(FUN10(&VAR6->VAR53[VAR9]), VAR49);
        }
        FUN11(FUN12(&VAR6->VAR53[VAR9]), true, "", &VAR13);
        if (VAR13)
        {
            FUN13(VAR4, VAR13);
            return;
        }
        FUN17(FUN15(&VAR6->VAR53[VAR9]), 0, VAR54[VAR9]);
        FUN21(FUN15(&VAR6->VAR53[VAR9]), 0, VAR11[VAR55[VAR9]]);
    }
    for (VAR9 = 0; VAR9 < VAR56; VAR9++)
    {
        FUN11(FUN12(&VAR6->VAR57[VAR9]), true, "", &VAR13);
        if (VAR13)
        {
            FUN13(VAR4, VAR13);
            return;
        }
        FUN17(FUN15(&VAR6->VAR57[VAR9]), 0, VAR58[VAR9]);
        FUN21(FUN15(&VAR6->VAR57[VAR9]), 0, VAR11[VAR59[VAR9]]);
    }
    FUN19(FUN12(&VAR6->VAR60), VAR61, "", &VAR18);
    FUN11(FUN12(&VAR6->VAR60), true, "", &VAR13);
    if (VAR13)
    {
        FUN13(VAR4, VAR13);
        return;
    }
    FUN17(FUN15(&VAR6->VAR60), 0, VAR62);
    FUN21(FUN15(&VAR6->VAR60), 0, VAR11[VAR63]);
}