FUN1(VAR1 *VAR2, VAR3 *VAR4, QCryptoBlockReadFunc VAR5, void *VAR6, unsigned int VAR7, VAR8 **VAR9)
{
    VAR10 *VAR11;
    VAR8 *VAR12 = NULL;
    int VAR13 = 0;
    size_t VAR14;
    ssize_t VAR15;
    VAR16 *VAR17 = NULL;
    size_t VAR18;
    char *VAR19, *VAR20;
    QCryptoCipherMode VAR21;
    QCryptoCipherAlgorithm VAR22;
    QCryptoIVGenAlgorithm VAR23;
    QCryptoCipherAlgorithm VAR24;
    QCryptoHashAlgorithm VAR25;
    QCryptoHashAlgorithm VAR26;
    char *VAR27 = NULL;
    if (!(VAR7 & VAR28))
    {
        if (!VAR4->VAR29.VAR11.VAR30)
        {
            FUN2(VAR9, "");
            return -1;
        }
        VAR27 = FUN3(VAR4->VAR29.VAR11.VAR30, VAR9);
        if (!VAR27)
        {
            return -1;
        }
    }
    VAR11 = FUN4(VAR10, 1);
    VAR2->VAR6 = VAR11;
    VAR15 = FUN5(VAR2, 0, (VAR16 *)&VAR11->VAR31, sizeof(VAR11->VAR31), VAR6, VAR9);
    if (VAR15 < 0)
    {
        VAR13 = VAR15;
        goto VAR32;
    }
    FUN6(&VAR11->VAR31.VAR33);
    FUN7(&VAR11->VAR31.VAR34);
    FUN7(&VAR11->VAR31.VAR35);
    FUN7(&VAR11->VAR31.VAR36);
    for (VAR14 = 0; VAR14 < VAR37; VAR14++)
    {
        FUN7(&VAR11->VAR31.VAR38[VAR14].VAR39);
        FUN7(&VAR11->VAR31.VAR38[VAR14].VAR40);
        FUN7(&VAR11->VAR31.VAR38[VAR14].VAR41);
        FUN7(&VAR11->VAR31.VAR38[VAR14].VAR42);
    }
    if (memcmp(VAR11->VAR31.VAR43, VAR44, VAR45) != 0)
    {
        FUN2(VAR9, "");
        VAR13 = -VAR46;
        goto VAR32;
    }
    if (VAR11->VAR31.VAR33 != VAR47)
    {
        FUN2(VAR9, "" VAR48 "", VAR11->VAR31.VAR33);
        VAR13 = -VAR49;
        goto VAR32;
    }
    VAR19 = strchr(VAR11->VAR31.VAR50, '');
    if (!VAR19)
    {
        VAR13 = -VAR46;
        FUN2(VAR9, "", VAR11->VAR31.VAR50);
        goto VAR32;
    }
    *VAR19 = '';
    VAR19++;
    VAR20 = strchr(VAR19, '');
    if (!VAR20)
    {
        VAR26 = 0;
    }
    else
    {
        *VAR20 = '';
        VAR20++;
        VAR26 = FUN8(VAR20, &VAR12);
        if (VAR12)
        {
            VAR13 = -VAR49;
            FUN9(VAR9, VAR12);
            goto VAR32;
        }
    }
    VAR21 = FUN10(VAR11->VAR31.VAR50, &VAR12);
    if (VAR12)
    {
        VAR13 = -VAR49;
        FUN9(VAR9, VAR12);
        goto VAR32;
    }
    VAR22 = FUN11(VAR11->VAR31.VAR51, VAR21, VAR11->VAR31.VAR35, &VAR12);
    if (VAR12)
    {
        VAR13 = -VAR49;
        FUN9(VAR9, VAR12);
        goto VAR32;
    }
    VAR25 = FUN8(VAR11->VAR31.VAR52, &VAR12);
    if (VAR12)
    {
        VAR13 = -VAR49;
        FUN9(VAR9, VAR12);
        goto VAR32;
    }
    VAR23 = FUN12(VAR19, &VAR12);
    if (VAR12)
    {
        VAR13 = -VAR49;
        FUN9(VAR9, VAR12);
        goto VAR32;
    }
    if (VAR23 == VAR53)
    {
        if (!VAR20)
        {
            VAR13 = -VAR46;
            FUN2(VAR9, "");
            goto VAR32;
        }
        VAR24 = FUN13(VAR22, VAR26, &VAR12);
        if (VAR12)
        {
            VAR13 = -VAR49;
            FUN9(VAR9, VAR12);
            goto VAR32;
        }
    }
    else
    {
        VAR24 = VAR22;
    }
    if (!(VAR7 & VAR28))
    {
        if (FUN14(VAR2, VAR27, VAR22, VAR21, VAR25, VAR23, VAR24, VAR26, &VAR17, &VAR18, VAR5, VAR6, VAR9) < 0)
        {
            VAR13 = -VAR54;
            goto VAR32;
        }
        VAR2->VAR55 = VAR25;
        VAR2->VAR56 = FUN15(VAR22, VAR21);
        VAR2->VAR57 = FUN16(VAR23, VAR24, VAR26, VAR17, VAR18, VAR9);
        if (!VAR2->VAR57)
        {
            VAR13 = -VAR49;
            goto VAR32;
        }
        VAR2->VAR58 = FUN17(VAR22, VAR21, VAR17, VAR18, VAR9);
        if (!VAR2->VAR58)
        {
            VAR13 = -VAR49;
            goto VAR32;
        }
    }
    VAR2->VAR34 = VAR11->VAR31.VAR34 * VAR59;
    VAR11->VAR60 = VAR22;
    VAR11->VAR50 = VAR21;
    VAR11->VAR61 = VAR23;
    VAR11->VAR62 = VAR26;
    VAR11->VAR63 = VAR25;
    FUN18(VAR17);
    FUN18(VAR27);
    return 0;
VAR32:
    FUN18(VAR17);
    FUN19(VAR2->VAR58);
    FUN20(VAR2->VAR57);
    FUN18(VAR11);
    FUN18(VAR27);
    return VAR13;
}