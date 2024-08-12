void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR6 *VAR7[VAR8];
    VAR9 *VAR10;
    qemu_irq VAR11 = NULL;
    VAR1 *VAR12;
    VAR3 *VAR13, *VAR14, *VAR15;
    VAR1 *VAR16;
    FUN2(0x80, 1, 1, VAR17, NULL);
    FUN2(0xf0, 1, 1, VAR18, NULL);
    if (!VAR19)
    {
        VAR20 *VAR21 = FUN3("", VAR22, NULL);
        if (VAR21)
        {
            for (VAR5 = 0; VAR5 < 24; VAR5++)
            {
                FUN4(FUN5(VAR21), VAR5, VAR2[VAR5]);
            }
            VAR11 = FUN6(VAR21, 0);
        }
    }
    *VAR4 = FUN7(2000, VAR11);
    FUN8(VAR23, *VAR4);
    VAR10 = FUN9(0x40, FUN10(0));
    FUN11(VAR10);
    for (VAR5 = 0; VAR5 < VAR24; VAR5++)
    {
        if (VAR25[VAR5])
        {
            FUN12(VAR5, VAR25[VAR5]);
        }
    }
    for (VAR5 = 0; VAR5 < VAR26; VAR5++)
    {
        if (VAR27[VAR5])
        {
            FUN13(VAR5, VAR27[VAR5]);
        }
    }
    VAR12 = FUN14(VAR28, VAR29, 2);
    VAR13 = FUN15("");
    FUN16(VAR13, &VAR12[0]);
    FUN17();
    VAR15 = FUN18("");
    if (VAR15)
    {
        FUN19(&VAR15->VAR30, "", VAR13);
    }
    VAR14 = FUN15("");
    FUN20(VAR14, &VAR12[1]);
    VAR16 = FUN14(VAR31, NULL, 1);
    FUN21(0, VAR16);
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        VAR7[VAR5] = FUN22(VAR32, 0, VAR5);
    }
    FUN23(VAR7);
}