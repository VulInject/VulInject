static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR8 = 0;
    VAR9 = 0;
    VAR10 = 0;
    while (VAR8 < VAR7)
    {
        int VAR11, VAR12;
        if (VAR6[VAR8] & 0x80)
        {
            VAR11 = 1;
            VAR12 = VAR6[VAR8];
            VAR8++;
        }
        else
        {
            VAR11 = (VAR6[VAR8] & 0x7f) + 2;
            VAR12 = VAR6[VAR8 + 1];
            VAR8 += 2;
        }
        if (VAR3)
            VAR11 *= 2;
        if (VAR12)
        {
            memset(VAR2->VAR13.VAR14[0] + VAR10 * VAR2->VAR13.VAR15[0] + VAR9, VAR12, VAR11);
            if (VAR4)
                memset(VAR2->VAR13.VAR14[0] + (VAR10 + 1) * VAR2->VAR13.VAR15[0] + VAR9, VAR12, VAR11);
        }
        VAR9 += VAR11;
        if (VAR9 >= VAR2->VAR16->VAR17)
        {
            VAR9 = 0;
            VAR10 += 1 + VAR4;
        }
    }
}