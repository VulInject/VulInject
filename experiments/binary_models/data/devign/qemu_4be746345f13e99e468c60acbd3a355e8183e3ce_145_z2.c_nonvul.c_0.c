static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = FUN2();
    uint32_t VAR9 = 0x10000;
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    void *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    if (!VAR3)
    {
        VAR3 = "";
    }
    VAR11 = FUN3(VAR8, VAR20.VAR21, VAR3);
    VAR14 = 1;
    VAR14 = 0;
    VAR13 = FUN4(VAR22, 0, 0);
    if (!VAR13 && !FUN5())
    {
        fprintf(VAR23, ""
                        "");
        FUN6(1);
    }
    if (!FUN7(VAR24, NULL, "", VAR25, VAR13 ? FUN8(VAR13) : NULL, VAR9, VAR25 / VAR9, 4, 0, 0, 0, 0, VAR14))
    {
        fprintf(VAR23, "");
        FUN6(1);
    }
    FUN9(VAR11->VAR26, VAR27, 0x100);
    FUN10(VAR11->VAR28, NULL, FUN11(VAR11->VAR29, VAR30));
    FUN12(&VAR31);
    FUN12(&VAR32);
    VAR15 = FUN13(VAR11->VAR33[1], "");
    VAR17 = FUN14(VAR11->VAR34[0]);
    FUN15(VAR17, VAR35, 0x55);
    VAR19 = FUN15(VAR17, "", 0x1b);
    VAR11->VAR36->VAR37 = VAR19;
    VAR11->VAR36->VAR38 = VAR39;
    VAR11->VAR36->VAR40 = VAR41;
    FUN16(VAR19, VAR11->VAR36->VAR42, VAR11->VAR36);
    FUN17(VAR11->VAR29, VAR43, FUN18(VAR44, VAR15, 0));
    VAR20.VAR4 = VAR4;
    VAR20.VAR5 = VAR5;
    VAR20.VAR6 = VAR6;
    VAR20.VAR45 = 0x6dd;
    FUN19(VAR11->VAR46, &VAR20);
}