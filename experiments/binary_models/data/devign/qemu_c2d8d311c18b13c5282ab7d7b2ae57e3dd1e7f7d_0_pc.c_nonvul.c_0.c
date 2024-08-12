void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR5 **VAR7, bool VAR8)
{
    int VAR9;
    VAR10 *VAR11[VAR12];
    VAR13 *VAR14 = NULL;
    int VAR15 = 0;
    qemu_irq VAR16 = NULL;
    qemu_irq VAR17 = NULL;
    VAR3 *VAR18;
    VAR5 *VAR19, *VAR20, *VAR21, *VAR22 = NULL;
    VAR3 *VAR23;
    FUN2(0x80, 1, 1, VAR24, NULL);
    FUN2(0xf0, 1, 1, VAR25, NULL);
    if (!VAR26 && (!FUN3() || FUN4()))
    {
        VAR14 = FUN5("", VAR27, NULL);
        if (VAR14)
        {
            for (VAR9 = 0; VAR9 < VAR28; VAR9++)
            {
                FUN6(FUN7(VAR14), VAR9, VAR4[VAR9]);
            }
            VAR15 = -1;
            VAR16 = FUN8(VAR14, VAR29);
            VAR17 = FUN8(VAR14, VAR30);
        }
    }
    *VAR6 = FUN9(VAR2, 2000, VAR17);
    FUN10(VAR31, *VAR6);
    if (!FUN11())
    {
        if (FUN3())
        {
            VAR22 = FUN12(VAR2, 0x40);
        }
        else
        {
            VAR22 = FUN13(VAR2, 0x40, VAR15, VAR16);
        }
        if (VAR14)
        {
            FUN14(VAR14, 0, FUN8(&VAR22->VAR32, 0));
        }
        FUN15(VAR2, VAR22);
    }
    for (VAR9 = 0; VAR9 < VAR33; VAR9++)
    {
        if (VAR34[VAR9])
        {
            FUN16(VAR2, VAR9, VAR34[VAR9]);
        }
    }
    for (VAR9 = 0; VAR9 < VAR35; VAR9++)
    {
        if (VAR36[VAR9])
        {
            FUN17(VAR2, VAR9, VAR36[VAR9]);
        }
    }
    VAR18 = FUN18(VAR37, VAR38, 2);
    VAR19 = FUN19(VAR2, "");
    FUN20(VAR19, &VAR18[0]);
    if (!VAR8)
    {
        FUN21(VAR2);
        VAR21 = FUN22(VAR2, "");
    }
    else
    {
        VAR21 = NULL;
    }
    if (VAR21)
    {
        FUN23(&VAR21->VAR32, "", VAR19);
        FUN24(&VAR21->VAR32);
    }
    VAR20 = FUN19(VAR2, "");
    FUN25(VAR20, &VAR18[1]);
    VAR23 = FUN18(VAR39, NULL, 1);
    FUN26(0, VAR23);
    for (VAR9 = 0; VAR9 < VAR12; VAR9++)
    {
        VAR11[VAR9] = FUN27(VAR40, 0, VAR9);
    }
    *VAR7 = FUN28(VAR2, VAR11);
}