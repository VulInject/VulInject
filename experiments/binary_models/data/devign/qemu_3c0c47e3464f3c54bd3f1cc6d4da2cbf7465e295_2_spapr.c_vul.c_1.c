static void FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4, hwaddr VAR5)
{
    VAR6 *VAR7 = FUN2(FUN3());
    VAR8 *VAR9 = FUN4(VAR7);
    const char *VAR10 = VAR7->VAR11;
    int VAR12, VAR13;
    size_t VAR14 = 0;
    char *VAR15;
    void *VAR16;
    VAR17 *VAR18;
    VAR16 = FUN5(VAR19);
    FUN6((FUN7(VAR2->VAR20, VAR16, VAR19)));
    VAR12 = FUN8(VAR2, VAR16);
    if (VAR12 < 0)
    {
        fprintf(VAR21, "");
        FUN9(1);
    }
    VAR12 = FUN10(VAR2->VAR22, VAR16);
    if (VAR12 < 0)
    {
        fprintf(VAR21, "");
        FUN9(1);
    }
    if (FUN11("", VAR23, NULL))
    {
        VAR12 = FUN12(VAR16);
        if (VAR12 < 0)
        {
            fprintf(VAR21, "");
            FUN9(1);
        }
    }
    FUN13(VAR18, &VAR2->VAR24, VAR25)
    {
        VAR12 = FUN14(VAR18, VAR26, VAR16);
        if (VAR12 < 0)
        {
            FUN15("");
            FUN9(1);
        }
    }
    VAR12 = FUN16(VAR16, VAR4, VAR5);
    if (VAR12 < 0)
    {
        fprintf(VAR21, "");
    }
    FUN17(VAR16, VAR2);
    VAR15 = FUN18(&VAR14, true);
    if (VAR14 && VAR15)
    {
        int VAR27 = FUN19(VAR16, "");
        if (VAR27 < 0)
        {
            FUN9(1);
        }
        for (VAR13 = 0; VAR13 < VAR14; VAR13++)
        {
            if (VAR15[VAR13] == '')
            {
                VAR15[VAR13] = '';
            }
        }
        VAR12 = FUN20(VAR16, VAR27, "", VAR15);
    }
    if (VAR10 && strlen(VAR10))
    {
        int VAR27 = FUN19(VAR16, "");
        if (VAR27 < 0)
        {
            FUN9(1);
        }
        FUN20(VAR16, VAR27, "", VAR10);
    }
    if (!VAR2->VAR28)
    {
        FUN21(VAR16, VAR2->VAR22);
    }
    if (VAR9->VAR29)
    {
        FUN6(FUN22(VAR16, 0, NULL, VAR30));
    }
    if (VAR9->VAR31)
    {
        int VAR27 = FUN19(VAR16, "");
        VAR12 = FUN22(VAR16, VAR27, NULL, VAR32);
        if (VAR12 < 0)
        {
            FUN15("");
            FUN9(1);
        }
    }
    FUN6((FUN23(VAR16)));
    if (FUN24(VAR16) > VAR19)
    {
        FUN15("", FUN24(VAR16), VAR19);
        FUN9(1);
    }
    FUN25(VAR16, FUN24(VAR16));
    FUN26(VAR3, VAR16, FUN24(VAR16));
    FUN27(VAR15);
    FUN27(VAR16);
}