FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, QCryptoBlockInitFunc VAR6, QCryptoBlockWriteFunc VAR7, void *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    QCryptoBlockCreateOptionsLUKS VAR13;
    VAR9 *VAR14 = NULL;
    VAR15 *VAR16 = NULL;
    VAR15 *VAR17 = NULL;
    VAR15 *VAR18 = NULL;
    size_t VAR19 = 0;
    size_t VAR20;
    VAR21 *VAR22 = NULL;
    VAR23 *VAR24 = NULL;
    char *VAR25;
    const char *VAR26;
    const char *VAR27;
    const char *VAR28;
    const char *VAR29 = NULL;
    const char *VAR30;
    char *VAR31 = NULL;
    QCryptoCipherAlgorithm VAR32 = 0;
    uint64_t VAR33;
    memcpy(&VAR13, &VAR4->VAR34.VAR12, sizeof(VAR13));
    if (!VAR13.VAR35)
    {
        VAR13.VAR36 = 2000;
    }
    if (!VAR13.VAR37)
    {
        VAR13.VAR26 = VAR38;
    }
    if (!VAR13.VAR39)
    {
        VAR13.VAR27 = VAR40;
    }
    if (!VAR13.VAR41)
    {
        VAR13.VAR28 = VAR42;
    }
    if (!VAR13.VAR43)
    {
        VAR13.VAR30 = VAR44;
    }
    if (VAR13.VAR28 == VAR45)
    {
        if (!VAR13.VAR46)
        {
            VAR13.VAR29 = VAR44;
            VAR13.VAR46 = true;
        }
    }
    if (!VAR4->VAR34.VAR12.VAR47)
    {
        FUN2(VAR10, "", VAR5 ? VAR5 : "");
        return -1;
    }
    VAR25 = FUN3(VAR13.VAR47, VAR10);
    if (!VAR25)
    {
        return -1;
    }
    VAR12 = FUN4(VAR11, 1);
    VAR2->VAR8 = VAR12;
    memcpy(VAR12->VAR48.VAR49, VAR50, VAR51);
    VAR12->VAR48.VAR52 = VAR53;
    FUN5(VAR12->VAR48.VAR54);
    VAR26 = FUN6(VAR13.VAR26, VAR10);
    if (!VAR26)
    {
        goto VAR55;
    }
    VAR27 = FUN7(VAR13.VAR27);
    VAR28 = FUN8(VAR13.VAR28);
    if (VAR13.VAR46)
    {
        VAR29 = FUN9(VAR13.VAR29);
        VAR31 = FUN10("", VAR27, VAR28, VAR29);
    }
    else
    {
        VAR31 = FUN10("", VAR27, VAR28);
    }
    VAR30 = FUN9(VAR13.VAR30);
    if (strlen(VAR26) >= VAR56)
    {
        FUN2(VAR10, "", VAR26);
        goto VAR55;
    }
    if (strlen(VAR31) >= VAR57)
    {
        FUN2(VAR10, "", VAR31);
        goto VAR55;
    }
    if (strlen(VAR30) >= VAR58)
    {
        FUN2(VAR10, "", VAR30);
        goto VAR55;
    }
    if (VAR13.VAR28 == VAR45)
    {
        VAR32 = FUN11(VAR13.VAR26, VAR13.VAR29, &VAR14);
        if (VAR14)
        {
            FUN12(VAR10, VAR14);
            goto VAR55;
        }
    }
    else
    {
        VAR32 = VAR13.VAR26;
    }
    strcpy(VAR12->VAR48.VAR59, VAR26);
    strcpy(VAR12->VAR48.VAR27, VAR31);
    strcpy(VAR12->VAR48.VAR60, VAR30);
    VAR12->VAR48.VAR61 = FUN13(VAR13.VAR26);
    if (VAR13.VAR27 == VAR40)
    {
        VAR12->VAR48.VAR61 *= 2;
    }
    if (FUN14(VAR12->VAR48.VAR62, VAR63, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR16 = FUN4(VAR15, VAR12->VAR48.VAR61);
    if (FUN14(VAR16, VAR12->VAR48.VAR61, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR2->VAR22 = FUN15(VAR13.VAR26, VAR13.VAR27, VAR16, VAR12->VAR48.VAR61, VAR10);
    if (!VAR2->VAR22)
    {
        goto VAR55;
    }
    VAR2->VAR64 = VAR13.VAR30;
    VAR2->VAR65 = FUN16(VAR13.VAR26, VAR13.VAR27);
    VAR2->VAR24 = FUN17(VAR13.VAR28, VAR32, VAR13.VAR29, VAR16, VAR12->VAR48.VAR61, VAR10);
    if (!VAR2->VAR24)
    {
        goto VAR55;
    }
    VAR33 = FUN18(VAR13.VAR30, VAR16, VAR12->VAR48.VAR61, VAR12->VAR48.VAR62, VAR63, VAR66, &VAR14);
    if (VAR14)
    {
        FUN12(VAR10, VAR14);
        goto VAR55;
    }
    if (VAR33 > (VAR67 / VAR13.VAR36))
    {
        FUN19(VAR10, VAR68, "", (unsigned long long)VAR33);
        goto VAR55;
    }
    VAR33 = VAR33 * VAR13.VAR36 / 1000;
    VAR33 /= 8;
    if (VAR33 > VAR69)
    {
        FUN19(VAR10, VAR68, "", (unsigned long long)VAR33, VAR69);
        goto VAR55;
    }
    VAR33 = FUN20(VAR33, VAR70);
    VAR12->VAR48.VAR71 = VAR33;
    if (FUN21(VAR13.VAR30, VAR16, VAR12->VAR48.VAR61, VAR12->VAR48.VAR62, VAR63, VAR12->VAR48.VAR71, VAR12->VAR48.VAR72, VAR66, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR19 = VAR12->VAR48.VAR61 * VAR73;
    for (VAR20 = 0; VAR20 < VAR74; VAR20++)
    {
        VAR12->VAR48.VAR75[VAR20].VAR76 = VAR20 == 0 ? VAR77 : VAR78;
        VAR12->VAR48.VAR75[VAR20].VAR79 = VAR73;
        VAR12->VAR48.VAR75[VAR20].VAR80 = (VAR81 / VAR82) + (FUN22(FUN23(VAR19, VAR82), (VAR81 / VAR82)) * VAR20);
    }
    if (FUN14(VAR12->VAR48.VAR75[0].VAR83, VAR63, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR33 = FUN18(VAR13.VAR30, (VAR15 *)VAR25, strlen(VAR25), VAR12->VAR48.VAR75[0].VAR83, VAR63, VAR12->VAR48.VAR61, &VAR14);
    if (VAR14)
    {
        FUN12(VAR10, VAR14);
        goto VAR55;
    }
    if (VAR33 > (VAR67 / VAR13.VAR36))
    {
        FUN19(VAR10, VAR68, "", (unsigned long long)VAR33);
        goto VAR55;
    }
    VAR33 = VAR33 * VAR13.VAR36 / 1000;
    if (VAR33 > VAR69)
    {
        FUN19(VAR10, VAR68, "", (unsigned long long)VAR33, VAR69);
        goto VAR55;
    }
    VAR12->VAR48.VAR75[0].VAR84 = FUN20(VAR33, VAR85);
    VAR17 = FUN4(VAR15, VAR12->VAR48.VAR61);
    if (FUN21(VAR13.VAR30, (VAR15 *)VAR25, strlen(VAR25), VAR12->VAR48.VAR75[0].VAR83, VAR63, VAR12->VAR48.VAR75[0].VAR84, VAR17, VAR12->VAR48.VAR61, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR22 = FUN15(VAR13.VAR26, VAR13.VAR27, VAR17, VAR12->VAR48.VAR61, VAR10);
    if (!VAR22)
    {
        goto VAR55;
    }
    VAR24 = FUN17(VAR13.VAR28, VAR32, VAR13.VAR29, VAR17, VAR12->VAR48.VAR61, VAR10);
    if (!VAR24)
    {
        goto VAR55;
    }
    VAR18 = FUN4(VAR15, VAR19);
    if (FUN24(VAR13.VAR30, VAR12->VAR48.VAR61, VAR12->VAR48.VAR75[0].VAR79, VAR16, VAR18, VAR10) < 0)
    {
        goto VAR55;
    }
    if (FUN25(VAR22, VAR2->VAR65, VAR24, VAR82, 0, VAR18, VAR19, VAR10) < 0)
    {
        goto VAR55;
    }
    VAR12->VAR48.VAR86 = (VAR81 / VAR82) + (FUN22(FUN23(VAR19, VAR82), (VAR81 / VAR82)) * VAR74);
    VAR2->VAR87 = VAR82;
    VAR2->VAR86 = VAR12->VAR48.VAR86 * VAR2->VAR87;
    FUN26(VAR2, VAR2->VAR86, VAR8, &VAR14);
    if (VAR14)
    {
        FUN12(VAR10, VAR14);
        goto VAR55;
    }
    FUN27(&VAR12->VAR48.VAR52);
    FUN28(&VAR12->VAR48.VAR86);
    FUN28(&VAR12->VAR48.VAR61);
    FUN28(&VAR12->VAR48.VAR71);
    for (VAR20 = 0; VAR20 < VAR74; VAR20++)
    {
        FUN28(&VAR12->VAR48.VAR75[VAR20].VAR76);
        FUN28(&VAR12->VAR48.VAR75[VAR20].VAR84);
        FUN28(&VAR12->VAR48.VAR75[VAR20].VAR80);
        FUN28(&VAR12->VAR48.VAR75[VAR20].VAR79);
    }
    FUN29(VAR2, 0, (const VAR15 *)&VAR12->VAR48, sizeof(VAR12->VAR48), VAR8, &VAR14);
    FUN30(&VAR12->VAR48.VAR52);
    FUN31(&VAR12->VAR48.VAR86);
    FUN31(&VAR12->VAR48.VAR61);
    FUN31(&VAR12->VAR48.VAR71);
    for (VAR20 = 0; VAR20 < VAR74; VAR20++)
    {
        FUN31(&VAR12->VAR48.VAR75[VAR20].VAR76);
        FUN31(&VAR12->VAR48.VAR75[VAR20].VAR84);
        FUN31(&VAR12->VAR48.VAR75[VAR20].VAR80);
        FUN31(&VAR12->VAR48.VAR75[VAR20].VAR79);
    }
    if (VAR14)
    {
        FUN12(VAR10, VAR14);
        goto VAR55;
    }
    if (FUN29(VAR2, VAR12->VAR48.VAR75[0].VAR80 * VAR82, VAR18, VAR19, VAR8, VAR10) != VAR19)
    {
        goto VAR55;
    }
    VAR12->VAR26 = VAR13.VAR26;
    VAR12->VAR27 = VAR13.VAR27;
    VAR12->VAR28 = VAR13.VAR28;
    VAR12->VAR29 = VAR13.VAR29;
    VAR12->VAR30 = VAR13.VAR30;
    memset(VAR16, 0, VAR12->VAR48.VAR61);
    FUN32(VAR16);
    memset(VAR17, 0, VAR12->VAR48.VAR61);
    FUN32(VAR17);
    FUN32(VAR18);
    FUN32(VAR25);
    FUN32(VAR31);
    FUN33(VAR24);
    FUN34(VAR22);
    return 0;
VAR55:
    if (VAR16)
    {
        memset(VAR16, 0, VAR12->VAR48.VAR61);
    }
    FUN32(VAR16);
    if (VAR17)
    {
        memset(VAR17, 0, VAR12->VAR48.VAR61);
    }
    FUN32(VAR17);
    FUN32(VAR18);
    FUN32(VAR25);
    FUN32(VAR31);
    FUN33(VAR24);
    FUN34(VAR22);
    FUN32(VAR12);
    return -1;
}