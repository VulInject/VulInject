int FUN1(QCryptoHashAlgorithm VAR1, const VAR2 *VAR3, size_t VAR4, const VAR2 *VAR5, size_t VAR6, uint64_t VAR7, VAR2 *VAR8, size_t VAR9, VAR10 **VAR11)
{
    if (VAR7 > VAR12)
    {
        FUN2(VAR11, VAR13, "", (long long unsigned)VAR7, VAR12);
        return -1;
    }
    switch (VAR1)
    {
    case VAR14:
        FUN3(VAR4, VAR3, VAR7, VAR6, VAR5, VAR9, VAR8);
        break;
    case VAR15:
        FUN4(VAR4, VAR3, VAR7, VAR6, VAR5, VAR9, VAR8);
        break;
    default:
        FUN2(VAR11, VAR16, "", VAR1);
        return -1;
    }
    return 0;
}