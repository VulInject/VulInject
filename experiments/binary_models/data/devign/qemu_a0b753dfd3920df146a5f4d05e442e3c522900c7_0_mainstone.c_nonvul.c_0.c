static void FUN1(ram_addr_t VAR1, int VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, enum mainstone_model_e VAR7, int VAR8)
{
    uint32_t VAR9 = 256 * 1024;
    target_phys_addr_t VAR10[] = {VAR11, VAR12};
    struct VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17, VAR18;
    if (!VAR6)
        VAR6 = "";
    VAR14 = FUN2(VAR19.VAR1, VAR6);
    FUN3(0, VAR20, FUN4(VAR20) | VAR21);
    VAR14->VAR22->VAR23[15] = VAR19.VAR24;
    for (VAR17 = 0; VAR17 < 2; VAR17++)
    {
        VAR18 = FUN5(VAR25, 0, VAR17);
        if (VAR18 == -1)
        {
            fprintf(VAR26, ""
                            "");
            FUN6(1);
        }
        if (!FUN7(VAR10[VAR17], FUN4(VAR27), VAR28[VAR18].VAR29, VAR9, VAR27 / VAR9, 4, 0, 0, 0, 0))
        {
            fprintf(VAR26, "");
            FUN6(1);
        }
    }
    VAR16 = FUN8(VAR14, VAR30, VAR31);
    FUN9("", &VAR32);
    FUN10(VAR14->VAR33, VAR32, 0xe0);
    FUN11(VAR14->VAR34, NULL, VAR16[VAR35]);
    FUN12(&VAR36[0], VAR37, VAR16[VAR38]);
    VAR19.VAR3 = VAR3;
    VAR19.VAR4 = VAR4;
    VAR19.VAR5 = VAR5;
    VAR19.VAR39 = VAR8;
    FUN13(VAR14->VAR22, &VAR19);
}