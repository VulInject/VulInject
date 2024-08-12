static int FUN1(QCryptoBlockFormat VAR1, const char *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7 = -VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    struct BlockCryptoCreateData VAR13 = {
        .VAR14 = FUN2(FUN3(VAR4, VAR15, 0), VAR16),
        .VAR4 = VAR4,
        .VAR2 = VAR2,
    };
    VAR17 *VAR18;
    VAR18 = FUN4(VAR4, NULL);
    VAR10 = FUN5(VAR1, VAR18, VAR6);
    if (!VAR10)
    {
        return -1;
    }
    VAR12 = FUN6(VAR10, VAR19, VAR20, &VAR13, VAR6);
    if (!VAR12)
    {
        VAR7 = -VAR21;
        goto VAR22;
    }
    VAR7 = 0;
VAR22:
    FUN7(VAR18);
    FUN8(VAR12);
    FUN9(VAR13.VAR23);
    FUN10(VAR10);
    return VAR7;
}