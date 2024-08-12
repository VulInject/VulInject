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
    if (!FUN7(VAR24, NULL, "", VAR25, VAR13 ? VAR13->VAR26 : NULL, VAR9, VAR25 / VAR9, 4, 0, 0, 0, 0, VAR14))
    {
        fprintf(VAR23, "");
        FUN6(1);
    }
    FUN8(VAR11->VAR27, VAR28, 0x100);
    FUN9(VAR11->VAR29, NULL, FUN10(VAR11->VAR30, VAR31));
    FUN11(&VAR32);
    FUN11(&VAR33);
    VAR15 = FUN12(VAR11->VAR34[1], "");
    VAR17 = FUN13(VAR11->VAR35[0]);
    FUN14(VAR17, VAR36, 0x55);
    VAR19 = FUN14(VAR17, "", 0x1b);
    VAR11->VAR37->VAR38 = VAR19;
    VAR11->VAR37->VAR39 = VAR40;
    VAR11->VAR37->VAR41 = VAR42;
    FUN15(VAR19, VAR11->VAR37->VAR43, VAR11->VAR37);
    FUN16(VAR11->VAR30, VAR44, FUN17(VAR45, VAR15, 1)[0]);
    VAR20.VAR4 = VAR4;
    VAR20.VAR5 = VAR5;
    VAR20.VAR6 = VAR6;
    VAR20.VAR46 = 0x6dd;
    FUN18(VAR11->VAR47, &VAR20);
}