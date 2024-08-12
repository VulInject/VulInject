static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned int VAR7, VAR8;
    VAR8 = FUN2(VAR4, 1, FUN3(VAR4));
    if (VAR2->VAR9 > 3880)
    {
        while (VAR8 >= 16)
        {
            VAR8 -= 16;
            VAR6->VAR10 += 4;
        }
    }
    if (!VAR6->VAR10)
        VAR7 = VAR8;
    else if (VAR6->VAR10 <= VAR11)
    {
        VAR7 = (VAR8 << VAR6->VAR10) + FUN4(VAR4, VAR6->VAR10);
    }
    else
    {
        FUN5(VAR2->VAR12, VAR13, "", VAR6->VAR10);
        return VAR14;
    }
    VAR6->VAR15 += VAR7 - (VAR6->VAR15 + 8 >> 4);
    if (VAR6->VAR15 < (VAR6->VAR10 ? 1 << (VAR6->VAR10 + 4) : 0))
        VAR6->VAR10--;
    else if (VAR6->VAR15 >= (1 << (VAR6->VAR10 + 5)) && VAR6->VAR10 < 24)
        VAR6->VAR10++;
    if (VAR7 & 1)
        return (VAR7 >> 1) + 1;
    else
        return -(VAR7 >> 1);
}