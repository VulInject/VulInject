static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5, VAR6;
    int VAR7;
    VAR6 = FUN2(VAR2, VAR8, VAR9);
    if (VAR6 == (VAR10 - 1))
    {
        VAR7 = FUN3(VAR2, 5);
        VAR6 = 0;
    }
    else
        VAR7 = (VAR4->VAR11 < 1) ? 0 : VAR4->VAR11 - 1;
    if (VAR7 <= 16 || VAR2->VAR12 < 3910)
    {
        if (VAR7 > 23)
        {
            FUN4(VAR2->VAR13, VAR14, "", VAR7);
            return VAR15;
        }
        VAR5 = FUN3(VAR2, VAR7);
    }
    else if (VAR7 <= 32)
    {
        VAR5 = FUN3(VAR2, 16);
        VAR5 |= (FUN3(VAR2, VAR7 - 16) << 16);
    }
    else
    {
        FUN4(VAR2->VAR13, VAR14, "", VAR7);
        return VAR15;
    }
    VAR5 += VAR6 << VAR7;
    FUN5(VAR4, VAR5);
    if (VAR5 & 1)
        return (VAR5 >> 1) + 1;
    else
        return -(VAR5 >> 1);
}