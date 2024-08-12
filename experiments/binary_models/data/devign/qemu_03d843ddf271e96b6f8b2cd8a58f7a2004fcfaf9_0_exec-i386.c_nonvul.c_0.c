static inline int FUN1(unsigned long VAR1, unsigned long VAR2, int VAR3, VAR4 *VAR5)
{
    FUN2("", VAR1, VAR2, VAR3, *(unsigned long *)VAR5);
    if (VAR3 && FUN3(VAR2))
    {
        return 1;
    }
    if (VAR1 >= (unsigned long)VAR6 && VAR1 < (unsigned long)VAR6 + VAR7)
    {
        FUN4(VAR8, VAR5, NULL);
        VAR9->VAR10 = VAR2;
        FUN5(VAR11, 4 | (VAR3 << 1));
        return 1;
    }
    else
    {
        return 0;
    }
}