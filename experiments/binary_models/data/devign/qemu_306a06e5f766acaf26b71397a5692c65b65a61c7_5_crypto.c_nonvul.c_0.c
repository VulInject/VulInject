static int FUN1(QCryptoBlockFormat VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12 = VAR5->VAR13;
    VAR14 *VAR15 = NULL;
    VAR9 *VAR16 = NULL;
    int VAR17 = -VAR18;
    VAR19 *VAR20 = NULL;
    unsigned int VAR21 = 0;
    VAR6 *VAR22 = NULL;
    VAR5->VAR23 = FUN2(NULL, VAR7, "", VAR5, &VAR24, false, VAR10);
    if (!VAR5->VAR23)
    {
        return -VAR18;
    }
    VAR15 = FUN3(VAR3, NULL, 0, &VAR25);
    FUN4(VAR15, VAR7, &VAR16);
    if (VAR16)
    {
        FUN5(VAR10, VAR16);
        goto VAR26;
    }
    VAR22 = FUN6(VAR15, NULL);
    VAR20 = FUN7(VAR1, VAR22, VAR10);
    if (!VAR20)
    {
        goto VAR26;
    }
    if (VAR8 & VAR27)
    {
        VAR21 |= VAR28;
    }
    VAR12->VAR29 = FUN8(VAR20, VAR30, VAR5, VAR21, VAR10);
    if (!VAR12->VAR29)
    {
        VAR17 = -VAR31;
        goto VAR26;
    }
    VAR5->VAR32 = true;
    VAR5->VAR33 = true;
    VAR17 = 0;
VAR26:
    FUN9(VAR22);
    FUN10(VAR20);
    return VAR17;
}