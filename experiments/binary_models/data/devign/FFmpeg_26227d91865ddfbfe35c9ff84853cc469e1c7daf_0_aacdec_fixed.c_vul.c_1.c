static inline int *FUN1(int *VAR1, unsigned VAR2, unsigned VAR3)
{
    unsigned VAR4 = VAR2 >> 12;
    VAR1[0] = (VAR2 & 3) * (1 + (((int)VAR3 >> 31) << 1));
    VAR3 <<= VAR4 & 1;
    VAR4 >>= 1;
    VAR1[1] = (VAR2 >> 2 & 3) * (1 + (((int)VAR3 >> 31) << 1));
    VAR3 <<= VAR4 & 1;
    VAR4 >>= 1;
    VAR1[2] = (VAR2 >> 4 & 3) * (1 + (((int)VAR3 >> 31) << 1));
    VAR3 <<= VAR4 & 1;
    VAR4 >>= 1;
    VAR1[3] = (VAR2 >> 6 & 3) * (1 + (((int)VAR3 >> 31) << 1));
    return VAR1 + 4;
}