FUN1(QCryptoBlockFormat VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR4 *VAR10 = NULL;
    VAR9 = FUN2(VAR8, 1);
    VAR9->VAR1 = VAR1;
    VAR7 = FUN3(FUN4(VAR3));
    FUN5(VAR7, NULL, NULL, 0, &VAR10);
    if (VAR10)
    {
        goto VAR11;
    }
    switch (VAR1)
    {
    case VAR12:
        FUN6(VAR7, &VAR9->VAR13.VAR14, &VAR10);
        break;
    default:
        FUN7(&VAR10, "", VAR1);
        break;
    }
    if (!VAR10)
    {
        FUN8(VAR7, &VAR10);
    }
    FUN9(VAR7, NULL);
VAR11:
    if (VAR10)
    {
        FUN10(VAR5, VAR10);
        FUN11(VAR9);
        VAR9 = NULL;
    }
    FUN12(VAR7);
    return VAR9;
}