FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, QCryptoBlockReadFunc VAR6, void *VAR7, unsigned int VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    VAR9 *VAR13 = NULL;
    int VAR14 = 0;
    size_t VAR15;
    ssize_t VAR16;
    VAR17 *VAR18 = NULL;
    size_t VAR19;
    char *VAR20, *VAR21;
    QCryptoCipherMode VAR22;
    QCryptoCipherAlgorithm VAR23;
    QCryptoIVGenAlgorithm VAR24;
    QCryptoCipherAlgorithm VAR25;
    QCryptoHashAlgorithm VAR26;
    QCryptoHashAlgorithm VAR27;
    char *VAR28 = NULL;
    if (!(VAR8 & VAR29))
    {
        if (!VAR4->VAR30.VAR12.VAR31)
        {
            FUN2(VAR10, "", VAR5 ? VAR5 : "");
            return -1;
        }
        VAR28 = FUN3(VAR4->VAR30.VAR12.VAR31, VAR10);
        if (!VAR28)
        {
            return -1;
        }
    }
    VAR12 = FUN4(VAR11, 1);
    VAR2->VAR7 = VAR12;
    VAR16 = FUN5(VAR2, 0, (VAR17 *)&VAR12->VAR32, sizeof(VAR12->VAR32), VAR7, VAR10);
    if (VAR16 < 0)
    {
        VAR14 = VAR16;
        goto VAR33;
    }
    FUN6(&VAR12->VAR32.VAR34);
    FUN7(&VAR12->VAR32.VAR35);
    FUN7(&VAR12->VAR32.VAR36);
    FUN7(&VAR12->VAR32.VAR37);
    for (VAR15 = 0; VAR15 < VAR38; VAR15++)
    {
        FUN7(&VAR12->VAR32.VAR39[VAR15].VAR40);
        FUN7(&VAR12->VAR32.VAR39[VAR15].VAR41);
        FUN7(&VAR12->VAR32.VAR39[VAR15].VAR42);
        FUN7(&VAR12->VAR32.VAR39[VAR15].VAR43);
    }
    if (memcmp(VAR12->VAR32.VAR44, VAR45, VAR46) != 0)
    {
        FUN2(VAR10, "");
        VAR14 = -VAR47;
        goto VAR33;
    }
    if (VAR12->VAR32.VAR34 != VAR48)
    {
        FUN2(VAR10, "" VAR49 "", VAR12->VAR32.VAR34);
        VAR14 = -VAR50;
        goto VAR33;
    }
    VAR20 = strchr(VAR12->VAR32.VAR51, '');
    if (!VAR20)
    {
        VAR14 = -VAR47;
        FUN2(VAR10, "", VAR12->VAR32.VAR51);
        goto VAR33;
    }
    *VAR20 = '';
    VAR20++;
    VAR21 = strchr(VAR20, '');
    if (!VAR21)
    {
        VAR27 = 0;
    }
    else
    {
        *VAR21 = '';
        VAR21++;
        VAR27 = FUN8(VAR21, &VAR13);
        if (VAR13)
        {
            VAR14 = -VAR50;
            FUN9(VAR10, VAR13);
            goto VAR33;
        }
    }
    VAR22 = FUN10(VAR12->VAR32.VAR51, &VAR13);
    if (VAR13)
    {
        VAR14 = -VAR50;
        FUN9(VAR10, VAR13);
        goto VAR33;
    }
    VAR23 = FUN11(VAR12->VAR32.VAR52, VAR22, VAR12->VAR32.VAR36, &VAR13);
    if (VAR13)
    {
        VAR14 = -VAR50;
        FUN9(VAR10, VAR13);
        goto VAR33;
    }
    VAR26 = FUN8(VAR12->VAR32.VAR53, &VAR13);
    if (VAR13)
    {
        VAR14 = -VAR50;
        FUN9(VAR10, VAR13);
        goto VAR33;
    }
    VAR24 = FUN12(VAR20, &VAR13);
    if (VAR13)
    {
        VAR14 = -VAR50;
        FUN9(VAR10, VAR13);
        goto VAR33;
    }
    if (VAR24 == VAR54)
    {
        if (!VAR21)
        {
            VAR14 = -VAR47;
            FUN2(VAR10, "");
            goto VAR33;
        }
        VAR25 = FUN13(VAR23, VAR27, &VAR13);
        if (VAR13)
        {
            VAR14 = -VAR50;
            FUN9(VAR10, VAR13);
            goto VAR33;
        }
    }
    else
    {
        VAR25 = VAR23;
    }
    if (!(VAR8 & VAR29))
    {
        if (FUN14(VAR2, VAR28, VAR23, VAR22, VAR26, VAR24, VAR25, VAR27, &VAR18, &VAR19, VAR6, VAR7, VAR10) < 0)
        {
            VAR14 = -VAR55;
            goto VAR33;
        }
        VAR2->VAR56 = VAR26;
        VAR2->VAR57 = FUN15(VAR23, VAR22);
        VAR2->VAR58 = FUN16(VAR24, VAR25, VAR27, VAR18, VAR19, VAR10);
        if (!VAR2->VAR58)
        {
            VAR14 = -VAR50;
            goto VAR33;
        }
        VAR2->VAR59 = FUN17(VAR23, VAR22, VAR18, VAR19, VAR10);
        if (!VAR2->VAR59)
        {
            VAR14 = -VAR50;
            goto VAR33;
        }
    }
    VAR2->VAR60 = VAR61;
    VAR2->VAR35 = VAR12->VAR32.VAR35 * VAR2->VAR60;
    VAR12->VAR62 = VAR23;
    VAR12->VAR51 = VAR22;
    VAR12->VAR63 = VAR24;
    VAR12->VAR64 = VAR27;
    VAR12->VAR65 = VAR26;
    FUN18(VAR18);
    FUN18(VAR28);
    return 0;
VAR33:
    FUN18(VAR18);
    FUN19(VAR2->VAR59);
    FUN20(VAR2->VAR58);
    FUN18(VAR12);
    FUN18(VAR28);
    return VAR14;
}