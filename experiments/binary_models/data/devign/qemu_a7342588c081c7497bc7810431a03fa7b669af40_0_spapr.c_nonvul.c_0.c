static void *FUN1(const char *VAR1, target_phys_addr_t VAR2, target_phys_addr_t VAR3, target_phys_addr_t VAR4, const char *VAR5, const char *VAR6, long VAR7)
{
    void *VAR8;
    VAR9 *VAR10;
    uint64_t VAR11[] = {0, FUN2(VAR2)};
    uint64_t VAR12[] = {FUN2(VAR2), FUN2(VAR13 - VAR2)};
    uint32_t VAR14 = FUN3(VAR3);
    uint32_t VAR15 = FUN3(VAR3 + VAR4);
    uint32_t VAR16[] = {0, FUN3(VAR7)};
    char VAR17[] = ""
                           "";
    uint32_t VAR18[] = {0, FUN3(VAR19)};
    int VAR20;
    char *VAR21;
    int VAR22 = FUN4();
    do
    {
        int VAR23 = (VAR24);
        if (VAR23 < 0)
        { fprintf ( VAR25 , "" , FUN5 ( 1 ) ;
        }
    } while (0) VAR8 = FUN6(VAR26);
    FUN7((FUN8(VAR8, VAR26)));
    FUN7((FUN9(VAR8)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN12(VAR8, "", 0x2)));
    FUN7((FUN12(VAR8, "", 0x2)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN11(VAR8, "", VAR6)));
    FUN7((FUN13(VAR8, "", &VAR14, sizeof(VAR14))));
    FUN7((FUN13(VAR8, "", &VAR15, sizeof(VAR15))));
    FUN7((FUN11(VAR8, "", VAR5)));
    FUN7((FUN14(VAR8)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN13(VAR8, "", VAR11, sizeof(VAR11))));
    FUN7((FUN14(VAR8)));
    if (VAR13 > VAR2)
    {
        char VAR27[32];
        sprintf(VAR27, "" VAR28, (VAR29)VAR2);
        FUN7((FUN10(VAR8, VAR27)));
        FUN7((FUN11(VAR8, "", "")));
        FUN7((FUN13(VAR8, "", VAR12, sizeof(VAR12))));
        FUN7((FUN14(VAR8)));
    }
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN12(VAR8, "", 0x1)));
    FUN7((FUN12(VAR8, "", 0x0)));
    VAR21 = FUN15(VAR1);
    for (VAR20 = 0; VAR20 < strlen(VAR21); VAR20++)
    {
        VAR21[VAR20] = FUN16(VAR21[VAR20]);
    }
    for (VAR10 = VAR30; VAR10 != NULL; VAR10 = VAR10->VAR31)
    {
        int VAR32 = VAR10->VAR33;
        uint32_t VAR34[VAR35];
        uint32_t VAR36[VAR35 * 2];
        char *VAR37;
        uint32_t VAR38[] = {FUN3(28), FUN3(40), 0xffffffff, 0xffffffff};
        uint32_t VAR39 = FUN17() ? FUN18() : VAR40;
        uint32_t VAR41 = FUN17() ? FUN19() : 1000000000;
        if ((VAR32 % VAR22) != 0)
        {
            continue;
        }
        if (asprintf(&VAR37, "", VAR21, VAR32) < 0)
        {
            fprintf(VAR25, "");
            FUN5(1);
        }
        FUN7((FUN10(VAR8, VAR37)));
        free(VAR37);
        FUN7((FUN12(VAR8, "", VAR32)));
        FUN7((FUN11(VAR8, "", "")));
        FUN7((FUN12(VAR8, "", VAR10->VAR42[VAR43])));
        FUN7((FUN12(VAR8, "", VAR10->VAR44)));
        FUN7((FUN12(VAR8, "", VAR10->VAR45)));
        FUN7((FUN12(VAR8, "", VAR39)));
        FUN7((FUN12(VAR8, "", VAR41)));
        FUN7((FUN12(VAR8, "", VAR10->VAR46)));
        FUN7((FUN13(VAR8, "", VAR16, sizeof(VAR16))));
        FUN7((FUN11(VAR8, "", "")));
        FUN7((FUN13(VAR8, "", NULL, 0)));
        for (VAR20 = 0; VAR20 < VAR35; VAR20++)
        {
            VAR34[VAR20] = FUN3(VAR32 + VAR20);
            VAR36[VAR20 * 2] = FUN3(VAR32 + VAR20);
            VAR36[VAR20 * 2 + 1] = 0;
        }
        FUN7((FUN13(VAR8, "", VAR34, sizeof(VAR34))));
        FUN7((FUN13(VAR8, "", VAR36, sizeof(VAR36))));
        if (VAR10->VAR47 & VAR48)
        {
            FUN7((FUN13(VAR8, "", VAR38, sizeof(VAR38))));
        }
        if (VAR10->VAR49 & VAR50)
        {
            uint32_t VAR51 = (VAR10->VAR52 & VAR53) ? 2 : 1;
            FUN7((FUN12(VAR8, "", VAR51)));
        }
        if (VAR10->VAR52 & VAR54)
        {
            FUN7((FUN12(VAR8, "", 1)));
        }
        FUN7((FUN14(VAR8)));
    }
    FUN20(VAR21);
    FUN7((FUN14(VAR8)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN13(VAR8, "", VAR17, sizeof(VAR17))));
    FUN7((FUN14(VAR8)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN13(VAR8, "", NULL, 0)));
    FUN7((FUN13(VAR8, "", VAR18, sizeof(VAR18))));
    FUN7((FUN12(VAR8, "", 2)));
    FUN7((FUN12(VAR8, "", VAR55)));
    FUN7((FUN12(VAR8, "", VAR55)));
    FUN7((FUN14(VAR8)));
    FUN7((FUN10(VAR8, "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN11(VAR8, "", "")));
    FUN7((FUN12(VAR8, "", 0x1)));
    FUN7((FUN12(VAR8, "", 0x0)));
    FUN7((FUN12(VAR8, "", 0x2)));
    FUN7((FUN13(VAR8, "", NULL, 0)));
    FUN7((FUN14(VAR8)));
    FUN7((FUN14(VAR8)));
    FUN7((FUN21(VAR8)));
    return VAR8;
}