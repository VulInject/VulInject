void *FUN1(int VAR1, size_t VAR2, size_t VAR3, bool VAR4)
{
    size_t VAR5 = VAR2 + VAR3;
    void *VAR6 = FUN2(0, VAR5, VAR7, VAR8 | VAR9, -1, 0);
    size_t VAR10 = FUN3((VAR11)VAR6, VAR3) - (VAR11)VAR6;
    void *VAR12;
    if (VAR6 == VAR13)
    {
        return NULL;
    }
    assert(!(VAR3 & (VAR3 - 1)));
    assert(VAR3 >= FUN4());
    VAR12 = FUN2(VAR6 + VAR10, VAR2, VAR14 | VAR15, VAR16 | (VAR1 == -1 ? VAR8 : 0) | (VAR4 ? VAR17 : VAR9), VAR1, 0);
    if (VAR12 == VAR13)
    {
        FUN5(VAR6, VAR5);
        return NULL;
    }
    VAR6 += VAR10;
    VAR5 -= VAR10;
    if (VAR10 > 0)
    {
        FUN5(VAR6 - VAR10, VAR10);
    }
    if (VAR5 > VAR2 + FUN4())
    {
        FUN5(VAR6 + VAR2 + FUN4(), VAR5 - VAR2 - FUN4());
    }
    return VAR6;
}