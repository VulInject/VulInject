static inline int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (FUN2(!VAR2->VAR5))
        return VAR6;
    VAR5 = FUN3(VAR4->VAR5, VAR2->VAR2[VAR2->VAR7].VAR5);
    memcpy(VAR4->VAR8, VAR2->VAR2[VAR2->VAR7].VAR8, VAR5);
    if (VAR5 == VAR4->VAR5)
    {
        VAR2->VAR2[VAR2->VAR7].VAR5 -= VAR5;
        VAR2->VAR2[VAR2->VAR7].VAR8 += VAR5;
    }
    else
    {
        VAR2->VAR7++;
        VAR2->VAR7 &= VAR9;
        VAR2->VAR5--;
    }
    VAR2->VAR10 += VAR5;
    VAR2->VAR11 -= VAR5;
    if (VAR2->VAR10 >= VAR2->VAR12)
    {
        VAR2->VAR10 = 0;
        VAR2->VAR12 = VAR13 + 1;
    }
    return VAR5;
}