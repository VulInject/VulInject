static inline int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    VAR4 = VAR7[VAR3];
    VAR5 = VAR4 & 3;
    VAR4 >>= 2;
    VAR6 = (2 * (VAR2 - (VAR1 >> 1))) * VAR8[VAR1 >> 2][VAR5];
    return (VAR6 + (1 << (VAR4 - 1))) >> VAR4;
}