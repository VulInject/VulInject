int FUN1(QCryptoHashAlgorithm VAR1, const VAR2 *VAR3, size_t VAR4, const VAR2 *VAR5, size_t VAR6, uint64_t VAR7, VAR2 *VAR8, size_t VAR9, VAR10 **VAR11)
{
    static const int VAR12[VAR13] = {
        [VAR14] = VAR15,
        [VAR16] = VAR17,
        [VAR18] = VAR19,
    };
    int VAR20;
    if (VAR7 > VAR21)
    {
        FUN2(VAR11, VAR22, "", (long long unsigned)VAR7, VAR21);
        return -1;
    }
    if (VAR1 >= FUN3(VAR12) || VAR12[VAR1] == VAR23)
    {
        FUN4(VAR11, "", VAR1);
        return -1;
    }
    VAR20 = FUN5(VAR3, VAR4, VAR24, VAR12[VAR1], VAR5, VAR6, VAR7, VAR9, VAR8);
    if (VAR20 != 0)
    {
        FUN4(VAR11, "", FUN6(VAR20));
        return -1;
    }
    return 0;
}