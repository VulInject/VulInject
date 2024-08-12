VAR1 *FUN1(QCryptoHashAlgorithm VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8;
    void *VAR9 = NULL;
    VAR6 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    VAR9 = FUN2(VAR2, VAR4, VAR5, &VAR10);
    if (VAR9)
    {
        VAR12 = &VAR13;
    }
    if (!VAR9)
    {
        VAR9 = FUN3(VAR2, VAR4, VAR5, VAR7);
        if (!VAR9)
        {
            return NULL;
        }
        VAR12 = &VAR14;
        FUN4(VAR10);
    }
    VAR8 = FUN5(VAR1, 1);
    VAR8->VAR2 = VAR2;
    VAR8->VAR15 = VAR9;
    VAR8->VAR16 = (void *)VAR12;
    return VAR8;
}