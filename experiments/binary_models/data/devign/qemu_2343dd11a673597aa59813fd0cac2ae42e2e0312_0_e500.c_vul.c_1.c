static int FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5, hwaddr VAR6, hwaddr VAR7, hwaddr VAR8, hwaddr VAR9, bool VAR10)
{
    VAR11 *VAR12 = VAR13->VAR14;
    int VAR15 = -1;
    uint64_t VAR16[] = {0, FUN2(VAR2->VAR17)};
    int VAR18;
    void *VAR19;
    uint8_t VAR20[16];
    uint32_t VAR21 = 400000000;
    uint32_t VAR22 = 400000000;
    int VAR23;
    char VAR24[] = "";
    char VAR25[128];
    char VAR26[128];
    uint32_t VAR27;
    uint32_t VAR28;
    char VAR29[128];
    char VAR30[128];
    char VAR31[128];
    VAR32 *VAR33 = NULL;
    int VAR34;
    uint32_t VAR35[14] = {
        0x2000000,
        0x0,
        VAR4->VAR36,
        VAR4->VAR37 >> 32,
        VAR4->VAR37,
        0x0,
        0x20000000,
        0x1000000,
        0x0,
        0x0,
        VAR4->VAR38 >> 32,
        VAR4->VAR38,
        0x0,
        0x10000,
    };
    VAR39 *VAR40 = FUN3();
    const char *VAR41 = FUN4(VAR40, "");
    const char *VAR42 = FUN4(VAR40, "");
    if (VAR41)
    {
        char *VAR43;
        VAR43 = FUN5(VAR44, VAR41);
        if (!VAR43)
        {
            goto VAR45;
        }
        VAR19 = FUN6(VAR43, &VAR18);
        if (!VAR19)
        {
            goto VAR45;
        }
        goto VAR46;
    }
    VAR19 = FUN7(&VAR18);
    if (VAR19 == NULL)
    {
        goto VAR45;
    }
    FUN8(VAR19, "", "", 2);
    FUN8(VAR19, "", "", 2);
    FUN9(VAR19, "");
    FUN10(VAR19, "", "", "");
    FUN11(VAR19, "", "", VAR16, sizeof(VAR16));
    FUN9(VAR19, "");
    if (VAR7)
    {
        VAR15 = FUN8(VAR19, "", "", VAR6);
        if (VAR15 < 0)
        {
            fprintf(VAR47, "");
        }
        VAR15 = FUN8(VAR19, "", "", (VAR6 + VAR7));
        if (VAR15 < 0)
        {
            fprintf(VAR47, "");
        }
    }
    if (VAR8 != -1ULL)
    {
        FUN12(VAR19, "", "", VAR8 >> 32, VAR8, VAR9 >> 32, VAR9);
    }
    VAR15 = FUN10(VAR19, "", "", VAR2->VAR48);
    if (VAR15 < 0)
        fprintf(VAR47, "");
    if (FUN13())
    {
        VAR21 = FUN14();
        VAR22 = FUN15();
        FUN9(VAR19, "");
        FUN10(VAR19, "", "", "");
        FUN16(VAR12, VAR20, sizeof(VAR20));
        FUN11(VAR19, "", "", VAR20, sizeof(VAR20));
        if (FUN17(VAR12))
        {
            FUN11(VAR19, "", "", NULL, 0);
        }
    }
    FUN9(VAR19, "");
    FUN8(VAR19, "", "", 1);
    FUN8(VAR19, "", "", 0);
    for (VAR23 = VAR49 - 1; VAR23 >= 0; VAR23--)
    {
        VAR50 *VAR51;
        VAR52 *VAR53;
        char VAR54[128];
        uint64_t VAR55 = VAR4->VAR56 + (VAR23 * 0x20);
        VAR51 = FUN18(VAR23);
        if (VAR51 == NULL)
        {
            continue;
        }
        VAR12 = VAR51->VAR14;
        VAR53 = FUN19(VAR51);
        snprintf(VAR54, sizeof(VAR54), "", FUN20(VAR53));
        FUN9(VAR19, VAR54);
        FUN8(VAR19, VAR54, "", VAR21);
        FUN8(VAR19, VAR54, "", VAR22);
        FUN10(VAR19, VAR54, "", "");
        FUN8(VAR19, VAR54, "", FUN20(VAR53));
        FUN8(VAR19, VAR54, "", VAR12->VAR57);
        FUN8(VAR19, VAR54, "", VAR12->VAR58);
        FUN8(VAR19, VAR54, "", 0x8000);
        FUN8(VAR19, VAR54, "", 0x8000);
        FUN8(VAR19, VAR54, "", 0);
        if (VAR51->VAR59)
        {
            FUN10(VAR19, VAR54, "", "");
            FUN10(VAR19, VAR54, "", "");
            FUN21(VAR19, VAR54, "", VAR55);
        }
        else
        {
            FUN10(VAR19, VAR54, "", "");
        }
    }
    FUN9(VAR19, "");
    snprintf(VAR25, sizeof(VAR25), "" VAR60, VAR4->VAR61);
    FUN9(VAR19, VAR25);
    FUN10(VAR19, VAR25, "", "");
    FUN11(VAR19, VAR25, "", VAR24, sizeof(VAR24));
    FUN8(VAR19, VAR25, "", 1);
    FUN8(VAR19, VAR25, "", 1);
    FUN12(VAR19, VAR25, "", 0x0, VAR4->VAR61 >> 32, VAR4->VAR61, VAR62);
    FUN8(VAR19, VAR25, "", 0);
    snprintf(VAR26, sizeof(VAR26), "", VAR25, VAR63);
    FUN9(VAR19, VAR26);
    FUN10(VAR19, VAR26, "", "");
    FUN10(VAR19, VAR26, "", "");
    FUN12(VAR19, VAR26, "", VAR63, 0x40000);
    FUN8(VAR19, VAR26, "", 0);
    FUN8(VAR19, VAR26, "", 2);
    VAR27 = FUN22(VAR19);
    FUN8(VAR19, VAR26, "", VAR27);
    FUN8(VAR19, VAR26, "", VAR27);
    FUN11(VAR19, VAR26, "", NULL, 0);
    if (VAR64[1])
    {
        FUN23(VAR19, VAR65, VAR25, VAR26, "", 1, false);
    }
    if (VAR64[0])
    {
        FUN23(VAR19, VAR66, VAR25, VAR26, "", 0, true);
    }
    snprintf(VAR29, sizeof(VAR29), "", VAR25, VAR67);
    FUN9(VAR19, VAR29);
    FUN10(VAR19, VAR29, "", "");
    FUN12(VAR19, VAR29, "", VAR67, 0x1000);
    FUN11(VAR19, VAR29, "", NULL, 0);
    snprintf(VAR31, sizeof(VAR31), "", VAR25, VAR68);
    FUN9(VAR19, VAR31);
    FUN10(VAR19, VAR31, "", "");
    FUN12(VAR19, VAR31, "", VAR68, 0x200);
    VAR28 = FUN22(VAR19);
    FUN12(VAR19, VAR31, "", 0x0, 0x100);
    FUN24(VAR19, VAR31, "", VAR26);
    FUN12(VAR19, VAR31, "", 0xe0, 0x0, 0xe1, 0x0, 0xe2, 0x0, 0xe3, 0x0, 0xe4, 0x0, 0xe5, 0x0, 0xe6, 0x0, 0xe7, 0x0);
    FUN8(VAR19, VAR31, "", VAR28);
    FUN8(VAR19, VAR31, "", VAR28);
    snprintf(VAR30, sizeof(VAR30), "", VAR4->VAR61 + VAR69);
    FUN9(VAR19, VAR30);
    FUN8(VAR19, VAR30, "", 0);
    FUN10(VAR19, VAR30, "", "");
    FUN10(VAR19, VAR30, "", "");
    FUN12(VAR19, VAR30, "", 0xf800, 0x0, 0x0, 0x7);
    VAR33 = FUN25(VAR19, FUN26(VAR19, VAR26), VAR4->VAR70, VAR4->VAR71, &VAR34);
    FUN11(VAR19, VAR30, "", VAR33, VAR34);
    FUN24(VAR19, VAR30, "", VAR26);
    FUN12(VAR19, VAR30, "", 24, 2);
    FUN12(VAR19, VAR30, "", 0, 255);
    for (VAR23 = 0; VAR23 < 14; VAR23++)
    {
        VAR35[VAR23] = FUN27(VAR35[VAR23]);
    }
    FUN8(VAR19, VAR30, "", VAR28);
    FUN11(VAR19, VAR30, "", VAR35, sizeof(VAR35));
    FUN12(VAR19, VAR30, "", (VAR4->VAR61 + VAR69) >> 32, (VAR4->VAR61 + VAR69), 0, 0x1000);
    FUN8(VAR19, VAR30, "", 66666666);
    FUN8(VAR19, VAR30, "", 1);
    FUN8(VAR19, VAR30, "", 2);
    FUN8(VAR19, VAR30, "", 3);
    FUN10(VAR19, "", "", VAR30);
    if (VAR4->VAR72)
    {
        FUN28(VAR19, VAR25, VAR26);
    }
    if (VAR4->VAR73)
    {
        FUN29(VAR4, VAR19, VAR26);
    }
    VAR4->FUN30(VAR4, VAR19);
    if (VAR42)
    {
        FUN11(VAR19, "", "", VAR42, strlen(VAR42) + 1);
    }
VAR46:
    if (!VAR10)
    {
        FUN31(VAR19, VAR18);
        FUN32(VAR5, VAR19, VAR18);
    }
    VAR15 = VAR18;
VAR45:
    FUN33(VAR33);
    return VAR15;