static inline int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR8 *VAR9;
    if (VAR4 & 0x4)
        VAR6 = &VAR10->VAR11;
    else
        VAR6 = &VAR10->VAR12;
    VAR7 = VAR4 & ~7;
    if ((VAR7 + 7) > VAR6->VAR13)
        return -1;
    VAR9 = VAR6->VAR14 + VAR7;
    *VAR2 = FUN2(VAR9);
    *VAR3 = FUN2(VAR9 + 4);
    return 0;
}