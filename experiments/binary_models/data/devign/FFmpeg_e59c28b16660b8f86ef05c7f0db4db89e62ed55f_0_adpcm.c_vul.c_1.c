static inline short FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR4 = (((VAR2->VAR5) * (VAR2->VAR6)) + ((VAR2->VAR7) * (VAR2->VAR8))) / 64;
    VAR4 += ((VAR3 & 0x08) ? (VAR3 - 0x10) : (VAR3)) * VAR2->VAR9;
    VAR2->VAR7 = VAR2->VAR5;
    VAR2->VAR5 = FUN2(VAR4);
    VAR2->VAR9 = (VAR10[(int)VAR3] * VAR2->VAR9) >> 8;
    if (VAR2->VAR9 < 16)
        VAR2->VAR9 = 16;
    return VAR2->VAR5;