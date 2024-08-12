static void FUN1(VAR1 *VAR2, VAR3 *VAR4, enum mainstone_model_e VAR5, int VAR6)
{
    uint32_t VAR7 = 256 * 1024;
    hwaddr VAR8[] = {VAR9, VAR10};
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    int VAR18;
    VAR1 *VAR19 = FUN2(VAR1, 1);
    const char *VAR20 = VAR4->VAR20;
    if (!VAR20)
        VAR20 = "";
    VAR12 = FUN3(VAR2, VAR21.VAR22, VAR20);
    FUN4(VAR19, NULL, "", VAR23, &VAR24);
    FUN5(VAR19);
    FUN6(VAR19, true);
    FUN7(VAR2, 0, VAR19);
    VAR18 = 1;
    VAR18 = 0;
    for (VAR17 = 0; VAR17 < 2; VAR17++)
    {
        VAR16 = FUN8(VAR25, 0, VAR17);
        if (!VAR16)
        {
            if (FUN9())
            {
                break;
            }
            fprintf(VAR26, ""
                            "");
            FUN10(1);
        }
        if (!FUN11(VAR8[VAR17], NULL, VAR17 ? "" : "", VAR27, FUN12(VAR16), VAR7, VAR27 / VAR7, 4, 0, 0, 0, 0, VAR18))
        {
            fprintf(VAR26, "");
            FUN10(1);
        }
    }
    VAR14 = FUN13("", VAR28, FUN14(VAR12->VAR29, 0));
    FUN15(VAR12->VAR30, VAR31, 0xe0);
    FUN16(VAR12->VAR32, NULL, FUN14(VAR14, VAR33));
    FUN17(VAR12->VAR34[0], FUN14(VAR14, VAR35), FUN14(VAR14, VAR36));
    FUN17(VAR12->VAR34[1], FUN14(VAR14, VAR37), FUN14(VAR14, VAR38));
    FUN18(&VAR39[0], VAR40, FUN14(VAR14, VAR41));
    VAR21.VAR42 = VAR4->VAR42;
    VAR21.VAR43 = VAR4->VAR43;
    VAR21.VAR44 = VAR4->VAR44;
    VAR21.VAR45 = VAR6;
    FUN19(VAR12->VAR46, &VAR21);
}