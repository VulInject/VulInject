static void inline FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11 = VAR2->VAR12->VAR11;
    unsigned char *VAR13;
    VAR13 = VAR2->VAR14.VAR15[0];
    VAR7 = VAR2->VAR14.VAR16[0];
    VAR8 = VAR7 - VAR11;
    VAR9 = VAR5 * VAR7 + VAR4;
    VAR10 = VAR4;
    while ((VAR6--) && (VAR9 < VAR2->VAR17))
    {
        VAR13[VAR9++] = *VAR3++;
        VAR10++;
        if (VAR10 >= VAR11)
        {
            VAR9 += VAR8;
            VAR10 = 0;
        }
    }
}