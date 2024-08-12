static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4[VAR3] >= VAR2->VAR5[VAR3])
    {
        FUN2(VAR2->VAR6, VAR7, "", VAR3, VAR2->VAR4[VAR3], VAR2->VAR5[VAR3]);
        return 0;
    }
    if (VAR3 <= VAR8)
        return VAR2->VAR9[VAR3][VAR2->VAR10[VAR3][VAR2->VAR4[VAR3]++]];
    return VAR2->VAR10[VAR3][VAR2->VAR4[VAR3]++];
}