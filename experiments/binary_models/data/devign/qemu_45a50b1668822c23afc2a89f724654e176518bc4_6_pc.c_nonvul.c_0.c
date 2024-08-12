static int FUN1(void *VAR1, VAR2 *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10 = 0;
    uint32_t VAR11 = 0;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15 = VAR16;
    uint32_t VAR17 = VAR16 + 0x500;
    uint32_t VAR18;
    uint8_t VAR19[0x500];
    uint32_t VAR20 = 0x200;
    for (VAR9 = 0; VAR9 < (8192 - 48); VAR9 += 4)
    {
        if (FUN2(VAR8 + VAR9) == 0x1BADB002)
        {
            uint32_t VAR21 = FUN2(VAR8 + VAR9 + 8);
            VAR11 = FUN2(VAR8 + VAR9 + 4);
            VAR21 += VAR11;
            VAR21 += (VAR22)0x1BADB002;
            if (!VAR21)
            {
                VAR10 = 1;
                break;
            }
        }
    }
    if (!VAR10)
        return 0;
    fprintf(VAR23, "");
    memset(VAR19, 0, sizeof(VAR19));
    if (VAR11 & 0x00000004)
    {
        fprintf(VAR23, "");
    }
    if (!(VAR11 & 0x00010000))
    {
        uint64_t VAR24;
        int VAR25;
        fclose(VAR3);
        VAR25 = FUN3(VAR4, 0, &VAR24, NULL, NULL, 0, VAR26, 0);
        if (VAR25 < 0)
        {
            fprintf(VAR23, "");
            FUN4(1);
        }
        VAR13 = VAR12 = VAR24;
        VAR14 = VAR25;
        fprintf(VAR23, "", VAR14, (VAR27)VAR12);
    }
    else
    {
        uint32_t VAR28 = FUN2(VAR8 + VAR9 + 12);
        VAR13 = FUN2(VAR8 + VAR9 + 16);
        uint32_t VAR29 = FUN2(VAR8 + VAR9 + 20);
        uint32_t VAR30 = FUN2(VAR8 + VAR9 + 24);
        uint32_t VAR31 = VAR9 - (VAR28 - VAR13);
        VAR7 *VAR32;
        VAR12 = FUN2(VAR8 + VAR9 + 28);
        VAR14 = FUN5(VAR3) - VAR31;
        fprintf(VAR23, "", VAR28);
        fprintf(VAR23, "", VAR13);
        fprintf(VAR23, "", VAR29);
        fprintf(VAR23, "", VAR30);
        fprintf(VAR23, "", VAR14, VAR13);
        VAR32 = FUN6(VAR14);
        FUN7(VAR3, VAR31, VAR33);
        fread(VAR32, 1, VAR14, VAR3);
        FUN8(VAR4, VAR32, VAR14, VAR13);
        FUN9(VAR32);
        fclose(VAR3);
    }
    VAR18 = VAR13 + VAR14;
    FUN10(VAR19 + 20, 0x0);
    if (VAR5)
    {
        uint32_t VAR34 = 0x100;
        uint32_t VAR35 = 0x300;
        uint32_t VAR36 = VAR13;
        uint32_t VAR37 = VAR14;
        char *VAR38;
        char *VAR39;
        int VAR40 = 0;
        do
        {
            VAR38 = strchr(VAR5, '');
            if (VAR38)
                *VAR38 = '';
            FUN11((char *)VAR19 + VAR35, sizeof(VAR19) - VAR35, VAR5);
            FUN10(VAR19 + VAR34 + 8, VAR35);
            VAR35 += strlen(VAR5) + 1;
            if (VAR35 > sizeof(VAR19))
                VAR35 = sizeof(VAR19);
            if ((VAR39 = strchr(VAR5, '')))
                *VAR39 = '';
            FUN12("", VAR5);
            VAR36 = (VAR36 + VAR37 + (VAR41 - 1)) & (VAR42);
            VAR37 = FUN13(VAR5);
            if (VAR37 < 0)
            {
                fprintf(VAR23, "", VAR5);
                FUN4(1);
            }
            VAR18 = VAR36 + VAR37;
            FUN14(VAR5, VAR36);
            VAR40++;
            FUN10(VAR19 + VAR34 + 0, VAR36);
            FUN10(VAR19 + VAR34 + 4, VAR36 + VAR37);
            FUN10(VAR19 + VAR34 + 12, 0x0);
            FUN12("", VAR36, VAR36 + VAR37);
            VAR5 = VAR38 + 1;
            VAR34 += 16;
        } while (VAR38);
        FUN10(VAR19 + 20, VAR40);
        FUN10(VAR19 + 24, VAR17 + 0x100);
    }
    FUN10(VAR19 + 16, VAR17 + VAR20);
    snprintf((char *)VAR19 + VAR20, 0x100, "", VAR4, VAR6);
    FUN10(VAR19, VAR43 | VAR44 | VAR45 | VAR46 | VAR47);
    FUN10(VAR19 + 4, 640);
    FUN10(VAR19 + 8, VAR48 / 1024);
    FUN10(VAR19 + 12, 0x8001ffff);
    FUN10(VAR19 + 48, VAR15);
    fprintf(VAR23, "", VAR12);
    FUN15(VAR1, VAR49, VAR12);
    FUN15(VAR1, VAR50, VAR17);
    FUN15(VAR1, VAR51, VAR15);
    FUN8("", VAR19, sizeof(VAR19), VAR17);
    VAR52[VAR53] = "";
    VAR53++;
    return 1;
}