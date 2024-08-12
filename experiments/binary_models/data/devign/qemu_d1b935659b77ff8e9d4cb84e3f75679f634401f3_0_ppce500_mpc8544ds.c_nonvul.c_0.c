static int FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, target_phys_addr_t VAR4, target_phys_addr_t VAR5, target_phys_addr_t VAR6, const char *VAR7)
{
    int VAR8 = -1;
    uint32_t VAR9[] = {0, FUN2(VAR4)};
    int VAR10;
    void *VAR11;
    uint8_t VAR12[16];
    uint32_t VAR13 = 400000000;
    uint32_t VAR14 = 400000000;
    int VAR15;
    char VAR16[] = "";
    char VAR17[] = "";
    char VAR18[128];
    char VAR19[128];
    char VAR20[128];
    char VAR21[128];
    uint32_t VAR22;
    char VAR23[128];
    char VAR24[128];
    uint32_t VAR25[7 * 8];
    uint32_t VAR26[12] = {0x2000000, 0x0, 0xc0000000, 0xc0000000, 0x0, 0x20000000, 0x1000000, 0x0, 0x0, 0xe1000000, 0x0, 0x10000};
    VAR27 *VAR28;
    const char *VAR29 = NULL;
    const char *VAR30 = NULL;
    VAR28 = FUN3(FUN4(""), 0);
    if (VAR28)
    {
        VAR29 = FUN5(VAR28, "");
        VAR30 = FUN5(VAR28, "");
    }
    if (VAR30)
    {
        char *VAR31;
        VAR31 = FUN6(VAR32, VAR30);
        if (!VAR31)
        {
            goto VAR33;
        }
        VAR11 = FUN7(VAR31, &VAR10);
        if (!VAR11)
        {
            goto VAR33;
        }
        goto VAR34;
    }
    VAR11 = FUN8(&VAR10);
    if (VAR11 == NULL)
    {
        goto VAR33;
    }
    FUN9(VAR11, "", "", VAR17);
    FUN10(VAR11, "", "", VAR16, sizeof(VAR16));
    FUN11(VAR11, "", "", 1);
    FUN11(VAR11, "", "", 1);
    FUN12(VAR11, "");
    FUN9(VAR11, "", "", "");
    FUN10(VAR11, "", "", VAR9, sizeof(VAR9));
    FUN12(VAR11, "");
    if (VAR6)
    {
        VAR8 = FUN11(VAR11, "", "", VAR5);
        if (VAR8 < 0)
        {
            fprintf(VAR35, "");
        }
        VAR8 = FUN11(VAR11, "", "", (VAR5 + VAR6));
        if (VAR8 < 0)
        {
            fprintf(VAR35, "");
        }
    }
    VAR8 = FUN9(VAR11, "", "", VAR7);
    if (VAR8 < 0)
        fprintf(VAR35, "");
    if (FUN13())
    {
        VAR13 = FUN14();
        VAR14 = FUN15();
        FUN12(VAR11, "");
        FUN9(VAR11, "", "", "");
        FUN16(VAR2, VAR12, sizeof(VAR12));
        FUN10(VAR11, "", "", VAR12, sizeof(VAR12));
    }
    FUN12(VAR11, "");
    FUN11(VAR11, "", "", 1);
    FUN11(VAR11, "", "", 0);
    for (VAR15 = VAR36 - 1; VAR15 >= 0; VAR15--)
    {
        char VAR37[128];
        uint64_t VAR38 = VAR39 + (VAR15 * 0x20);
        for (VAR2 = VAR40; VAR2 != NULL; VAR2 = VAR2->VAR41)
        {
            if (VAR2->VAR42 == VAR15)
            {
                break;
            }
        }
        if (!VAR2)
        {
            continue;
        }
        snprintf(VAR37, sizeof(VAR37), "", VAR2->VAR42);
        FUN12(VAR11, VAR37);
        FUN11(VAR11, VAR37, "", VAR13);
        FUN11(VAR11, VAR37, "", VAR14);
        FUN9(VAR11, VAR37, "", "");
        FUN11(VAR11, VAR37, "", VAR2->VAR42);
        FUN11(VAR11, VAR37, "", VAR2->VAR43);
        FUN11(VAR11, VAR37, "", VAR2->VAR44);
        FUN11(VAR11, VAR37, "", 0x8000);
        FUN11(VAR11, VAR37, "", 0x8000);
        FUN11(VAR11, VAR37, "", 0);
        if (VAR2->VAR42)
        {
            FUN9(VAR11, VAR37, "", "");
            FUN9(VAR11, VAR37, "", "");
            FUN17(VAR11, VAR37, "", VAR38);
        }
        else
        {
            FUN9(VAR11, VAR37, "", "");
        }
    }
    FUN12(VAR11, "");
    snprintf(VAR18, sizeof(VAR18), "", VAR45);
    FUN12(VAR11, VAR18);
    FUN9(VAR11, VAR18, "", "");
    FUN9(VAR11, VAR18, "", "");
    FUN11(VAR11, VAR18, "", 1);
    FUN11(VAR11, VAR18, "", 1);
    FUN18(VAR11, VAR18, "", 0x0, VAR45, VAR46);
    FUN18(VAR11, VAR18, "", VAR45, VAR47);
    FUN11(VAR11, VAR18, "", 0);
    snprintf(VAR21, sizeof(VAR21), "", VAR18, VAR48 - VAR45);
    FUN12(VAR11, VAR21);
    FUN9(VAR11, VAR21, "", "");
    FUN9(VAR11, VAR21, "", "");
    FUN18(VAR11, VAR21, "", VAR48 - VAR45, 0x40000);
    FUN11(VAR11, VAR21, "", 0);
    FUN11(VAR11, VAR21, "", 2);
    VAR22 = FUN19(VAR11);
    FUN11(VAR11, VAR21, "", VAR22);
    FUN11(VAR11, VAR21, "", VAR22);
    FUN10(VAR11, VAR21, "", NULL, 0);
    snprintf(VAR20, sizeof(VAR20), "", VAR18, VAR49 - VAR45);
    FUN12(VAR11, VAR20);
    FUN9(VAR11, VAR20, "", "");
    FUN9(VAR11, VAR20, "", "");
    FUN18(VAR11, VAR20, "", VAR49 - VAR45, 0x100);
    FUN11(VAR11, VAR20, "", 1);
    FUN11(VAR11, VAR20, "", 0);
    FUN18(VAR11, VAR20, "", 42, 2);
    FUN20(VAR11, VAR20, "", VAR21);
    FUN9(VAR11, "", "", VAR20);
    snprintf(VAR19, sizeof(VAR19), "", VAR18, VAR50 - VAR45);
    FUN12(VAR11, VAR19);
    FUN9(VAR11, VAR19, "", "");
    FUN9(VAR11, VAR19, "", "");
    FUN18(VAR11, VAR19, "", VAR50 - VAR45, 0x100);
    FUN11(VAR11, VAR19, "", 0);
    FUN11(VAR11, VAR19, "", 0);
    FUN18(VAR11, VAR19, "", 42, 2);
    FUN20(VAR11, VAR19, "", VAR21);
    FUN9(VAR11, "", "", VAR19);
    FUN9(VAR11, "", "", VAR19);
    snprintf(VAR23, sizeof(VAR23), "", VAR18, VAR51 - VAR45);
    FUN12(VAR11, VAR23);
    FUN9(VAR11, VAR23, "", "");
    FUN18(VAR11, VAR23, "", VAR51 - VAR45, 0x1000);
    FUN10(VAR11, VAR23, "", NULL, 0);
    snprintf(VAR24, sizeof(VAR24), "", VAR52);
    FUN12(VAR11, VAR24);
    FUN11(VAR11, VAR24, "", 0);
    FUN9(VAR11, VAR24, "", "");
    FUN9(VAR11, VAR24, "", "");
    FUN18(VAR11, VAR24, "", 0xf800, 0x0, 0x0, 0x7);
    FUN21(VAR11, VAR25, FUN22(VAR11, VAR21));
    FUN10(VAR11, VAR24, "", VAR25, sizeof(VAR25));
    FUN20(VAR11, VAR24, "", VAR21);
    FUN18(VAR11, VAR24, "", 24, 2);
    FUN18(VAR11, VAR24, "", 0, 255);
    for (VAR15 = 0; VAR15 < 12; VAR15++)
    {
        VAR26[VAR15] = FUN2(VAR26[VAR15]);
    }
    FUN10(VAR11, VAR24, "", VAR26, sizeof(VAR26));
    FUN18(VAR11, VAR24, "", VAR52, 0x1000);
    FUN11(VAR11, VAR24, "", 66666666);
    FUN11(VAR11, VAR24, "", 1);
    FUN11(VAR11, VAR24, "", 2);
    FUN11(VAR11, VAR24, "", 3);
    FUN9(VAR11, "", "", VAR24);
VAR34:
    if (VAR29)
    {
        VAR53 *VAR54 = fopen(VAR29, "");
        size_t VAR55;
        VAR55 = fwrite(VAR11, VAR10, 1, VAR54);
        fclose(VAR54);
        if (VAR55 != VAR10)
        {
            FUN23(1);
        }
        FUN23(0);
    }
    VAR8 = FUN24(VAR56, VAR11, VAR10, VAR3);
    if (VAR8 < 0)
    {
        goto VAR33;
    }
    FUN25(VAR11);
    VAR8 = VAR10;
VAR33:
    return VAR8;
}