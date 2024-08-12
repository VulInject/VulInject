void *FUN1(int VAR1, size_t VAR2, size_t VAR3, bool VAR4)
{
    size_t VAR5 = VAR2 + VAR3;
    int VAR6 = VAR1 == -1 || FUN2(VAR1) == FUN3() ? -1 : VAR1;
    int VAR7 = VAR6 == -1 ? VAR8 : VAR9;
    void *VAR10 = FUN4(0, VAR5, VAR11, VAR7 | VAR12, VAR6, 0);
    void *VAR10 = FUN4(0, VAR5, VAR11, VAR8 | VAR12, -1, 0);
    size_t VAR13 = FUN5((VAR14)VAR10, VAR3) - (VAR14)VAR10;
    void *VAR15;
    if (VAR10 == VAR16)
    {
        return VAR16;
    }
    assert(!(VAR3 & (VAR3 - 1)));
    assert(VAR3 >= FUN3());
    VAR15 = FUN4(VAR10 + VAR13, VAR2, VAR17 | VAR18, VAR19 | (VAR1 == -1 ? VAR8 : 0) | (VAR4 ? VAR20 : VAR12), VAR1, 0);
    if (VAR15 == VAR16)
    {
        FUN6(VAR10, VAR5);
        return VAR16;
    }
    VAR10 += VAR13;
    VAR5 -= VAR13;
    if (VAR13 > 0)
    {
        FUN6(VAR10 - VAR13, VAR13);
    }
    if (VAR5 > VAR2 + FUN3())
    {
        FUN6(VAR10 + VAR2 + FUN3(), VAR5 - VAR2 - FUN3());
    }
    return VAR10;
}