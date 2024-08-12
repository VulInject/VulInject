static inline void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    if (VAR2->VAR5)
    {
        VAR2->VAR6 = VAR2->VAR7;
        return;
    }
    while (VAR2->VAR6 != VAR2->VAR7)
    {
        VAR4 = &VAR2->VAR8[VAR2->VAR6++];
        VAR2->VAR6 &= VAR9 - 1;
        FUN2(VAR2, VAR4->VAR10, VAR4->VAR11, VAR4->VAR12, VAR4->VAR13);
    }
}