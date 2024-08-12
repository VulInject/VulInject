FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, QCryptoCipherAlgorithm VAR6, QCryptoCipherMode VAR7, QCryptoHashAlgorithm VAR8, QCryptoIVGenAlgorithm VAR9, QCryptoCipherAlgorithm VAR10, QCryptoHashAlgorithm VAR11, VAR12 *VAR13, size_t VAR14, QCryptoBlockReadFunc VAR15, void *VAR16, VAR17 **VAR18)
{
    VAR19 *VAR20 = VAR2->VAR16;
    VAR12 *VAR21;
    size_t VAR22;
    VAR12 *VAR23;
    int VAR24 = -1;
    ssize_t VAR25;
    VAR26 *VAR27 = NULL;
    uint8_t VAR28[VAR29];
    VAR30 *VAR31 = NULL;
    size_t VAR32;
    if (VAR4->VAR33 != VAR34)
    {
        return 0;
    }
    VAR22 = VAR14 * VAR4->VAR35;
    VAR21 = FUN2(VAR12, VAR22);
    VAR23 = FUN2(VAR12, VAR14);
    if (FUN3(VAR8, (const VAR12 *)VAR5, strlen(VAR5), VAR4->VAR36, VAR37, VAR4->VAR38, VAR23, VAR14, VAR18) < 0)
    {
        goto VAR39;
    }
    VAR25 = FUN4(VAR2, VAR16, VAR4->VAR40 * VAR41, VAR21, VAR22, VAR18);
    if (VAR25 < 0)
    {
        goto VAR39;
    }
    VAR27 = FUN5(VAR6, VAR7, VAR23, VAR14, VAR18);
    if (!VAR27)
    {
        goto VAR39;
    }
    VAR32 = FUN6(VAR6, VAR7);
    VAR31 = FUN7(VAR9, VAR10, VAR11, VAR23, VAR14, VAR18);
    if (!VAR31)
    {
        goto VAR39;
    }
    if (FUN8(VAR27, VAR32, VAR31, VAR41, 0, VAR21, VAR22, VAR18) < 0)
    {
        goto VAR39;
    }
    if (FUN9(VAR8, VAR14, VAR4->VAR35, VAR21, VAR13, VAR18) < 0)
    {
        goto VAR39;
    }
    if (FUN3(VAR8, VAR13, VAR14, VAR20->VAR42.VAR43, VAR37, VAR20->VAR42.VAR44, VAR28, FUN10(VAR28), VAR18) < 0)
    {
        goto VAR39;
    }
    if (memcmp(VAR28, VAR20->VAR42.VAR45, VAR29) == 0)
    {
        VAR24 = 1;
        goto VAR39;
    }
    VAR24 = 0;
VAR39:
    FUN11(VAR31);
    FUN12(VAR27);
    FUN13(VAR21);
    FUN13(VAR23);
    return VAR24;
}