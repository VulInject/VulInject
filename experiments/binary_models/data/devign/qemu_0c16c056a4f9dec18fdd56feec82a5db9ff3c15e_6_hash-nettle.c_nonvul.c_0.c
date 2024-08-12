int FUN1(QCryptoHashAlgorithm VAR1, const struct VAR2 *VAR3, size_t VAR4, VAR5 **VAR6, VAR7 *VAR8, VAR9 **VAR10)
{
    int VAR11;
    union qcrypto_hash_ctx VAR12;
    if (VAR1 >= FUN2(VAR13) || VAR13[VAR1].VAR14 == NULL)
    {
        FUN3(VAR10, "", VAR1);
        return -1;
    }
    VAR13[VAR1].FUN4(&VAR12);
    for (VAR11 = 0; VAR11 < VAR4; VAR11++)
    {
        size_t VAR15 = VAR3[VAR11].VAR16;
        VAR5 *VAR17 = VAR3[VAR11].VAR18;
        while (VAR15)
        {
            size_t VAR19 = FUN5(VAR15, VAR20);
            VAR13[VAR1].write(&VAR12, VAR15, VAR17);
            VAR15 -= VAR19;
            VAR17 += VAR15;
        }
    }
    if (*VAR8 == 0)
    {
        *VAR8 = VAR13[VAR1].VAR15;
        *VAR6 = FUN6(VAR5, *VAR8);
    }
    else if (*VAR8 != VAR13[VAR1].VAR15)
    {
        FUN3(VAR10, "", *VAR8, VAR13[VAR1].VAR15);
        return -1;
    }
    VAR13[VAR1].FUN7(&VAR12, *VAR8, *VAR6);
    return 0;
}