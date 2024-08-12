static inline void FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR9[FUN2(VAR6->VAR10, 0)];
    *VAR3 = (VAR6->VAR11 * VAR7 * VAR8 + 256 + (VAR6->VAR11 >> 31)) >> 9;
    *VAR4 = (VAR6->VAR12 * VAR7 * VAR8 + 256 + (VAR6->VAR12 >> 31)) >> 9;
}