static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4[VAR5 + VAR6 + 1];
    char VAR7[VAR8];
    size_t VAR9 = VAR8;
    char *VAR10 = NULL, *VAR11 = NULL;
    gnutls_datum_t VAR12;
    FUN2(VAR4, VAR3, VAR5 + 1);
    FUN3(VAR4, VAR13, VAR5 + VAR6 + 1);
    VAR12.VAR14 = (void *)VAR4;
    VAR12.VAR15 = VAR5 + VAR6;
    if (FUN4(VAR16, &VAR12, VAR7, &VAR9) == VAR17)
    {
        VAR10 = FUN5((VAR18 *)VAR7, VAR8);
    }
    if (VAR10 == NULL)
    {
        FUN6("");
        FUN7(VAR2);
        return;
    }
    VAR11 = FUN8(VAR19, VAR10);
    FUN9(VAR2, VAR11, strlen(VAR11));
    FUN10(VAR2);
    FUN11(VAR10);
    FUN11(VAR11);
    VAR2->VAR20 = 1;
    FUN12(VAR2);
}