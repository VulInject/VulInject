static int FUN1(VAR1 *VAR2, const char *VAR3, struct VAR4 *VAR5, VAR6 *VAR7)
{
    int VAR8 = 0, VAR9 = 0, VAR10 = 0;
    int64_t VAR11 = 0;
    enum KeyType VAR12 = VAR13;
    uint8_t VAR14[16] = "";
    int VAR15 = 0;
    char VAR16[VAR17] = "";
    char VAR18[VAR17];
    const char *VAR19;
    int VAR20 = 0;
    int64_t VAR21 = 0;
    int64_t VAR22 = -1;
    VAR23 *VAR24 = NULL;
    struct variant_info VAR25;
    char VAR26[VAR17];
    struct VAR27 *VAR28 = NULL;
    if (!VAR7 && VAR2->VAR29 && VAR2->VAR30)
    {
        VAR7 = VAR2->VAR30;
        VAR8 = FUN2(VAR2->VAR31, &VAR2->VAR30, VAR3);
        if (VAR8 == VAR32)
        {
            return VAR8;
        }
        else if (VAR8 < 0)
        {
            if (VAR8 != VAR33)
                FUN3(VAR2->VAR31, VAR34, "", VAR3, FUN4(VAR8));
            VAR7 = NULL;
        }
    }
    if (!VAR7)
    {
        VAR35 *VAR36 = NULL;
        FUN5(&VAR36, "", "", 0);
        FUN5(&VAR36, "", VAR2->VAR37, 0);
        FUN5(&VAR36, "", VAR2->VAR38, 0);
        FUN5(&VAR36, "", VAR2->VAR39, 0);
        FUN5(&VAR36, "", VAR2->VAR40, 0);
        if (VAR2->VAR29)
            FUN5(&VAR36, "", "", 0);
        VAR8 = VAR2->VAR31->FUN6(VAR2->VAR31, &VAR7, VAR3, VAR41, &VAR36);
        FUN7(&VAR36);
        if (VAR8 < 0)
            return VAR8;
        if (VAR2->VAR29)
            VAR2->VAR30 = VAR7;
        else
            VAR20 = 1;
        VAR8 = FUN8(VAR2, &VAR7, VAR3);
        if (VAR8 < 0)
            return VAR8;
        VAR20 = 1;
    }
    if (FUN9(VAR7, "", VAR42, &VAR24) >= 0)
        VAR3 = VAR24;
    FUN10(VAR7, VAR18, sizeof(VAR18));
    if (strcmp(VAR18, ""))
    {
        VAR8 = VAR43;
        goto VAR44;
    }
    if (VAR5)
    {
        FUN11(VAR5);
        VAR5->VAR45 = 0;
        VAR5->VAR46 = VAR47;
    }
    while (!FUN12(VAR7))
    {
        FUN10(VAR7, VAR18, sizeof(VAR18));
        if (FUN13(VAR18, "", &VAR19))
        {
            VAR10 = 1;
            memset(&VAR25, 0, sizeof(VAR25));
            FUN14(VAR19, (VAR48)VAR49, &VAR25);
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            struct key_info VAR50 = {{0}};
            FUN14(VAR19, (VAR48)VAR51, &VAR50);
            VAR12 = VAR13;
            VAR15 = 0;
            if (!strcmp(VAR50.VAR52, ""))
                VAR12 = VAR53;
            if (!strcmp(VAR50.VAR52, ""))
                VAR12 = VAR54;
            if (!FUN15(VAR50.VAR14, "", 2) || !FUN15(VAR50.VAR14, "", 2))
            {
                FUN16(VAR14, VAR50.VAR14 + 2);
                VAR15 = 1;
            }
            FUN17(VAR16, VAR50.VAR55, sizeof(VAR16));
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            struct rendition_info VAR50 = {{0}};
            FUN14(VAR19, (VAR48)VAR56, &VAR50);
            FUN18(VAR2, &VAR50, VAR3);
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            VAR8 = FUN19(VAR2, &VAR5, VAR3);
            if (VAR8 < 0)
                goto VAR44;
            VAR5->VAR57 = FUN20(VAR19, NULL, 10) * VAR58;
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            VAR8 = FUN19(VAR2, &VAR5, VAR3);
            if (VAR8 < 0)
                goto VAR44;
            VAR5->VAR59 = FUN21(VAR19);
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            VAR8 = FUN19(VAR2, &VAR5, VAR3);
            if (VAR8 < 0)
                goto VAR44;
            if (!strcmp(VAR19, ""))
                VAR5->VAR46 = VAR60;
            else if (!strcmp(VAR19, ""))
                VAR5->VAR46 = VAR61;
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            struct init_section_info VAR50 = {{0}};
            VAR8 = FUN19(VAR2, &VAR5, VAR3);
            if (VAR8 < 0)
                goto VAR44;
            FUN14(VAR19, (VAR48)VAR62, &VAR50);
            VAR28 = FUN22(VAR5, &VAR50, VAR3);
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            if (VAR5)
                VAR5->VAR45 = 1;
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            VAR9 = 1;
            VAR11 = FUN23(VAR19) * VAR58;
        }
        else if (FUN13(VAR18, "", &VAR19))
        {
            VAR22 = FUN20(VAR19, NULL, 10);
            VAR19 = strchr(VAR19, '');
            if (VAR19)
                VAR21 = FUN20(VAR19 + 1, NULL, 10);
        }
        else if (FUN13(VAR18, "", NULL))
        {
            continue;
        }
        else if (VAR18[0])
        {
            if (VAR10)
            {
                if (!FUN24(VAR2, &VAR25, VAR18, VAR3))
                {
                    VAR8 = FUN25(VAR63);
                    goto VAR44;
                }
                VAR10 = 0;
            }
            if (VAR9)
            {
                struct VAR27 *VAR64;
                if (!VAR5)
                {
                    if (!FUN24(VAR2, 0, VAR3, NULL))
                    {
                        VAR8 = FUN25(VAR63);
                        goto VAR44;
                    }
                    VAR5 = VAR2->VAR65[VAR2->VAR66 - 1];
                }
                VAR64 = FUN26(sizeof(struct VAR27));
                if (!VAR64)
                {
                    VAR8 = FUN25(VAR63);
                    goto VAR44;
                }
                VAR64->VAR11 = VAR11;
                VAR64->VAR12 = VAR12;
                if (VAR15)
                {
                    memcpy(VAR64->VAR14, VAR14, sizeof(VAR14));
                }
                else
                {
                    int VAR67 = VAR5->VAR59 + VAR5->VAR68;
                    memset(VAR64->VAR14, 0, sizeof(VAR64->VAR14));
                    FUN27(VAR64->VAR14 + 12, VAR67);
                }
                if (VAR12 != VAR13)
                {
                    FUN28(VAR26, sizeof(VAR26), VAR3, VAR16);
                    VAR64->VAR16 = FUN29(VAR26);
                    if (!VAR64->VAR16)
                    {
                        FUN30(VAR64);
                        VAR8 = FUN25(VAR63);
                        goto VAR44;
                    }
                }
                else
                {
                    VAR64->VAR16 = NULL;
                }
                FUN28(VAR26, sizeof(VAR26), VAR3, VAR18);
                VAR64->VAR3 = FUN29(VAR26);
                if (!VAR64->VAR3)
                {
                    FUN30(VAR64->VAR16);
                    FUN30(VAR64);
                    VAR8 = FUN25(VAR63);
                    goto VAR44;
                }
                FUN31(&VAR5->VAR69, &VAR5->VAR68, VAR64);
                VAR9 = 0;
                VAR64->VAR70 = VAR22;
                if (VAR22 >= 0)
                {
                    VAR64->VAR71 = VAR21;
                    VAR21 += VAR22;
                    VAR22 = -1;
                }
                else
                {
                    VAR64->VAR71 = 0;
                    VAR21 = 0;
                }
                VAR64->VAR72 = VAR28;
            }
        }
    }
    if (VAR5)
        VAR5->VAR73 = FUN32();
VAR44:
    FUN30(VAR24);
    if (VAR20)
        FUN33(VAR2->VAR31, &VAR7);
    return VAR8;
}