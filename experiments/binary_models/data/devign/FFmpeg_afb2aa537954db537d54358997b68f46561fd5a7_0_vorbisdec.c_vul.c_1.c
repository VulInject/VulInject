static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, VAR6 *VAR7, float *VAR8, unsigned VAR9)
{
    if (VAR4->VAR10 == 2)
        return FUN2(VAR2, VAR4, VAR5, VAR7, VAR8, VAR9, 2);
    else if (VAR4->VAR10 == 1)
        return FUN2(VAR2, VAR4, VAR5, VAR7, VAR8, VAR9, 1);
    else if (VAR4->VAR10 == 0)
        return FUN2(VAR2, VAR4, VAR5, VAR7, VAR8, VAR9, 0);
    else
    {
        FUN3(VAR2->VAR11, VAR12, "");
        return VAR13;
    }
}