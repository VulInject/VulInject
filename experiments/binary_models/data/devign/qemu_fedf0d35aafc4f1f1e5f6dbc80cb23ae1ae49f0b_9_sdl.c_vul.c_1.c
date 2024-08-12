void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    uint8_t VAR6 = 0;
    const VAR7 *VAR8;
    char *VAR9;
    if (!VAR10)
        VAR10 = "";
    if (VAR10)
    {
        VAR11 = FUN2(VAR12, VAR10);
        if (!VAR11)
            FUN3(1);
    }
    if (VAR4)
        VAR13 = 1;
    if (!VAR3)
    {
        setenv("", "", 0);
    }
    setenv("", "", 0);
    setenv("", "", 1);
    VAR5 = VAR14 | VAR15;
    if (FUN4(VAR5))
    {
        fprintf(VAR16, "", FUN5());
        FUN3(1);
    }
    VAR8 = FUN6();
    VAR17 = *(VAR8->VAR18);
    VAR9 = FUN7(VAR19, "");
    if (VAR9)
    {
        VAR20 *VAR21 = FUN8(VAR9);
        if (VAR21)
        {
            uint32_t VAR22 = FUN9(VAR21->VAR23, 255, 255, 255);
            FUN10(VAR21, VAR24, VAR22);
            FUN11(VAR21, NULL);
        }
        FUN12(VAR9);
    }
    if (VAR3)
    {
        VAR25 = 1;
        FUN13();
    }
    VAR26 = FUN14(sizeof(VAR27));
    VAR26->VAR28 = &VAR29;
    FUN15(VAR26);
    VAR30.VAR31 = VAR32;
    FUN16(&VAR30);
    FUN17();
    FUN18(250, 50);
    VAR33 = 0;
    VAR34 = FUN19(&VAR6, &VAR6, 8, 1, 0, 0);
    VAR35 = FUN20();
    FUN21(VAR36);
}