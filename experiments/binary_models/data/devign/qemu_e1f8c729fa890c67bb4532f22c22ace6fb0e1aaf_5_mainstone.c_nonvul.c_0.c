static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, enum mainstone_model_e VAR6, int VAR7)
{
    uint32_t VAR8 = 256 * 1024;
    target_phys_addr_t VAR9[] = {VAR10, VAR11};
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    int VAR19;
    if (!VAR5)
        VAR5 = "";
    VAR13 = FUN2(VAR20.VAR1, VAR5);
    FUN3(0, VAR21, FUN4(NULL, "", VAR21) | VAR22);
    VAR19 = 1;
    VAR19 = 0;
    for (VAR18 = 0; VAR18 < 2; VAR18++)
    {
        VAR17 = FUN5(VAR23, 0, VAR18);
        if (!VAR17)
        {
            fprintf(VAR24, ""
                            "");
            FUN6(1);
        }
        if (!FUN7(VAR9[VAR18], FUN4(NULL, VAR18 ? "" : "", VAR25), VAR17->VAR26, VAR8, VAR25 / VAR8, 4, 0, 0, 0, 0, VAR19))
        {
            fprintf(VAR24, "");
            FUN6(1);
        }
    }
    VAR15 = FUN8("", VAR27, FUN9(VAR13->VAR28, VAR29));
    FUN10("", &VAR30);
    FUN11(VAR13->VAR31, VAR30, 0xe0);
    FUN12(VAR13->VAR32, NULL, FUN9(VAR15, VAR33));
    FUN13(&VAR34[0], VAR35, FUN9(VAR15, VAR36));
    VAR20.VAR2 = VAR2;
    VAR20.VAR3 = VAR3;
    VAR20.VAR4 = VAR4;
    VAR20.VAR37 = VAR7;
    FUN14(VAR13->VAR38, &VAR20);
}