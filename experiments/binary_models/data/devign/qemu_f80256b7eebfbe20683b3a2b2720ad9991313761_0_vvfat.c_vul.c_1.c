static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    if ((VAR3 + 1) * VAR2->VAR4 > VAR2->VAR5)
    {
        int VAR6 = (VAR3 + 32) * VAR2->VAR4;
        VAR2->VAR7 = FUN2(VAR2->VAR7, VAR6);
        if (!VAR2->VAR7)
            return -1;
        VAR2->VAR5 = VAR6;
        VAR2->VAR8 = VAR3 + 1;
    }
    return 0;