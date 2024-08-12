static inline void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7 = VAR6;
    int VAR8 = VAR2->VAR9 * VAR2->VAR10;
    int VAR10 = VAR2->VAR9 * VAR5;
    int VAR11 = VAR2->VAR9 * VAR3 + VAR8 * VAR4;
    VAR12 *VAR13 = VAR2->VAR14 + VAR11;
    VAR12 *VAR15 = VAR2->VAR16->VAR17 + VAR11;
    for (; VAR7 > 0; VAR7--, VAR13 += VAR8, VAR15 += VAR8)
        memcpy(VAR15, VAR13, VAR10);
    FUN2(VAR2->VAR16, VAR3, VAR4, VAR5, VAR6);
}