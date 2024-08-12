int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, const char *VAR7, int VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12 = 0;
    uint32_t VAR13 = 0;
    uint32_t VAR14;
    uint32_t VAR15;
    uint32_t VAR16;
    MultibootState VAR17;
    uint8_t VAR18[VAR19];
    VAR9 *VAR20;
    uint32_t VAR21;
    for (VAR11 = 0; VAR11 < (8192 - 48); VAR11 += 4)
    {
        if (FUN2(VAR10 + VAR11) == 0x1BADB002)
        {
            uint32_t VAR22 = FUN2(VAR10 + VAR11 + 8);
            VAR13 = FUN2(VAR10 + VAR11 + 4);
            VAR22 += VAR13;
            VAR22 += (VAR23)0x1BADB002;
            if (!VAR22)
            {
                VAR12 = 1;
                break;
                if (!VAR12)
                    return 0;
                FUN3("");
                memset(VAR18, 0, sizeof(VAR18));
                memset(&VAR17, 0, sizeof(VAR17));
                if (VAR13 & 0x00000004)
                {
                    fprintf(VAR24, "");
                    if (!(VAR13 & 0x00010000))
                    {
                        uint64_t VAR25;
                        uint64_t VAR26, VAR27;
                        int VAR28;
                        fclose(VAR4);
                        if (((struct VAR29 *)VAR10)->VAR30 == VAR31)
                        {
                            fprintf(VAR24, "");
                            VAR28 = FUN4(VAR5, NULL, NULL, &VAR25, &VAR26, &VAR27, 0, VAR32, 0, 0);
                            if (VAR28 < 0)
                            {
                                fprintf(VAR24, "");
                                VAR15 = VAR26;
                                VAR16 = VAR27 - VAR26;
                                VAR14 = VAR25;
                                VAR17.VAR33 = FUN5(VAR16);
                                if (FUN6(VAR17.VAR33, VAR15, VAR16) != VAR16)
                                {
                                    fprintf(VAR24, "");
                                    FUN3("", VAR16, (VAR34)VAR14);
                                }
                                else
                                {
                                    uint32_t VAR35 = FUN2(VAR10 + VAR11 + 12);
                                    uint32_t VAR36 = FUN2(VAR10 + VAR11 + 20);
                                    uint32_t VAR37 = FUN2(VAR10 + VAR11 + 24);
                                    VAR15 = FUN2(VAR10 + VAR11 + 16);
                                    uint32_t VAR38 = VAR11 - (VAR35 - VAR15);
                                    uint32_t VAR39 = 0;
                                    VAR14 = FUN2(VAR10 + VAR11 + 28);
                                    if (VAR36)
                                    {
                                        VAR16 = VAR37 - VAR15;
                                        VAR39 = VAR36 - VAR15;
                                    }
                                    else
                                    {
                                        VAR16 = VAR8 - VAR38;
                                        VAR39 = VAR16;
                                        FUN3("", VAR35);
                                        FUN3("", VAR15);
                                        FUN3("", VAR36);
                                        FUN3("", VAR37);
                                        FUN3("", VAR39, VAR15);
                                        VAR17.VAR33 = FUN5(VAR16);
                                        FUN7(VAR4, VAR38, VAR40);
                                        if (fread(VAR17.VAR33, 1, VAR39, VAR4) != VAR39)
                                        {
                                            fprintf(VAR24, "");
                                            memset(VAR17.VAR33 + VAR39, 0, VAR16 - VAR39);
                                            fclose(VAR4);
                                            VAR17.VAR41 = VAR15;
                                            VAR17.VAR42 = FUN8(VAR16);
                                            VAR17.VAR43 = VAR17.VAR42;
                                            VAR21 = strlen(VAR5) + 1;
                                            VAR21 += strlen(VAR7) + 1;
                                            if (VAR6)
                                            {
                                                const char *VAR44 = VAR6;
                                                VAR21 += strlen(VAR44) + 1;
                                                VAR17.VAR45 = 1;
                                                while (*(VAR44 = FUN9(NULL, 0, VAR44)))
                                                {
                                                    VAR17.VAR45++;
                                                    VAR44++;
                                                    VAR17.VAR42 += VAR21;
                                                    VAR17.VAR42 += VAR46 * VAR17.VAR45;
                                                    VAR17.VAR42 += strlen(VAR47) + 1;
                                                    VAR17.VAR42 = FUN8(VAR17.VAR42);
                                                    VAR17.VAR33 = FUN10(VAR17.VAR33, VAR17.VAR42);
                                                    VAR17.VAR48 = VAR17.VAR43 + VAR17.VAR45 * VAR46;
                                                    VAR17.VAR49 = VAR17.VAR48 + VAR21;
                                                    if (VAR6)
                                                    {
                                                        const char *VAR50;
                                                        char VAR51, VAR52[strlen(VAR6) + 1];
                                                        VAR17.VAR53 = VAR17.VAR42;
                                                        do
                                                        {
                                                            char *VAR54;
                                                            int VAR55;
                                                            uint32_t VAR56 = VAR17.VAR42;
                                                            VAR50 = FUN9(VAR52, sizeof(VAR52), VAR6);
                                                            VAR51 = *VAR50;
                                                            hwaddr VAR57 = FUN11(&VAR17, VAR52);
                                                            if ((VAR54 = strchr(VAR52, '')))
                                                                *VAR54 = '';
                                                            FUN3("", VAR52);
                                                            VAR55 = FUN12(VAR52);
                                                            if (VAR55 < 0)
                                                            {
                                                                fprintf(VAR24, "", VAR52);
                                                                VAR17.VAR42 = FUN8(VAR55 + VAR17.VAR42);
                                                                VAR17.VAR33 = FUN10(VAR17.VAR33, VAR17.VAR42);
                                                                FUN13(VAR52, (unsigned char *)VAR17.VAR33 + VAR56);
                                                                FUN14(&VAR17, VAR17.VAR41 + VAR56, VAR17.VAR41 + VAR56 + VAR55, VAR57);
                                                                FUN3("" VAR58 "", (char *)VAR17.VAR33 + VAR56, (char *)VAR17.VAR33 + VAR56 + VAR55, VAR57);
                                                                VAR6 = VAR50 + 1;
                                                            }
                                                            while (VAR51)
                                                                ;
                                                            char VAR59[strlen(VAR5) + strlen(VAR7) + 2];
                                                            snprintf(VAR59, sizeof(VAR59), "", VAR5, VAR7);
                                                            FUN15(VAR18 + VAR60, FUN11(&VAR17, VAR59));
                                                            FUN15(VAR18 + VAR61, FUN16(&VAR17, VAR47));
                                                            FUN15(VAR18 + VAR62, VAR17.VAR41 + VAR17.VAR43);
                                                            FUN15(VAR18 + VAR63, VAR17.VAR64);
                                                            FUN15(VAR18 + VAR65, VAR66 | VAR67 | VAR68 | VAR69 | VAR70 | VAR71);
                                                            FUN15(VAR18 + VAR72, 0x8000ffff);
                                                            FUN15(VAR18 + VAR73, VAR74);
                                                            FUN3("", VAR14);
                                                            FUN3("" VAR58 "", VAR17.VAR41);
                                                            FUN3("" VAR58 "", VAR17.VAR41 + VAR17.VAR53);
                                                            FUN3("", VAR17.VAR64);
                                                            VAR20 = FUN17(VAR18, sizeof(VAR18));
                                                            FUN18(VAR2, VAR75, VAR14);
                                                            FUN18(VAR2, VAR76, VAR15);
                                                            FUN18(VAR2, VAR77, VAR17.VAR42);
                                                            FUN19(VAR2, VAR78, VAR17.VAR33, VAR17.VAR42);
                                                            FUN18(VAR2, VAR79, VAR80);
                                                            FUN18(VAR2, VAR81, sizeof(VAR18));
                                                            FUN19(VAR2, VAR82, VAR20, sizeof(VAR18));
                                                            VAR83[VAR84].VAR85 = "";
                                                            VAR83[VAR84].VAR86 = 0;
                                                            VAR84++;
                                                            return 1;