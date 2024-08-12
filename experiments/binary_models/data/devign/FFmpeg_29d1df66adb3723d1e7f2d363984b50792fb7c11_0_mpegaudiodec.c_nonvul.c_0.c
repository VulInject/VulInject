static inline int FUN1(int VAR1, int VAR2)
{
    unsigned int VAR3;
    int VAR4;
    VAR4 = VAR5[4 * VAR1 + (VAR2 & 3)];
    VAR3 = VAR6[4 * VAR1 + (VAR2 & 3)];
    VAR4 -= VAR2 >> 2;
    if (VAR4 < 1)
        FUN2(0, VAR7, "", VAR4);
    if (VAR4 > 31)
        return 0;
    VAR3 = (VAR3 + (1 << (VAR4 - 1))) >> VAR4;
    return VAR3;
}