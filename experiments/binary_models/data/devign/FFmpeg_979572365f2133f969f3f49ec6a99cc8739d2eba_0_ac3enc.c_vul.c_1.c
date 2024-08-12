static inline int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4;
    VAR1 = (((VAR1 << VAR2) >> (24 - VAR3)) + 1) >> 1;
    VAR4 = (1 << (VAR3 - 1));
    if (VAR1 >= VAR4)
        VAR1 = VAR4 - 1;
    FUN2(VAR1 >= -VAR4);
    return VAR1;
}