static inline void *FUN1(void)
{
    void *VAR1 = VAR2;
    size_t VAR3, VAR4;
    VAR3 = (((VAR5)VAR1 + sizeof(VAR2)) & VAR6) - (VAR5)VAR1;
    VAR4 = VAR3 - VAR7;
    if (VAR4 > VAR8.VAR9)
    {
        VAR4 = (((VAR5)VAR1 + VAR8.VAR9) & VAR6) - (VAR5)VAR1;
    }
    VAR8.VAR9 = VAR4;
    if (FUN2(VAR1, VAR4))
    {
        VAR1 = FUN3(VAR1, VAR4);
        VAR4 = VAR8.VAR9;
    }
    FUN4(VAR1, VAR4);
    FUN5(VAR1 + VAR4, VAR7);
    FUN6(VAR1, VAR4, VAR10);
    return VAR1;
}