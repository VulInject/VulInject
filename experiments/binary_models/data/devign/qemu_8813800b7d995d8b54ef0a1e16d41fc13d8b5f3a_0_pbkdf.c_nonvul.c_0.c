VAR1 FUN1(QCryptoHashAlgorithm VAR2, const VAR3 *VAR4, size_t VAR5, const VAR3 *VAR6, size_t VAR7, VAR8 **VAR9)
{
    uint64_t VAR10 = -1;
    uint8_t VAR11[32];
    uint64_t VAR12 = (1 << 15);
    unsigned long long VAR13, VAR14, VAR15;
    while (1)
    {
        if (FUN2(&VAR14, VAR9) < 0)
        {
            goto VAR16;
        }
        if (FUN3(VAR2, VAR4, VAR5, VAR6, VAR7, VAR12, VAR11, sizeof(VAR11), VAR9) < 0)
        {
            goto VAR16;
        }
        if (FUN2(&VAR15, VAR9) < 0)
        {
            goto VAR16;
        }
        VAR13 = VAR15 - VAR14;
        if (VAR13 > 500)
        {
            break;
        }
        else if (VAR13 < 100)
        {
            VAR12 = VAR12 * 10;
        }
        else
        {
            VAR12 = (VAR12 * 1000 / VAR13);
        }
    }
    VAR12 = VAR12 * 1000 / VAR13;
    VAR10 = VAR12;
VAR16:
    memset(VAR11, 0, sizeof(VAR11));
    return VAR10;
}