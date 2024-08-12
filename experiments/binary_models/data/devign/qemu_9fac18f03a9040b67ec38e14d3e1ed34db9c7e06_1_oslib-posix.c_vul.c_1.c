void *FUN1(size_t VAR1, VAR2 *VAR3)
{
    size_t VAR4 = VAR5;
    size_t VAR6 = VAR1 + VAR4 - FUN2();
    void *VAR7 = FUN3(0, VAR6, VAR8, VAR9 | VAR10, -1, 0);
    size_t VAR11 = FUN4((VAR12)VAR7, VAR4) - (VAR12)VAR7;
    void *VAR13;
    if (VAR7 == VAR14)
    {
        return NULL;
    }
    if (VAR3)
    {
        *VAR3 = VAR4;
    }
    VAR13 = FUN3(VAR7 + VAR11, VAR1, VAR15 | VAR16, VAR17 | VAR9 | VAR10, -1, 0);
    if (VAR13 == VAR14)
    {
        FUN5(VAR7, VAR6);
        return NULL;
    }
    VAR7 += VAR11;
    VAR6 -= VAR11;
    if (VAR11 > 0)
    {
        FUN5(VAR7 - VAR11, VAR11);
    }
    if (VAR6 > VAR1)
    {
        FUN5(VAR7 + VAR1, VAR6 - VAR1);
    }
    FUN6(VAR1, VAR7);
    return VAR7;
}