static void *FUN1(const char *VAR1, target_phys_addr_t VAR2, target_phys_addr_t VAR3, target_phys_addr_t VAR4, const char *VAR5, const char *VAR6, long VAR7)
{
    void *VAR8;
    VAR9 *VAR10;
    uint64_t VAR11[2];
    uint32_t VAR12 = FUN2(VAR3);
    uint32_t VAR13 = FUN2(VAR3 + VAR4);
    uint32_t VAR14[] = {0, FUN2(VAR7)};
    char VAR15[] = ""
                           "";
    uint32_t VAR16[] = {0, FUN2(VAR17)};
    int VAR18;
    char *VAR19;
    int VAR20 = FUN3();
    unsigned char VAR21[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    uint32_t VAR22[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR23[] = {FUN2(0x4), FUN2(0x0), FUN2(0x0), FUN2(0x0), FUN2(0x0)};
    char VAR24[32];
    target_phys_addr_t VAR25, VAR26;
    do
    {
        int VAR27 = (VAR28);
        if (VAR27 < 0)
        { fprintf ( VAR29 , "" , FUN4 ( 1 ) ;
        }
    } while (0) VAR8 = FUN5(VAR30);
    FUN6((FUN7(VAR8, VAR30)));
    FUN6((FUN8(VAR8)));
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN11(VAR8, "", 0x2)));
    FUN6((FUN11(VAR8, "", 0x2)));
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN12(VAR8, "", VAR21, sizeof(VAR21))));
    FUN6((FUN10(VAR8, "", VAR6)));
    FUN6((FUN12(VAR8, "", &VAR12, sizeof(VAR12))));
    FUN6((FUN12(VAR8, "", &VAR13, sizeof(VAR13))));
    FUN6((FUN10(VAR8, "", VAR5)));
    FUN6((FUN11(VAR8, "", 0)));
    FUN6((FUN13(VAR8)));
    VAR25 = (VAR31 > 1) ? VAR32[0] : VAR33;
    if (VAR2 > VAR25)
    {
        VAR2 = VAR25;
    }
    VAR11[0] = 0;
    VAR11[1] = FUN14(VAR2);
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN12(VAR8, "", VAR11, sizeof(VAR11))));
    FUN6((FUN12(VAR8, "", VAR23, sizeof(VAR23))));
    FUN6((FUN13(VAR8)));
    if (VAR25 > VAR2)
    {
        VAR11[0] = FUN14(VAR2);
        VAR11[1] = FUN14(VAR25 - VAR2);
        sprintf(VAR24, "" VAR34, VAR2);
        FUN6((FUN9(VAR8, VAR24)));
        FUN6((FUN10(VAR8, "", "")));
        FUN6((FUN12(VAR8, "", VAR11, sizeof(VAR11))));
        FUN6((FUN12(VAR8, "", VAR23, sizeof(VAR23))));
        FUN6((FUN13(VAR8)));
    }
    VAR26 = VAR25;
    for (VAR18 = 1; VAR18 < VAR31; VAR18++)
    {
        VAR11[0] = FUN14(VAR26);
        VAR11[1] = FUN14(VAR32[VAR18]);
        VAR23[3] = VAR23[4] = FUN2(VAR18);
        sprintf(VAR24, "" VAR34, VAR26);
        FUN6((FUN9(VAR8, VAR24)));
        FUN6((FUN10(VAR8, "", "")));
        FUN6((FUN12(VAR8, "", VAR11, sizeof(VAR11))));
        FUN6((FUN12(VAR8, "", VAR23, sizeof(VAR23))));
        FUN6((FUN13(VAR8)));
        VAR26 += VAR32[VAR18];
    }
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN11(VAR8, "", 0x1)));
    FUN6((FUN11(VAR8, "", 0x0)));
    VAR19 = FUN15(VAR1);
    for (VAR18 = 0; VAR18 < strlen(VAR19); VAR18++)
    {
        VAR19[VAR18] = FUN16(VAR19[VAR18]);
    }
    VAR35->VAR1 = FUN15(VAR19);
    for (VAR10 = VAR36; VAR10 != NULL; VAR10 = VAR10->VAR37)
    {
        int VAR38 = VAR10->VAR39;
        uint32_t VAR40[VAR41];
        uint32_t VAR42[VAR41 * 2];
        char *VAR43;
        uint32_t VAR44[] = {FUN2(28), FUN2(40), 0xffffffff, 0xffffffff};
        uint32_t VAR45 = FUN17() ? FUN18() : VAR46;
        uint32_t VAR47 = FUN17() ? FUN19() : 1000000000;
        if ((VAR38 % VAR20) != 0)
        {
            continue;
        }
        if (asprintf(&VAR43, "", VAR19, VAR38) < 0)
        {
            fprintf(VAR29, "");
            FUN4(1);
        }
        FUN6((FUN9(VAR8, VAR43)));
        free(VAR43);
        FUN6((FUN11(VAR8, "", VAR38)));
        FUN6((FUN10(VAR8, "", "")));
        FUN6((FUN11(VAR8, "", VAR10->VAR48[VAR49])));
        FUN6((FUN11(VAR8, "", VAR10->VAR50)));
        FUN6((FUN11(VAR8, "", VAR10->VAR51)));
        FUN6((FUN11(VAR8, "", VAR45)));
        FUN6((FUN11(VAR8, "", VAR47)));
        FUN6((FUN11(VAR8, "", VAR10->VAR52)));
        FUN6((FUN12(VAR8, "", VAR14, sizeof(VAR14))));
        FUN6((FUN10(VAR8, "", "")));
        FUN6((FUN12(VAR8, "", NULL, 0)));
        for (VAR18 = 0; VAR18 < VAR41; VAR18++)
        {
            VAR40[VAR18] = FUN2(VAR38 + VAR18);
            VAR42[VAR18 * 2] = FUN2(VAR38 + VAR18);
            VAR42[VAR18 * 2 + 1] = 0;
        }
        FUN6((FUN12(VAR8, "", VAR40, sizeof(VAR40))));
        FUN6((FUN12(VAR8, "", VAR42, sizeof(VAR42))));
        if (VAR10->VAR53 & VAR54)
        {
            FUN6((FUN12(VAR8, "", VAR44, sizeof(VAR44))));
        }
        if (VAR10->VAR55 & VAR56)
        {
            uint32_t VAR57 = (VAR10->VAR58 & VAR59) ? 2 : 1;
            FUN6((FUN11(VAR8, "", VAR57)));
        }
        if (VAR10->VAR58 & VAR60)
        {
            FUN6((FUN11(VAR8, "", 1)));
        }
        FUN6((FUN13(VAR8)));
    }
    FUN20(VAR19);
    FUN6((FUN13(VAR8)));
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN12(VAR8, "", VAR15, sizeof(VAR15))));
    FUN6((FUN12(VAR8, "", VAR22, sizeof(VAR22))));
    FUN6((FUN13(VAR8)));
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN12(VAR8, "", NULL, 0)));
    FUN6((FUN12(VAR8, "", VAR16, sizeof(VAR16))));
    FUN6((FUN11(VAR8, "", 2)));
    FUN6((FUN11(VAR8, "", VAR61)));
    FUN6((FUN11(VAR8, "", VAR61)));
    FUN6((FUN13(VAR8)));
    FUN6((FUN9(VAR8, "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN10(VAR8, "", "")));
    FUN6((FUN11(VAR8, "", 0x1)));
    FUN6((FUN11(VAR8, "", 0x0)));
    FUN6((FUN11(VAR8, "", 0x2)));
    FUN6((FUN12(VAR8, "", NULL, 0)));
    FUN6((FUN13(VAR8)));
    FUN6((FUN13(VAR8)));
    FUN6((FUN21(VAR8)));
    return VAR8;
}