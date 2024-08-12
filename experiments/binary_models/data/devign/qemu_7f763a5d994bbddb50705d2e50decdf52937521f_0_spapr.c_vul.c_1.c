static void *FUN1(const char *VAR1, target_phys_addr_t VAR2, target_phys_addr_t VAR3, target_phys_addr_t VAR4, target_phys_addr_t VAR5, const char *VAR6, const char *VAR7, long VAR8)
{
    void *VAR9;
    VAR10 *VAR11;
    uint64_t VAR12[2];
    uint32_t VAR13 = FUN2(VAR3);
    uint32_t VAR14 = FUN2(VAR3 + VAR4);
    uint32_t VAR15[] = {0, FUN2(VAR8)};
    char VAR16[] = ""
                           "";
    char VAR17[] = "";
    uint32_t VAR18[] = {0, FUN2(VAR19)};
    int VAR20;
    char *VAR21;
    int VAR22 = FUN3();
    unsigned char VAR23[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    uint32_t VAR24[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR25[] = {FUN2(0x4), FUN2(0x0), FUN2(0x0), FUN2(0x0), FUN2(0x0)};
    char VAR26[32];
    target_phys_addr_t VAR27, VAR28;
    do
    {
        int VAR29 = (VAR30);
        if (VAR29 < 0)
        { fprintf ( VAR31 , "" , FUN4 ( 1 ) ;
        }
    } while (0) VAR9 = FUN5(VAR32);
    FUN6((FUN7(VAR9, VAR32)));
    if (VAR5)
    {
        FUN6((FUN8(VAR9, VAR33, VAR5)));
    }
    if (VAR4)
    {
        FUN6((FUN8(VAR9, VAR3, VAR4)));
    }
    FUN6((FUN9(VAR9)));
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN12(VAR9, "", 0x2)));
    FUN6((FUN12(VAR9, "", 0x2)));
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN13(VAR9, "", VAR23, sizeof(VAR23))));
    FUN6((FUN11(VAR9, "", VAR7)));
    FUN6((FUN13(VAR9, "", &VAR13, sizeof(VAR13))));
    FUN6((FUN13(VAR9, "", &VAR14, sizeof(VAR14))));
    if (VAR5)
    {
        uint64_t VAR34[2] = {FUN14(VAR33), FUN14(VAR5)};
        FUN6((FUN13(VAR9, "", &VAR34, sizeof(VAR34))));
    }
    FUN6((FUN11(VAR9, "", VAR6)));
    FUN6((FUN12(VAR9, "", VAR35)));
    FUN6((FUN12(VAR9, "", VAR36)));
    FUN6((FUN12(VAR9, "", VAR37)));
    FUN6((FUN15(VAR9)));
    VAR27 = (VAR38 > 1) ? VAR39[0] : VAR40;
    if (VAR2 > VAR27)
    {
        VAR2 = VAR27;
    }
    VAR12[0] = 0;
    VAR12[1] = FUN14(VAR2);
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
    FUN6((FUN13(VAR9, "", VAR25, sizeof(VAR25))));
    FUN6((FUN15(VAR9)));
    if (VAR27 > VAR2)
    {
        VAR12[0] = FUN14(VAR2);
        VAR12[1] = FUN14(VAR27 - VAR2);
        sprintf(VAR26, "" VAR41, VAR2);
        FUN6((FUN10(VAR9, VAR26)));
        FUN6((FUN11(VAR9, "", "")));
        FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
        FUN6((FUN13(VAR9, "", VAR25, sizeof(VAR25))));
        FUN6((FUN15(VAR9)));
    }
    VAR28 = VAR27;
    for (VAR20 = 1; VAR20 < VAR38; VAR20++)
    {
        VAR12[0] = FUN14(VAR28);
        VAR12[1] = FUN14(VAR39[VAR20]);
        VAR25[3] = VAR25[4] = FUN2(VAR20);
        sprintf(VAR26, "" VAR41, VAR28);
        FUN6((FUN10(VAR9, VAR26)));
        FUN6((FUN11(VAR9, "", "")));
        FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
        FUN6((FUN13(VAR9, "", VAR25, sizeof(VAR25))));
        FUN6((FUN15(VAR9)));
        VAR28 += VAR39[VAR20];
    }
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN12(VAR9, "", 0x1)));
    FUN6((FUN12(VAR9, "", 0x0)));
    VAR21 = FUN16(VAR1);
    for (VAR20 = 0; VAR20 < strlen(VAR21); VAR20++)
    {
        VAR21[VAR20] = FUN17(VAR21[VAR20]);
    }
    VAR42->VAR1 = FUN16(VAR21);
    for (VAR11 = VAR43; VAR11 != NULL; VAR11 = VAR11->VAR44)
    {
        int VAR45 = VAR11->VAR46;
        uint32_t VAR47[VAR48];
        uint32_t VAR49[VAR48 * 2];
        char *VAR50;
        uint32_t VAR51[] = {FUN2(28), FUN2(40), 0xffffffff, 0xffffffff};
        uint32_t VAR52 = FUN18() ? FUN19() : VAR53;
        uint32_t VAR54 = FUN18() ? FUN20() : 1000000000;
        uint32_t VAR55[64];
        size_t VAR56;
        if ((VAR45 % VAR22) != 0)
        {
            continue;
        }
        if (asprintf(&VAR50, "", VAR21, VAR45) < 0)
        {
            fprintf(VAR31, "");
            FUN4(1);
        }
        FUN6((FUN10(VAR9, VAR50)));
        free(VAR50);
        FUN6((FUN12(VAR9, "", VAR45)));
        FUN6((FUN11(VAR9, "", "")));
        FUN6((FUN12(VAR9, "", VAR11->VAR57[VAR58])));
        FUN6((FUN12(VAR9, "", VAR11->VAR59)));
        FUN6((FUN12(VAR9, "", VAR11->VAR60)));
        FUN6((FUN12(VAR9, "", VAR52)));
        FUN6((FUN12(VAR9, "", VAR54)));
        FUN6((FUN12(VAR9, "", VAR11->VAR61)));
        FUN6((FUN13(VAR9, "", VAR15, sizeof(VAR15))));
        FUN6((FUN11(VAR9, "", "")));
        FUN6((FUN13(VAR9, "", NULL, 0)));
        for (VAR20 = 0; VAR20 < VAR48; VAR20++)
        {
            VAR47[VAR20] = FUN2(VAR45 + VAR20);
            VAR49[VAR20 * 2] = FUN2(VAR45 + VAR20);
            VAR49[VAR20 * 2 + 1] = 0;
        }
        FUN6((FUN13(VAR9, "", VAR47, sizeof(VAR47))));
        FUN6((FUN13(VAR9, "", VAR49, sizeof(VAR49))));
        if (VAR11->VAR62 & VAR63)
        {
            FUN6((FUN13(VAR9, "", VAR51, sizeof(VAR51))));
        }
        if (VAR11->VAR64 & VAR65)
        {
            uint32_t VAR66 = (VAR11->VAR67 & VAR68) ? 2 : 1;
            FUN6((FUN12(VAR9, "", VAR66)));
        }
        if (VAR11->VAR67 & VAR69)
        {
            FUN6((FUN12(VAR9, "", 1)));
        }
        VAR56 = FUN21(VAR11, VAR55, sizeof(VAR55));
        if (VAR56)
        {
            FUN6((FUN13(VAR9, "", VAR55, VAR56)));
        }
        FUN6((FUN15(VAR9)));
    }
    FUN22(VAR21);
    FUN6((FUN15(VAR9)));
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN13(VAR9, "", VAR16, sizeof(VAR16))));
    FUN6((FUN13(VAR9, "", VAR17, sizeof(VAR17))));
    FUN6((FUN13(VAR9, "", VAR24, sizeof(VAR24))));
    FUN6((FUN15(VAR9)));
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN13(VAR9, "", NULL, 0)));
    FUN6((FUN13(VAR9, "", VAR18, sizeof(VAR18))));
    FUN6((FUN12(VAR9, "", 2)));
    FUN6((FUN12(VAR9, "", VAR70)));
    FUN6((FUN12(VAR9, "", VAR70)));
    FUN6((FUN15(VAR9)));
    FUN6((FUN10(VAR9, "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN11(VAR9, "", "")));
    FUN6((FUN12(VAR9, "", 0x1)));
    FUN6((FUN12(VAR9, "", 0x0)));
    FUN6((FUN12(VAR9, "", 0x2)));
    FUN6((FUN13(VAR9, "", NULL, 0)));
    FUN6((FUN15(VAR9)));
    FUN6((FUN15(VAR9)));
    FUN6((FUN23(VAR9)));
    return VAR9;
}