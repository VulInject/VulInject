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
    uint32_t VAR17[] = {0, FUN2(VAR18)};
    int VAR19;
    char *VAR20;
    int VAR21 = FUN3();
    unsigned char VAR22[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    uint32_t VAR23[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR24[] = {FUN2(0x4), FUN2(0x0), FUN2(0x0), FUN2(0x0), FUN2(0x0)};
    char VAR25[32];
    target_phys_addr_t VAR26, VAR27;
    do
    {
        int VAR28 = (VAR29);
        if (VAR28 < 0)
        { fprintf ( VAR30 , "" , FUN4 ( 1 ) ;
        }
    } while (0) VAR9 = FUN5(VAR31);
    FUN6((FUN7(VAR9, VAR31)));
    if (VAR5)
    {
        FUN6((FUN8(VAR9, VAR32, VAR5)));
        if (VAR4)
        {
            FUN6((FUN8(VAR9, VAR3, VAR4)));
            FUN6((FUN9(VAR9)));
            FUN6((FUN10(VAR9, "")));
            FUN6((FUN11(VAR9, "", "")));
            FUN6((FUN11(VAR9, "", "")));
            FUN6((FUN12(VAR9, "", 0x2)));
            FUN6((FUN12(VAR9, "", 0x2)));
            FUN6((FUN10(VAR9, "")));
            FUN6((FUN13(VAR9, "", VAR22, sizeof(VAR22))));
            FUN6((FUN11(VAR9, "", VAR7)));
            FUN6((FUN13(VAR9, "", &VAR13, sizeof(VAR13))));
            FUN6((FUN13(VAR9, "", &VAR14, sizeof(VAR14))));
            if (VAR5)
            {
                uint64_t VAR33[2] = {FUN14(VAR32), FUN14(VAR5)};
                FUN6((FUN13(VAR9, "", &VAR33, sizeof(VAR33))));
                FUN6((FUN11(VAR9, "", VAR6)));
                FUN6((FUN15(VAR9)));
                VAR26 = (VAR34 > 1) ? VAR35[0] : VAR36;
                if (VAR2 > VAR26)
                {
                    VAR2 = VAR26;
                    VAR12[0] = 0;
                    VAR12[1] = FUN14(VAR2);
                    FUN6((FUN10(VAR9, "")));
                    FUN6((FUN11(VAR9, "", "")));
                    FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
                    FUN6((FUN13(VAR9, "", VAR24, sizeof(VAR24))));
                    FUN6((FUN15(VAR9)));
                    if (VAR26 > VAR2)
                    {
                        VAR12[0] = FUN14(VAR2);
                        VAR12[1] = FUN14(VAR26 - VAR2);
                        sprintf(VAR25, "" VAR37, VAR2);
                        FUN6((FUN10(VAR9, VAR25)));
                        FUN6((FUN11(VAR9, "", "")));
                        FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
                        FUN6((FUN13(VAR9, "", VAR24, sizeof(VAR24))));
                        FUN6((FUN15(VAR9)));
                        VAR27 = VAR26;
                        for (VAR19 = 1; VAR19 < VAR34; VAR19++)
                        {
                            VAR12[0] = FUN14(VAR27);
                            VAR12[1] = FUN14(VAR35[VAR19]);
                            VAR24[3] = VAR24[4] = FUN2(VAR19);
                            sprintf(VAR25, "" VAR37, VAR27);
                            FUN6((FUN10(VAR9, VAR25)));
                            FUN6((FUN11(VAR9, "", "")));
                            FUN6((FUN13(VAR9, "", VAR12, sizeof(VAR12))));
                            FUN6((FUN13(VAR9, "", VAR24, sizeof(VAR24))));
                            FUN6((FUN15(VAR9)));
                            VAR27 += VAR35[VAR19];
                            FUN6((FUN10(VAR9, "")));
                            FUN6((FUN12(VAR9, "", 0x1)));
                            FUN6((FUN12(VAR9, "", 0x0)));
                            VAR20 = FUN16(VAR1);
                            for (VAR19 = 0; VAR19 < strlen(VAR20); VAR19++)
                            {
                                VAR20[VAR19] = FUN17(VAR20[VAR19]);
                                VAR38->VAR1 = FUN16(VAR20);
                                for (VAR11 = VAR39; VAR11 != NULL; VAR11 = VAR11->VAR40)
                                {
                                    int VAR41 = VAR11->VAR42;
                                    uint32_t VAR43[VAR44];
                                    uint32_t VAR45[VAR44 * 2];
                                    char *VAR46;
                                    uint32_t VAR47[] = {FUN2(28), FUN2(40), 0xffffffff, 0xffffffff};
                                    uint32_t VAR48 = FUN18() ? FUN19() : VAR49;
                                    uint32_t VAR50 = FUN18() ? FUN20() : 1000000000;
                                    uint32_t VAR51[64];
                                    size_t VAR52;
                                    if ((VAR41 % VAR21) != 0)
                                    {
                                        continue;
                                        if (asprintf(&VAR46, "", VAR20, VAR41) < 0)
                                        {
                                            fprintf(VAR30, "");
                                            FUN4(1);
                                            FUN6((FUN10(VAR9, VAR46)));
                                            free(VAR46);
                                            FUN6((FUN12(VAR9, "", VAR41)));
                                            FUN6((FUN11(VAR9, "", "")));
                                            FUN6((FUN12(VAR9, "", VAR11->VAR53[VAR54])));
                                            FUN6((FUN12(VAR9, "", VAR11->VAR55)));
                                            FUN6((FUN12(VAR9, "", VAR11->VAR56)));
                                            FUN6((FUN12(VAR9, "", VAR48)));
                                            FUN6((FUN12(VAR9, "", VAR50)));
                                            FUN6((FUN12(VAR9, "", VAR11->VAR57)));
                                            FUN6((FUN13(VAR9, "", VAR15, sizeof(VAR15))));
                                            FUN6((FUN11(VAR9, "", "")));
                                            FUN6((FUN13(VAR9, "", NULL, 0)));
                                            for (VAR19 = 0; VAR19 < VAR44; VAR19++)
                                            {
                                                VAR43[VAR19] = FUN2(VAR41 + VAR19);
                                                VAR45[VAR19 * 2] = FUN2(VAR41 + VAR19);
                                                VAR45[VAR19 * 2 + 1] = 0;
                                                FUN6((FUN13(VAR9, "", VAR43, sizeof(VAR43))));
                                                FUN6((FUN13(VAR9, "", VAR45, sizeof(VAR45))));
                                                if (VAR11->VAR58 & VAR59)
                                                {
                                                    FUN6((FUN13(VAR9, "", VAR47, sizeof(VAR47))));
                                                    if (VAR11->VAR60 & VAR61)
                                                    {
                                                        uint32_t VAR62 = (VAR11->VAR63 & VAR64) ? 2 : 1;
                                                        FUN6((FUN12(VAR9, "", VAR62)));
                                                        if (VAR11->VAR63 & VAR65)
                                                        {
                                                            FUN6((FUN12(VAR9, "", 1)));
                                                            FUN6((FUN15(VAR9)));
                                                            FUN21(VAR20);
                                                            FUN6((FUN15(VAR9)));
                                                            FUN6((FUN10(VAR9, "")));
                                                            FUN6((FUN13(VAR9, "", VAR16, sizeof(VAR16))));
                                                            FUN6((FUN13(VAR9, "", VAR23, sizeof(VAR23))));
                                                            FUN6((FUN15(VAR9)));
                                                            FUN6((FUN10(VAR9, "")));
                                                            FUN6((FUN11(VAR9, "", "")));
                                                            FUN6((FUN11(VAR9, "", "")));
                                                            FUN6((FUN13(VAR9, "", NULL, 0)));
                                                            FUN6((FUN13(VAR9, "", VAR17, sizeof(VAR17))));
                                                            FUN6((FUN12(VAR9, "", 2)));
                                                            FUN6((FUN12(VAR9, "", VAR66)));
                                                            FUN6((FUN12(VAR9, "", VAR66)));
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
                                                            FUN6((FUN22(VAR9)));
                                                            return VAR9