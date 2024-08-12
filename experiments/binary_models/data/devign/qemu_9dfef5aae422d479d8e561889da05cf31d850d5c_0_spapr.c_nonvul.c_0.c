static void *FUN1(const char *VAR1, target_phys_addr_t VAR2, target_phys_addr_t VAR3, const char *VAR4, const char *VAR5, long VAR6)
{
    void *VAR7;
    VAR8 *VAR9;
    uint64_t VAR10[] = {0, FUN2(VAR11)};
    uint32_t VAR12 = FUN3(VAR2);
    uint32_t VAR13 = FUN3(VAR2 + VAR3);
    uint32_t VAR14[] = {0, FUN3(VAR6)};
    char VAR15[] = ""
                           "";
    uint32_t VAR16[] = {0, FUN3(VAR17)};
    int VAR18;
    char *VAR19;
    do
    {
        int VAR20 = (VAR21);
        if (VAR20 < 0)
        { fprintf ( VAR22 , "" , FUN4 ( 1 ) ;
        }
    } while (0) VAR7 = FUN5(VAR23);
    FUN6((FUN7(VAR7, VAR23)));
    FUN6((FUN8(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", 0x2)));
    FUN6((FUN11(VAR7, "", 0x2)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN10(VAR7, "", VAR5)));
    FUN6((FUN12(VAR7, "", &VAR12, sizeof(VAR12))));
    FUN6((FUN12(VAR7, "", &VAR13, sizeof(VAR13))));
    FUN6((FUN10(VAR7, "", VAR4)));
    FUN6((FUN13(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN12(VAR7, "", VAR10, sizeof(VAR10))));
    FUN6((FUN13(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN11(VAR7, "", 0x1)));
    FUN6((FUN11(VAR7, "", 0x0)));
    VAR19 = FUN14(VAR1);
    for (VAR18 = 0; VAR18 < strlen(VAR19); VAR18++)
    {
        VAR19[VAR18] = FUN15(VAR19[VAR18]);
    }
    for (VAR9 = VAR24; VAR9 != NULL; VAR9 = VAR9->VAR25)
    {
        int VAR26 = VAR9->VAR27;
        uint32_t VAR28[] = {FUN3(VAR26), 0};
        char *VAR29;
        uint32_t VAR30[] = {FUN3(28), FUN3(40), 0xffffffff, 0xffffffff};
        uint32_t VAR31 = FUN16() ? FUN17() : VAR32;
        uint32_t VAR33 = FUN16() ? FUN18() : 1000000000;
        if (asprintf(&VAR29, "", VAR19, VAR26) < 0)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        FUN6((FUN9(VAR7, VAR29)));
        free(VAR29);
        FUN6((FUN11(VAR7, "", VAR26)));
        FUN6((FUN10(VAR7, "", "")));
        FUN6((FUN11(VAR7, "", VAR9->VAR34[VAR35])));
        FUN6((FUN11(VAR7, "", VAR9->VAR36)));
        FUN6((FUN11(VAR7, "", VAR9->VAR37)));
        FUN6((FUN11(VAR7, "", VAR31)));
        FUN6((FUN11(VAR7, "", VAR33)));
        FUN6((FUN11(VAR7, "", VAR9->VAR38)));
        FUN6((FUN12(VAR7, "", VAR14, sizeof(VAR14))));
        FUN6((FUN10(VAR7, "", "")));
        FUN6((FUN12(VAR7, "", NULL, 0)));
        FUN6((FUN11(VAR7, "", VAR26)));
        FUN6((FUN12(VAR7, "", VAR28, sizeof(VAR28))));
        if (VAR9->VAR39 & VAR40)
        {
            FUN6((FUN12(VAR7, "", VAR30, sizeof(VAR30))));
        }
        FUN6((FUN13(VAR7)));
    }
    FUN19(VAR19);
    FUN6((FUN13(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN12(VAR7, "", VAR15, sizeof(VAR15))));
    FUN6((FUN13(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN12(VAR7, "", NULL, 0)));
    FUN6((FUN12(VAR7, "", VAR16, sizeof(VAR16))));
    FUN6((FUN11(VAR7, "", 2)));
    FUN6((FUN11(VAR7, "", VAR41)));
    FUN6((FUN11(VAR7, "", VAR41)));
    FUN6((FUN13(VAR7)));
    FUN6((FUN9(VAR7, "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN10(VAR7, "", "")));
    FUN6((FUN11(VAR7, "", 0x1)));
    FUN6((FUN11(VAR7, "", 0x0)));
    FUN6((FUN11(VAR7, "", 0x2)));
    FUN6((FUN12(VAR7, "", NULL, 0)));
    FUN6((FUN13(VAR7)));
    FUN6((FUN13(VAR7)));
    FUN6((FUN20(VAR7)));
    return VAR7;
}