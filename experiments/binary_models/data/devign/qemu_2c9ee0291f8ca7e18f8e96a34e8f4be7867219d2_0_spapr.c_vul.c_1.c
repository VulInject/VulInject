static void *FUN1(const char *VAR1, hwaddr VAR2, hwaddr VAR3, hwaddr VAR4, const char *VAR5, const char *VAR6, uint32_t VAR7)
{
    void *VAR8;
    VAR9 *VAR10;
    uint32_t VAR11 = FUN2(VAR2);
    uint32_t VAR12 = FUN2(VAR2 + VAR3);
    char VAR13[] = ""
                           "";
    char VAR14[] = "";
    uint32_t VAR15[] = {FUN2(0x4), FUN2(0x4)};
    uint32_t VAR16[] = {0, FUN2(VAR17)};
    char *VAR18;
    int VAR19, VAR20 = FUN3();
    unsigned char VAR21[] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x80};
    VAR8 = FUN4(VAR22);
    FUN5((FUN6(VAR8, VAR22)));
    if (VAR4)
    {
        FUN5((FUN7(VAR8, VAR23, VAR4)));
    }
    if (VAR3)
    {
        FUN5((FUN7(VAR8, VAR2, VAR3)));
    }
    FUN5((FUN8(VAR8)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN11(VAR8, "", 0x2)));
    FUN5((FUN11(VAR8, "", 0x2)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN12(VAR8, "", VAR21, sizeof(VAR21))));
    FUN5((FUN10(VAR8, "", VAR6)));
    FUN5((FUN12(VAR8, "", &VAR11, sizeof(VAR11))));
    FUN5((FUN12(VAR8, "", &VAR12, sizeof(VAR12))));
    if (VAR4)
    {
        uint64_t VAR24[2] = {FUN13(VAR23), FUN13(VAR4)};
        FUN5((FUN12(VAR8, "", &VAR24, sizeof(VAR24))));
    }
    FUN5((FUN10(VAR8, "", VAR5)));
    FUN5((FUN11(VAR8, "", VAR25)));
    FUN5((FUN11(VAR8, "", VAR26)));
    FUN5((FUN11(VAR8, "", VAR27)));
    FUN5((FUN14(VAR8)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN11(VAR8, "", 0x1)));
    FUN5((FUN11(VAR8, "", 0x0)));
    VAR18 = FUN15(VAR1);
    for (VAR19 = 0; VAR19 < strlen(VAR18); VAR19++)
    {
        VAR18[VAR19] = FUN16(VAR18[VAR19]);
    }
    VAR28->VAR1 = FUN15(VAR18);
    for (VAR10 = VAR29; VAR10 != NULL; VAR10 = VAR10->VAR30)
    {
        VAR31 *VAR32 = FUN17(FUN18(VAR10));
        int VAR33 = VAR32->VAR34;
        uint32_t VAR35[VAR36];
        uint32_t VAR37[VAR36 * 2];
        char *VAR38;
        uint32_t VAR39[] = {FUN2(28), FUN2(40), 0xffffffff, 0xffffffff};
        uint32_t VAR40 = FUN19() ? FUN20() : VAR41;
        uint32_t VAR42 = FUN19() ? FUN21() : 1000000000;
        uint32_t VAR43[64];
        size_t VAR44;
        if ((VAR33 % VAR20) != 0)
        {
            continue;
        }
        if (asprintf(&VAR38, "", VAR18, VAR33) < 0)
        {
            fprintf(VAR45, "");
            FUN22(1);
        }
        FUN5((FUN9(VAR8, VAR38)));
        free(VAR38);
        FUN5((FUN11(VAR8, "", VAR33)));
        FUN5((FUN10(VAR8, "", "")));
        FUN5((FUN11(VAR8, "", VAR10->VAR46[VAR47])));
        FUN5((FUN11(VAR8, "", VAR10->VAR48)));
        FUN5((FUN11(VAR8, "", VAR10->VAR49)));
        FUN5((FUN11(VAR8, "", VAR40)));
        FUN5((FUN11(VAR8, "", VAR42)));
        FUN5((FUN11(VAR8, "", VAR10->VAR50)));
        FUN5((FUN10(VAR8, "", "")));
        FUN5((FUN12(VAR8, "", NULL, 0)));
        for (VAR19 = 0; VAR19 < VAR36; VAR19++)
        {
            VAR35[VAR19] = FUN2(VAR33 + VAR19);
            VAR37[VAR19 * 2] = FUN2(VAR33 + VAR19);
            VAR37[VAR19 * 2 + 1] = 0;
        }
        FUN5((FUN12(VAR8, "", VAR35, sizeof(VAR35))));
        FUN5((FUN12(VAR8, "", VAR37, sizeof(VAR37))));
        if (VAR10->VAR51 & VAR52)
        {
            FUN5((FUN12(VAR8, "", VAR39, sizeof(VAR39))));
        }
        if (VAR10->VAR53 & VAR54)
        {
            uint32_t VAR55 = (VAR10->VAR56 & VAR57) ? 2 : 1;
            FUN5((FUN11(VAR8, "", VAR55)));
        }
        if (VAR10->VAR56 & VAR58)
        {
            FUN5((FUN11(VAR8, "", 1)));
        }
        VAR44 = FUN23(VAR10, VAR43, sizeof(VAR43));
        if (VAR44)
        {
            FUN5((FUN12(VAR8, "", VAR43, VAR44)));
        }
        FUN5((FUN14(VAR8)));
    }
    FUN24(VAR18);
    FUN5((FUN14(VAR8)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN12(VAR8, "", VAR13, sizeof(VAR13))));
    FUN5((FUN12(VAR8, "", VAR14, sizeof(VAR14))));
    FUN5((FUN12(VAR8, "", VAR15, sizeof(VAR15))));
    FUN5((FUN11(VAR8, "", VAR59)));
    FUN5((FUN14(VAR8)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN12(VAR8, "", NULL, 0)));
    FUN5((FUN12(VAR8, "", VAR16, sizeof(VAR16))));
    FUN5((FUN11(VAR8, "", 2)));
    FUN5((FUN11(VAR8, "", VAR60)));
    FUN5((FUN11(VAR8, "", VAR60)));
    FUN5((FUN14(VAR8)));
    FUN5((FUN9(VAR8, "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN10(VAR8, "", "")));
    FUN5((FUN11(VAR8, "", 0x1)));
    FUN5((FUN11(VAR8, "", 0x0)));
    FUN5((FUN11(VAR8, "", 0x2)));
    FUN5((FUN12(VAR8, "", NULL, 0)));
    FUN5((FUN14(VAR8)));
    FUN25(VAR8, VAR7);
    FUN5((FUN14(VAR8)));
    FUN5((FUN26(VAR8)));
    return VAR8;
}