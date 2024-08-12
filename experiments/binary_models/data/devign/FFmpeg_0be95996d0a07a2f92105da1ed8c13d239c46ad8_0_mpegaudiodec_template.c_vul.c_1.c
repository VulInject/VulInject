static inline int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4, VAR5;
    int64_t VAR6;
    VAR4 = VAR7[VAR3];
    VAR5 = VAR4 & 3;
    VAR4 >>= 2;
    VAR6 = FUN2(VAR2 + (-1 << VAR1) + 1, VAR8[VAR1 - 1][VAR5]);
    VAR4 += VAR1;
    return (int)((VAR6 + (1LL << (VAR4 - 1))) >> VAR4);
}