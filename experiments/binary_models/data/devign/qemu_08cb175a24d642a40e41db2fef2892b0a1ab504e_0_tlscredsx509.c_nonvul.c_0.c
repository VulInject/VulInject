FUN1(VAR1 *VAR2, bool VAR3, const char *VAR4, const char *VAR5, VAR6 **VAR7)
{
    gnutls_x509_crt_t VAR8 = NULL;
    gnutls_x509_crt_t VAR9[VAR10];
    size_t VAR11 = 0;
    size_t VAR12;
    int VAR13 = -1;
    memset(VAR9, 0, sizeof(VAR9));
    if (VAR5 && FUN2(VAR5, VAR14) == 0)
    {
        VAR8 = FUN3(VAR2, VAR5, VAR3, VAR7);
        if (!VAR8)
        {
            goto VAR15;
        }
    }
    if (FUN2(VAR4, VAR14) == 0)
    {
        if (FUN4(VAR2, VAR4, VAR9, VAR10, &VAR11, VAR7) < 0)
        {
            goto VAR15;
        }
    }
    if (VAR8 && FUN5(VAR2, VAR8, VAR5, VAR3, false, VAR7) < 0)
    {
        goto VAR15;
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        if (FUN5(VAR2, VAR9[VAR12], VAR4, VAR3, true, VAR7) < 0)
        {
            goto VAR15;
        }
    }
    if (VAR8 && VAR11 && FUN6(VAR8, VAR5, VAR9, VAR11, VAR4, VAR3, VAR7) < 0)
    {
        goto VAR15;
    }
    VAR13 = 0;
VAR15:
    if (VAR8)
    {
        FUN7(VAR8);
    }
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        FUN7(VAR9[VAR12]);
    }
    return VAR13;
}