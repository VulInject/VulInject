FUN1(VAR1 *VAR2, VAR3 *VAR4, QCryptoBlockInitFunc VAR5, QCryptoBlockWriteFunc VAR6, void *VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11;
    QCryptoBlockCreateOptionsLUKS VAR12;
    VAR8 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    VAR14 *VAR16 = NULL;
    VAR14 *VAR17 = NULL;
    size_t VAR18 = 0;
    size_t VAR19;
    VAR20 *VAR21 = NULL;
    VAR22 *VAR23 = NULL;
    char *VAR24;
    const char *VAR25;
    const char *VAR26;
    const char *VAR27;
    const char *VAR28 = NULL;
    const char *VAR29;
    char *VAR30 = NULL;
    QCryptoCipherAlgorithm VAR31 = 0;
    uint64_t VAR32;
    memcpy(&VAR12, &VAR4->VAR33.VAR11, sizeof(VAR12));
    if (!VAR12.VAR34)
    {
        VAR12.VAR35 = 2000;
    }
    if (!VAR12.VAR36)
    {
        VAR12.VAR25 = VAR37;
    }
    if (!VAR12.VAR38)
    {
        VAR12.VAR26 = VAR39;
    }
    if (!VAR12.VAR40)
    {
        VAR12.VAR27 = VAR41;
    }
    if (!VAR12.VAR42)
    {
        VAR12.VAR29 = VAR43;
    }
    if (VAR12.VAR27 == VAR44)
    {
        if (!VAR12.VAR45)
        {
            VAR12.VAR28 = VAR43;
            VAR12.VAR45 = true;
        }
    }
    if (!VAR4->VAR33.VAR11.VAR46)
    {
        FUN2(VAR9, "");
        return -1;
    }
    VAR24 = FUN3(VAR12.VAR46, VAR9);
    if (!VAR24)
    {
        return -1;
    }
    VAR11 = FUN4(VAR10, 1);
    VAR2->VAR7 = VAR11;
    memcpy(VAR11->VAR47.VAR48, VAR49, VAR50);
    VAR11->VAR47.VAR51 = VAR52;
    FUN5(VAR11->VAR47.VAR53);
    VAR25 = FUN6(VAR12.VAR25, VAR9);
    if (!VAR25)
    {
        goto VAR54;
    }
    VAR26 = VAR55[VAR12.VAR26];
    VAR27 = VAR56[VAR12.VAR27];
    if (VAR12.VAR45)
    {
        VAR28 = VAR57[VAR12.VAR28];
        VAR30 = FUN7("", VAR26, VAR27, VAR28);
    }
    else
    {
        VAR30 = FUN7("", VAR26, VAR27);
    }
    VAR29 = VAR57[VAR12.VAR29];
    if (strlen(VAR25) >= VAR58)
    {
        FUN2(VAR9, "", VAR25);
        goto VAR54;
    }
    if (strlen(VAR30) >= VAR59)
    {
        FUN2(VAR9, "", VAR30);
        goto VAR54;
    }
    if (strlen(VAR29) >= VAR60)
    {
        FUN2(VAR9, "", VAR29);
        goto VAR54;
    }
    if (VAR12.VAR27 == VAR44)
    {
        VAR31 = FUN8(VAR12.VAR25, VAR12.VAR28, &VAR13);
        if (VAR13)
        {
            FUN9(VAR9, VAR13);
            goto VAR54;
        }
    }
    else
    {
        VAR31 = VAR12.VAR25;
    }
    strcpy(VAR11->VAR47.VAR61, VAR25);
    strcpy(VAR11->VAR47.VAR26, VAR30);
    strcpy(VAR11->VAR47.VAR62, VAR29);
    VAR11->VAR47.VAR63 = FUN10(VAR12.VAR25);
    if (VAR12.VAR26 == VAR39)
    {
        VAR11->VAR47.VAR63 *= 2;
    }
    if (FUN11(VAR11->VAR47.VAR64, VAR65, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR15 = FUN4(VAR14, VAR11->VAR47.VAR63);
    if (FUN11(VAR15, VAR11->VAR47.VAR63, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR2->VAR21 = FUN12(VAR12.VAR25, VAR12.VAR26, VAR15, VAR11->VAR47.VAR63, VAR9);
    if (!VAR2->VAR21)
    {
        goto VAR54;
    }
    VAR2->VAR66 = VAR12.VAR29;
    VAR2->VAR67 = FUN13(VAR12.VAR25, VAR12.VAR26);
    VAR2->VAR23 = FUN14(VAR12.VAR27, VAR31, VAR12.VAR28, VAR15, VAR11->VAR47.VAR63, VAR9);
    if (!VAR2->VAR23)
    {
        goto VAR54;
    }
    VAR32 = FUN15(VAR12.VAR29, VAR15, VAR11->VAR47.VAR63, VAR11->VAR47.VAR64, VAR65, VAR68, &VAR13);
    if (VAR13)
    {
        FUN9(VAR9, VAR13);
        goto VAR54;
    }
    if (VAR32 > (VAR69 / VAR12.VAR35))
    {
        FUN16(VAR9, VAR70, "", (unsigned long long)VAR32);
        goto VAR54;
    }
    VAR32 = VAR32 * VAR12.VAR35 / 1000;
    VAR32 /= 8;
    if (VAR32 > VAR71)
    {
        FUN16(VAR9, VAR70, "", (unsigned long long)VAR32, VAR71);
        goto VAR54;
    }
    VAR32 = FUN17(VAR32, VAR72);
    VAR11->VAR47.VAR73 = VAR32;
    if (FUN18(VAR12.VAR29, VAR15, VAR11->VAR47.VAR63, VAR11->VAR47.VAR64, VAR65, VAR11->VAR47.VAR73, VAR11->VAR47.VAR74, VAR68, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR18 = VAR11->VAR47.VAR63 * VAR75;
    for (VAR19 = 0; VAR19 < VAR76; VAR19++)
    {
        VAR11->VAR47.VAR77[VAR19].VAR78 = VAR19 == 0 ? VAR79 : VAR80;
        VAR11->VAR47.VAR77[VAR19].VAR81 = VAR75;
        VAR11->VAR47.VAR77[VAR19].VAR82 = (VAR83 / VAR84) + (FUN19(FUN20(VAR18, VAR84), (VAR83 / VAR84)) * VAR19);
    }
    if (FUN11(VAR11->VAR47.VAR77[0].VAR85, VAR65, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR32 = FUN15(VAR12.VAR29, (VAR14 *)VAR24, strlen(VAR24), VAR11->VAR47.VAR77[0].VAR85, VAR65, VAR11->VAR47.VAR63, &VAR13);
    if (VAR13)
    {
        FUN9(VAR9, VAR13);
        goto VAR54;
    }
    if (VAR32 > (VAR69 / VAR12.VAR35))
    {
        FUN16(VAR9, VAR70, "", (unsigned long long)VAR32);
        goto VAR54;
    }
    VAR32 = VAR32 * VAR12.VAR35 / 1000;
    if (VAR32 > VAR71)
    {
        FUN16(VAR9, VAR70, "", (unsigned long long)VAR32, VAR71);
        goto VAR54;
    }
    VAR11->VAR47.VAR77[0].VAR86 = FUN17(VAR32, VAR87);
    VAR16 = FUN4(VAR14, VAR11->VAR47.VAR63);
    if (FUN18(VAR12.VAR29, (VAR14 *)VAR24, strlen(VAR24), VAR11->VAR47.VAR77[0].VAR85, VAR65, VAR11->VAR47.VAR77[0].VAR86, VAR16, VAR11->VAR47.VAR63, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR21 = FUN12(VAR12.VAR25, VAR12.VAR26, VAR16, VAR11->VAR47.VAR63, VAR9);
    if (!VAR21)
    {
        goto VAR54;
    }
    VAR23 = FUN14(VAR12.VAR27, VAR31, VAR12.VAR28, VAR16, VAR11->VAR47.VAR63, VAR9);
    if (!VAR23)
    {
        goto VAR54;
    }
    VAR17 = FUN4(VAR14, VAR18);
    if (FUN21(VAR12.VAR29, VAR11->VAR47.VAR63, VAR11->VAR47.VAR77[0].VAR81, VAR15, VAR17, VAR9) < 0)
    {
        goto VAR54;
    }
    if (FUN22(VAR21, VAR2->VAR67, VAR23, VAR84, 0, VAR17, VAR18, VAR9) < 0)
    {
        goto VAR54;
    }
    VAR11->VAR47.VAR88 = (VAR83 / VAR84) + (FUN19(FUN20(VAR18, VAR84), (VAR83 / VAR84)) * VAR76);
    VAR2->VAR88 = VAR11->VAR47.VAR88 * VAR84;
    FUN23(VAR2, VAR7, VAR2->VAR88, &VAR13);
    if (VAR13)
    {
        FUN9(VAR9, VAR13);
        goto VAR54;
    }
    FUN24(&VAR11->VAR47.VAR51);
    FUN25(&VAR11->VAR47.VAR88);
    FUN25(&VAR11->VAR47.VAR63);
    FUN25(&VAR11->VAR47.VAR73);
    for (VAR19 = 0; VAR19 < VAR76; VAR19++)
    {
        FUN25(&VAR11->VAR47.VAR77[VAR19].VAR78);
        FUN25(&VAR11->VAR47.VAR77[VAR19].VAR86);
        FUN25(&VAR11->VAR47.VAR77[VAR19].VAR82);
        FUN25(&VAR11->VAR47.VAR77[VAR19].VAR81);
    }
    FUN26(VAR2, VAR7, 0, (const VAR14 *)&VAR11->VAR47, sizeof(VAR11->VAR47), &VAR13);
    FUN27(&VAR11->VAR47.VAR51);
    FUN28(&VAR11->VAR47.VAR88);
    FUN28(&VAR11->VAR47.VAR63);
    FUN28(&VAR11->VAR47.VAR73);
    for (VAR19 = 0; VAR19 < VAR76; VAR19++)
    {
        FUN28(&VAR11->VAR47.VAR77[VAR19].VAR78);
        FUN28(&VAR11->VAR47.VAR77[VAR19].VAR86);
        FUN28(&VAR11->VAR47.VAR77[VAR19].VAR82);
        FUN28(&VAR11->VAR47.VAR77[VAR19].VAR81);
    }
    if (VAR13)
    {
        FUN9(VAR9, VAR13);
        goto VAR54;
    }
    if (FUN26(VAR2, VAR7, VAR11->VAR47.VAR77[0].VAR82 * VAR84, VAR17, VAR18, VAR9) != VAR18)
    {
        goto VAR54;
    }
    VAR11->VAR25 = VAR12.VAR25;
    VAR11->VAR26 = VAR12.VAR26;
    VAR11->VAR27 = VAR12.VAR27;
    VAR11->VAR28 = VAR12.VAR28;
    VAR11->VAR29 = VAR12.VAR29;
    memset(VAR15, 0, VAR11->VAR47.VAR63);
    FUN29(VAR15);
    memset(VAR16, 0, VAR11->VAR47.VAR63);
    FUN29(VAR16);
    FUN29(VAR17);
    FUN29(VAR24);
    FUN29(VAR30);
    FUN30(VAR23);
    FUN31(VAR21);
    return 0;
VAR54:
    if (VAR15)
    {
        memset(VAR15, 0, VAR11->VAR47.VAR63);
    }
    FUN29(VAR15);
    if (VAR16)
    {
        memset(VAR16, 0, VAR11->VAR47.VAR63);
    }
    FUN29(VAR16);
    FUN29(VAR17);
    FUN29(VAR24);
    FUN29(VAR30);
    FUN30(VAR23);
    FUN31(VAR21);
    FUN29(VAR11);
    return -1;
}