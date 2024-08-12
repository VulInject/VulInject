static inline int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4 = ((((VAR3 * VAR1) >> (24 - VAR2)) + 1) >> 1) + (VAR3 >> 1);
    FUN2(VAR4 >= 0 && VAR4 < VAR3);
    return VAR4;
}