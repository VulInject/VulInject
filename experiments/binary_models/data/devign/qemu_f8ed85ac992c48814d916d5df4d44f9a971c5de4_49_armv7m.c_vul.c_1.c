VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5, const char *VAR6, const char *VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR1 *VAR14 = FUN2(VAR1, VAR5);
    int VAR15;
    uint64_t VAR16;
    uint64_t VAR17;
    int VAR18;
    int VAR19;
    VAR2 *VAR20 = FUN2(VAR2, 1);
    if (VAR7 == NULL)
    {
        VAR7 = "";
    }
    VAR9 = FUN3(VAR7);
    if (VAR9 == NULL)
    {
        fprintf(VAR21, "");
        FUN4(1);
    }
    VAR11 = &VAR9->VAR11;
    FUN5();
    VAR13 = FUN6(NULL, "");
    FUN7(VAR13, "", VAR5);
    VAR11->VAR13 = VAR13;
    FUN8(VAR13);
    FUN9(FUN10(VAR13), 0, FUN11(FUN12(VAR9), VAR22));
    for (VAR18 = 0; VAR18 < VAR5; VAR18++)
    {
        VAR14[VAR18] = FUN11(VAR13, VAR18);
    }
    VAR19 = 1;
    VAR19 = 0;
    if (!VAR6 && !FUN13())
    {
        fprintf(VAR21, "");
        FUN4(1);
    }
    if (VAR6)
    {
        VAR15 = FUN14(VAR6, NULL, NULL, &VAR16, &VAR17, NULL, VAR19, VAR23, 1);
        if (VAR15 < 0)
        {
            VAR15 = FUN15(VAR6, 0, VAR4);
            VAR17 = 0;
        }
        if (VAR15 < 0)
        {
            FUN16("", VAR6);
            FUN4(1);
        }
    }
    FUN17(VAR20, NULL, "", 0x1000, &VAR24);
    FUN18(VAR20);
    FUN19(VAR3, 0xfffff000, VAR20);
    FUN20(VAR25, VAR9);
    return VAR14;
}