void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    VAR6 *VAR7[VAR8];
    qemu_irq VAR9 = NULL;
    VAR1 *VAR10;
    VAR3 *VAR11, *VAR12, *VAR13, *VAR14;
    VAR1 *VAR15;
    FUN2(0x80, 1, 1, VAR16, NULL);
    FUN2(0xf0, 1, 1, VAR17, NULL);
    if (!VAR18)
    {
        VAR19 *VAR20 = FUN3("", VAR21, NULL);
        if (VAR20)
        {
            for (VAR5 = 0; VAR5 < 24; VAR5++)
            {
                FUN4(FUN5(VAR20), VAR5, VAR2[VAR5]);
            }
            VAR9 = FUN6(VAR20, 0);
        }
    }
    *VAR4 = FUN7(2000, VAR9);
    FUN8(VAR22, *VAR4);
    VAR14 = FUN9(0x40, 0);
    FUN10(VAR14);
    for (VAR5 = 0; VAR5 < VAR23; VAR5++)
    {
        if (VAR24[VAR5])
        {
            FUN11(VAR5, VAR24[VAR5]);
        }
    }
    for (VAR5 = 0; VAR5 < VAR25; VAR5++)
    {
        if (VAR26[VAR5])
        {
            FUN12(VAR5, VAR26[VAR5]);
        }
    }
    VAR10 = FUN13(VAR27, VAR28, 2);
    VAR11 = FUN14("");
    FUN15(VAR11, &VAR10[0]);
    FUN16();
    VAR13 = FUN17("");
    if (VAR13)
    {
        FUN18(&VAR13->VAR29, "", VAR11);
    }
    VAR12 = FUN14("");
    FUN19(VAR12, &VAR10[1]);
    VAR15 = FUN13(VAR30, NULL, 1);
    FUN20(0, VAR15);
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        VAR7[VAR5] = FUN21(VAR31, 0, VAR5);
    }
    FUN22(VAR7);
}