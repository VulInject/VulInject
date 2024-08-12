static inline int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4 || !VAR2->VAR5)
    {
        return 0;
    }
    VAR3 = FUN2(VAR6) - FUN2(VAR7);
    if (VAR3 < 0)
    {
        VAR3 += FUN2(VAR8) - FUN2(VAR9);
    }
    return VAR3 >> 2;
}