int FUN1(QCryptoHashAlgorithm VAR1, const struct VAR2 *VAR3, size_t VAR4, VAR5 **VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11, VAR12;
    gcry_md_hd_t VAR13;
    unsigned char *VAR14;
    if (VAR1 >= FUN2(VAR15) || VAR15[VAR1] == VAR16)
    {
        FUN3(VAR10, "", VAR1);
        return -1;
    }
    VAR12 = FUN4(&VAR13, VAR15[VAR1], 0);
    if (VAR12 < 0)
    {
        FUN3(VAR10, "", FUN5(VAR12));
        return -1;
    }
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        FUN6(VAR13, VAR3[VAR11].VAR17, VAR3[VAR11].VAR18);
    }
    VAR12 = FUN7(VAR15[VAR1]);
    if (VAR12 <= 0)
    {
        FUN3(VAR10, "", FUN5(VAR12));
        goto VAR19;
    }
    if (*VAR8 == 0)
    {
        *VAR8 = VAR12;
        *VAR6 = FUN8(VAR5, *VAR8);
    }
    else if (*VAR8 != VAR12)
    {
        FUN3(VAR10, "", *VAR8, VAR12);
        goto VAR19;
    }
    VAR14 = FUN9(VAR13, 0);
    if (!VAR14)
    {
        FUN3(VAR10, "");
        goto VAR19;
    }
    memcpy(*VAR6, VAR14, *VAR8);
    FUN10(VAR13);
    return 0;
VAR19:
    FUN10(VAR13);
    return -1;
}