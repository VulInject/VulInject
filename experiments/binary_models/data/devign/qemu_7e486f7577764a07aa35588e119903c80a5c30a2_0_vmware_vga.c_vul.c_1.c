static inline int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4 || !VAR2->VAR5)
    {
        return 0;
    }
    if ((FUN2(VAR6) | FUN2(VAR7) | FUN2(VAR8) | FUN2(VAR9)) & 3)
    {
        return 0;
    }
    if (FUN2(VAR6) < (VAR10 *)VAR2->VAR11->VAR12 - (VAR10 *)VAR2->VAR12)
    {
        return 0;
    }
    if (FUN2(VAR7) > VAR13 || FUN2(VAR6) >= VAR13 || FUN2(VAR9) >= VAR13 || FUN2(VAR8) >= VAR13)
    {
        return 0;
    }
    if (FUN2(VAR7) < FUN2(VAR6) + 10 * 1024)
    {
        return 0;
    }
    VAR3 = FUN2(VAR8) - FUN2(VAR9);
    if (VAR3 < 0)
    {
        VAR3 += FUN2(VAR7) - FUN2(VAR6);
    }
    return VAR3 >> 2;
}