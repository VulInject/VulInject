static void FUN1(VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, enum mainstone_model_e VAR8, int VAR9)
{
    uint32_t VAR10 = 256 * 1024;
    hwaddr VAR11[] = {VAR12, VAR13};
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20;
    int VAR21;
    VAR1 *VAR22 = FUN2(VAR1, 1);
    if (!VAR7)
        VAR7 = "";
    VAR15 = FUN3(VAR2, VAR23.VAR3, VAR7);
    FUN4(VAR22, "", VAR24);
    FUN5(VAR22);
    FUN6(VAR22, true);
    FUN7(VAR2, 0, VAR22);
    VAR21 = 1;
    VAR21 = 0;
    for (VAR20 = 0; VAR20 < 2; VAR20++)
    {
        VAR19 = FUN8(VAR25, 0, VAR20);
        if (!VAR19)
        {
            fprintf(VAR26, ""
                            "");
            FUN9(1);
        }
        if (!FUN10(VAR11[VAR20], NULL, VAR20 ? "" : "", VAR27, VAR19->VAR28, VAR10, VAR27 / VAR10, 4, 0, 0, 0, 0, VAR21))
        {
            fprintf(VAR26, "");
            FUN9(1);
        }
    }
    VAR17 = FUN11("", VAR29, FUN12(VAR15->VAR30, 0));
    FUN13("", &VAR31);
    FUN14(VAR15->VAR32, VAR31, 0xe0);
    FUN15(VAR15->VAR33, NULL, FUN12(VAR17, VAR34));
    FUN16(VAR15->VAR35[0], FUN12(VAR17, VAR36), FUN12(VAR17, VAR37));
    FUN16(VAR15->VAR35[1], FUN12(VAR17, VAR38), FUN12(VAR17, VAR39));
    FUN17(&VAR40[0], VAR41, FUN12(VAR17, VAR42));
    VAR23.VAR4 = VAR4;
    VAR23.VAR5 = VAR5;
    VAR23.VAR6 = VAR6;
    VAR23.VAR43 = VAR9;
    FUN18(VAR15->VAR44, &VAR23);
}