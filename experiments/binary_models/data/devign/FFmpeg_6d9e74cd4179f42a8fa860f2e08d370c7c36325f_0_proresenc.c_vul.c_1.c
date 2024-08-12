static inline void FUN1(VAR1 *VAR2, unsigned VAR3, int VAR4)
{
    unsigned int VAR5, VAR6, VAR7, VAR8;
    int VAR9;
    VAR7 = (VAR3 & 3) + 1;
    VAR5 = VAR3 >> 5;
    VAR6 = (VAR3 >> 2) & 7;
    VAR8 = VAR7 << VAR5;
    if (VAR4 >= VAR8)
    {
        VAR4 -= VAR8 - (1 << VAR6);
        VAR9 = FUN2(VAR4);
        FUN3(VAR2, VAR9 - VAR6 + VAR7, 0);
        FUN3(VAR2, 1, 1);
        FUN3(VAR2, VAR9, VAR4);
    }
    else
    {
        VAR9 = VAR4 >> VAR5;
        if (VAR9)
            FUN3(VAR2, VAR9, 0);
        FUN3(VAR2, 1, 1);
        if (VAR5)
            FUN4(VAR2, VAR5, VAR4);
    }
}