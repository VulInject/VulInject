int FUN1(void *VAR1, VAR2 *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, int VAR7, VAR8 *VAR9)
{
    int VAR10, VAR11 = 0;
    uint32_t VAR12 = 0;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    MultibootState VAR16;
    uint8_t VAR17[VAR18];
    VAR8 *VAR19;
    for (VAR10 = 0; VAR10 < (8192 - 48); VAR10 += 4)
    {
        if (FUN2(VAR9 + VAR10) == 0x1BADB002)
        {
            uint32_t VAR20 = FUN2(VAR9 + VAR10 + 8);
            VAR12 = FUN2(VAR9 + VAR10 + 4);
            VAR20 += VAR12;
            VAR20 += (VAR21)0x1BADB002;
            if (!VAR20)
            {
                VAR11 = 1;
                break;
            }
        }
    }
    if (!VAR11)
        return 0;
    FUN3("");
    memset(VAR17, 0, sizeof(VAR17));
    memset(&VAR16, 0, sizeof(VAR16));
    if (VAR12 & 0x00000004)
    {
        fprintf(VAR22, "");
    }
    if (!(VAR12 & 0x00010000))
    {
        uint64_t VAR23;
        uint64_t VAR24, VAR25;
        int VAR26;
        fclose(VAR3);
        if (((struct VAR27 *)VAR9)->VAR28 == VAR29)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        VAR26 = FUN5(VAR4, NULL, NULL, &VAR23, &VAR24, &VAR25, 0, VAR30, 0);
        if (VAR26 < 0)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        VAR14 = VAR24;
        VAR15 = VAR25 - VAR24;
        VAR13 = VAR23;
        VAR16.VAR31 = FUN6(VAR15);
        if (FUN7(VAR16.VAR31, VAR14, VAR15) != VAR15)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        FUN3("", VAR15, (VAR32)VAR13);
    }
    else
    {
        uint32_t VAR33 = FUN2(VAR9 + VAR10 + 12);
        uint32_t VAR34 = FUN2(VAR9 + VAR10 + 20);
        uint32_t VAR35 = FUN2(VAR9 + VAR10 + 24);
        VAR14 = FUN2(VAR9 + VAR10 + 16);
        uint32_t VAR36 = VAR10 - (VAR33 - VAR14);
        uint32_t VAR37 = 0;
        VAR13 = FUN2(VAR9 + VAR10 + 28);
        if (VAR34)
        {
            VAR15 = VAR35 - VAR14;
            VAR37 = VAR34 - VAR14;
        }
        else
        {
            VAR15 = VAR7 - VAR36;
            VAR37 = VAR15;
        }
        FUN3("", VAR33);
        FUN3("", VAR14);
        FUN3("", VAR34);
        FUN3("", VAR35);
        FUN3("", VAR37, VAR14);
        VAR16.VAR31 = FUN6(VAR15);
        FUN8(VAR3, VAR36, VAR38);
        if (fread(VAR16.VAR31, 1, VAR37, VAR3) != VAR37)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        memset(VAR16.VAR31 + VAR37, 0, VAR15 - VAR37);
        fclose(VAR3);
    }
    VAR16.VAR39 = VAR14;
    VAR16.VAR40 = FUN9(VAR15);
    VAR16.VAR41 = VAR16.VAR40;
    VAR16.VAR40 += strlen(VAR4) + 1;
    VAR16.VAR40 += strlen(VAR6) + 1;
    if (VAR5)
    {
        const char *VAR42 = VAR5;
        VAR16.VAR40 += strlen(VAR42) + 1;
        VAR16.VAR43 = 1;
        while (*(VAR42 = FUN10(NULL, 0, VAR42)))
        {
            VAR16.VAR43++;
            VAR42++;
        }
        VAR16.VAR40 += VAR44 * VAR16.VAR43;
    }
    VAR16.VAR40 = FUN9(VAR16.VAR40);
    VAR16.VAR31 = FUN11(VAR16.VAR31, VAR16.VAR40);
    VAR16.VAR45 = VAR16.VAR41 + VAR16.VAR43 * VAR44;
    if (VAR5)
    {
        char *VAR46, VAR47;
        VAR16.VAR48 = VAR16.VAR40;
        do
        {
            char *VAR49;
            int VAR50;
            uint32_t VAR51 = VAR16.VAR40;
            VAR46 = (char *)FUN10(NULL, 0, VAR5);
            VAR47 = *VAR46;
            *VAR46 = '';
            hwaddr VAR52 = FUN12(&VAR16, VAR5);
            if ((VAR49 = strchr(VAR5, '')))
                *VAR49 = '';
            FUN3("", VAR5);
            VAR50 = FUN13(VAR5);
            if (VAR50 < 0)
            {
                fprintf(VAR22, "", VAR5);
                FUN4(1);
            }
            VAR16.VAR40 = FUN9(VAR50 + VAR16.VAR40);
            VAR16.VAR31 = FUN11(VAR16.VAR31, VAR16.VAR40);
            FUN14(VAR5, (unsigned char *)VAR16.VAR31 + VAR51);
            FUN15(&VAR16, VAR16.VAR39 + VAR51, VAR16.VAR39 + VAR51 + VAR50, VAR52);
            FUN3("" VAR53 "", (char *)VAR16.VAR31 + VAR51, (char *)VAR16.VAR31 + VAR51 + VAR50, VAR52);
            VAR5 = VAR46 + 1;
        } while (VAR47);
    }
    char VAR54[strlen(VAR4) + strlen(VAR6) + 2];
    snprintf(VAR54, sizeof(VAR54), "", VAR4, VAR6);
    FUN16(VAR17 + VAR55, FUN12(&VAR16, VAR54));
    FUN16(VAR17 + VAR56, VAR16.VAR39 + VAR16.VAR41);
    FUN16(VAR17 + VAR57, VAR16.VAR58);
    FUN16(VAR17 + VAR59, VAR60 | VAR61 | VAR62 | VAR63 | VAR64);
    FUN16(VAR17 + VAR65, 640);
    FUN16(VAR17 + VAR66, (VAR67 / 1024) - 1024);
    FUN16(VAR17 + VAR68, 0x8000ffff);
    FUN16(VAR17 + VAR69, VAR70);
    FUN3("", VAR13);
    FUN3("" VAR53 "", VAR16.VAR39);
    FUN3("" VAR53 "", VAR16.VAR39 + VAR16.VAR48);
    FUN3("", VAR16.VAR58);
    VAR19 = FUN6(sizeof(VAR17));
    memcpy(VAR19, VAR17, sizeof(VAR17));
    FUN17(VAR1, VAR71, VAR13);
    FUN17(VAR1, VAR72, VAR14);
    FUN17(VAR1, VAR73, VAR16.VAR40);
    FUN18(VAR1, VAR74, VAR16.VAR31, VAR16.VAR40);
    FUN17(VAR1, VAR75, VAR76);
    FUN17(VAR1, VAR77, sizeof(VAR17));
    FUN18(VAR1, VAR78, VAR19, sizeof(VAR17));
    VAR79[VAR80].VAR81 = "";
    VAR79[VAR80].VAR82 = 0;
    VAR80++;
    return 1;
}