static inline void FUN1(int VAR1, struct VAR2 *VAR3)
{
    int VAR4 = 0;
    int VAR5 = VAR6;
    VAR3->VAR7[VAR8] = ((VAR3->VAR7[VAR8] * 255) >> 8) + VAR9 * ((VAR3->VAR10[VAR8] ^ VAR1) < 0 ? -128 : 128);
    VAR3->VAR10[VAR8] = VAR5;
    VAR4 += (VAR5 * VAR3->VAR7[VAR8]) >> 15;
}
while (0)
    if (VAR1)
    {
        FUN2(5, VAR3->VAR10[4], 1);
        FUN2(4, VAR3->VAR10[3], 1);
        FUN2(3, VAR3->VAR10[2], 1);
        FUN2(2, VAR3->VAR10[1], 1);
        FUN2(1, VAR3->VAR10[0], 1);
        FUN2(0, VAR1 << 1, 1);
    }
    else
    {
        FUN2(5, VAR3->VAR10[4], 0);
        FUN2(4, VAR3->VAR10[3], 0);
        FUN2(3, VAR3->VAR10[2], 0);
        FUN2(2, VAR3->VAR10[1], 0);
        FUN2(1, VAR3->VAR10[0], 0);
        FUN2(0, VAR1 << 1, 0);
    }
VAR3->VAR4 = VAR4;
}