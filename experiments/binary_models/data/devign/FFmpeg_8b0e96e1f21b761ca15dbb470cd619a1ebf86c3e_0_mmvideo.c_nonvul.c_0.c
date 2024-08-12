static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = 0, VAR6 = 0;
    while (FUN2(&VAR2->VAR7) > 0)
    {
        int VAR8, VAR9;
        if (VAR6 >= VAR2->VAR10->VAR11)
            return 0;
        VAR9 = FUN3(&VAR2->VAR7);
        if (VAR9 & 0x80)
        {
            VAR8 = 1;
        }
        else
        {
            VAR8 = (VAR9 & 0x7f) + 2;
            VAR9 = FUN3(&VAR2->VAR7);
        }
        if (VAR3)
            VAR8 *= 2;
        if (VAR8 > VAR2->VAR10->VAR12 - VAR5)
            return VAR13;
        if (VAR9)
        {
            memset(VAR2->VAR14->VAR15[0] + VAR6 * VAR2->VAR14->VAR16[0] + VAR5, VAR9, VAR8);
            if (VAR4 && VAR6 + VAR4 < VAR2->VAR10->VAR11)
                memset(VAR2->VAR14->VAR15[0] + (VAR6 + 1) * VAR2->VAR14->VAR16[0] + VAR5, VAR9, VAR8);
        }
        VAR5 += VAR8;
        if (VAR5 >= VAR2->VAR10->VAR12)
        {
            VAR5 = 0;
            VAR6 += 1 + VAR4;
        }
    }
    return 0;
}