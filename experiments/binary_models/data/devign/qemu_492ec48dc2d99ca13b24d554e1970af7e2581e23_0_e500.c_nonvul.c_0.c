static int FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5, hwaddr VAR6, hwaddr VAR7)
{
    int VAR8 = -1;
    uint64_t VAR9[] = {0, FUN2(VAR4->VAR10)};
    int VAR11;
    void *VAR12;
    uint8_t VAR13[16];
    uint32_t VAR14 = 400000000;
    uint32_t VAR15 = 400000000;
    int VAR16;
    const char *VAR17 = NULL;
    char VAR18[] = "";
    char VAR19[128];
    char VAR20[128];
    uint32_t VAR21;
    uint32_t VAR22;
    char VAR23[128];
    char VAR24[128];
    char VAR25[128];
    VAR26 *VAR27 = NULL;
    int VAR28;
    uint32_t VAR29[14] = {
        0x2000000,
        0x0,
        0xc0000000,
        0x0,
        0xc0000000,
        0x0,
        0x20000000,
        0x1000000,
        0x0,
        0x0,
        0x0,
        0xe1000000,
        0x0,
        0x10000,
    };
    VAR30 *VAR31;
    const char *VAR32 = NULL;
    VAR31 = FUN3(FUN4(""), 0);
    if (VAR31)
    {
        VAR32 = FUN5(VAR31, "");
        VAR17 = FUN5(VAR31, "");
    }
    if (VAR32)
    {
        char *VAR33;
        VAR33 = FUN6(VAR34, VAR32);
        if (!VAR33)
        {
            goto VAR35;
        }
        VAR12 = FUN7(VAR33, &VAR11);
        if (!VAR12)
        {
            goto VAR35;
        }
        goto VAR36;
    }
    VAR12 = FUN8(&VAR11);
    if (VAR12 == NULL)
    {
        goto VAR35;
    }
    FUN9(VAR12, "", "", 2);
    FUN9(VAR12, "", "", 2);
    FUN10(VAR12, "");
    FUN11(VAR12, "", "", "");
    FUN12(VAR12, "", "", VAR9, sizeof(VAR9));
    FUN10(VAR12, "");
    if (VAR7)
    {
        VAR8 = FUN9(VAR12, "", "", VAR6);
        if (VAR8 < 0)
        {
            fprintf(VAR37, "");
        }
        VAR8 = FUN9(VAR12, "", "", (VAR6 + VAR7));
        if (VAR8 < 0)
        {
            fprintf(VAR37, "");
        }
    }
    VAR8 = FUN11(VAR12, "", "", VAR4->VAR38);
    if (VAR8 < 0)
        fprintf(VAR37, "");
    if (FUN13())
    {
        VAR14 = FUN14();
        VAR15 = FUN15();
        FUN10(VAR12, "");
        FUN11(VAR12, "", "", "");
        FUN16(VAR2, VAR13, sizeof(VAR13));
        FUN12(VAR12, "", "", VAR13, sizeof(VAR13));
    }
    FUN10(VAR12, "");
    FUN9(VAR12, "", "", 1);
    FUN9(VAR12, "", "", 0);
    for (VAR16 = VAR39 - 1; VAR16 >= 0; VAR16--)
    {
        char VAR40[128];
        uint64_t VAR41 = VAR42 + (VAR16 * 0x20);
        for (VAR2 = VAR43; VAR2 != NULL; VAR2 = VAR2->VAR44)
        {
            if (VAR2->VAR45 == VAR16)
            {
                break;
            }
        }
        if (!VAR2)
        {
            continue;
        }
        snprintf(VAR40, sizeof(VAR40), "", VAR2->VAR45);
        FUN10(VAR12, VAR40);
        FUN9(VAR12, VAR40, "", VAR14);
        FUN9(VAR12, VAR40, "", VAR15);
        FUN11(VAR12, VAR40, "", "");
        FUN9(VAR12, VAR40, "", VAR2->VAR45);
        FUN9(VAR12, VAR40, "", VAR2->VAR46);
        FUN9(VAR12, VAR40, "", VAR2->VAR47);
        FUN9(VAR12, VAR40, "", 0x8000);
        FUN9(VAR12, VAR40, "", 0x8000);
        FUN9(VAR12, VAR40, "", 0);
        if (VAR2->VAR45)
        {
            FUN11(VAR12, VAR40, "", "");
            FUN11(VAR12, VAR40, "", "");
            FUN17(VAR12, VAR40, "", VAR41);
        }
        else
        {
            FUN11(VAR12, VAR40, "", "");
        }
    }
    FUN10(VAR12, "");
    snprintf(VAR19, sizeof(VAR19), "", VAR48);
    FUN10(VAR12, VAR19);
    FUN11(VAR12, VAR19, "", "");
    FUN12(VAR12, VAR19, "", VAR18, sizeof(VAR18));
    FUN9(VAR12, VAR19, "", 1);
    FUN9(VAR12, VAR19, "", 1);
    FUN18(VAR12, VAR19, "", 0x0, VAR48 >> 32, VAR48, VAR49);
    FUN9(VAR12, VAR19, "", 0);
    snprintf(VAR20, sizeof(VAR20), "", VAR19, VAR50);
    FUN10(VAR12, VAR20);
    FUN11(VAR12, VAR20, "", "");
    FUN11(VAR12, VAR20, "", "");
    FUN18(VAR12, VAR20, "", VAR50, 0x40000);
    FUN9(VAR12, VAR20, "", 0);
    FUN9(VAR12, VAR20, "", 2);
    VAR21 = FUN19(VAR12);
    FUN9(VAR12, VAR20, "", VAR21);
    FUN9(VAR12, VAR20, "", VAR21);
    FUN12(VAR12, VAR20, "", NULL, 0);
    FUN20(VAR12, VAR51, VAR19, VAR20, "", 1, false);
    FUN20(VAR12, VAR52, VAR19, VAR20, "", 0, true);
    snprintf(VAR23, sizeof(VAR23), "", VAR19, VAR53);
    FUN10(VAR12, VAR23);
    FUN11(VAR12, VAR23, "", "");
    FUN18(VAR12, VAR23, "", VAR53, 0x1000);
    FUN12(VAR12, VAR23, "", NULL, 0);
    snprintf(VAR25, sizeof(VAR25), "", VAR19, VAR54);
    FUN10(VAR12, VAR25);
    FUN11(VAR12, VAR25, "", "");
    FUN18(VAR12, VAR25, "", VAR54, 0x200);
    VAR22 = FUN19(VAR12);
    FUN18(VAR12, VAR25, "", 0x0, 0x100);
    FUN21(VAR12, VAR25, "", VAR20);
    FUN18(VAR12, VAR25, "", 0xe0, 0x0, 0xe1, 0x0, 0xe2, 0x0, 0xe3, 0x0, 0xe4, 0x0, 0xe5, 0x0, 0xe6, 0x0, 0xe7, 0x0);
    FUN9(VAR12, VAR25, "", VAR22);
    FUN9(VAR12, VAR25, "", VAR22);
    snprintf(VAR24, sizeof(VAR24), "", VAR55);
    FUN10(VAR12, VAR24);
    FUN9(VAR12, VAR24, "", 0);
    FUN11(VAR12, VAR24, "", "");
    FUN11(VAR12, VAR24, "", "");
    FUN18(VAR12, VAR24, "", 0xf800, 0x0, 0x0, 0x7);
    VAR27 = FUN22(VAR12, FUN23(VAR12, VAR20), VAR4->VAR56, VAR4->VAR57, &VAR28);
    FUN12(VAR12, VAR24, "", VAR27, VAR28);
    FUN21(VAR12, VAR24, "", VAR20);
    FUN18(VAR12, VAR24, "", 24, 2);
    FUN18(VAR12, VAR24, "", 0, 255);
    for (VAR16 = 0; VAR16 < 14; VAR16++)
    {
        VAR29[VAR16] = FUN24(VAR29[VAR16]);
    }
    FUN9(VAR12, VAR24, "", VAR22);
    FUN12(VAR12, VAR24, "", VAR29, sizeof(VAR29));
    FUN18(VAR12, VAR24, "", VAR55 >> 32, VAR55, 0, 0x1000);
    FUN9(VAR12, VAR24, "", 66666666);
    FUN9(VAR12, VAR24, "", 1);
    FUN9(VAR12, VAR24, "", 2);
    FUN9(VAR12, VAR24, "", 3);
    FUN11(VAR12, "", "", VAR24);
    VAR4->FUN25(VAR4, VAR12);
    if (VAR17)
    {
        FUN12(VAR12, "", "", VAR17, strlen(VAR17) + 1);
    }
VAR36:
    FUN26(VAR12, VAR11);
    VAR8 = FUN27(VAR58, VAR12, VAR11, VAR5);
    if (VAR8 < 0)
    {
        goto VAR35;
    }
    FUN28(VAR12);
    VAR8 = VAR11;
VAR35:
    FUN28(VAR27);
    return VAR8;
}