static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9);
static inline unsigned FUN2(VAR10 *VAR11)
{
    VAR11->VAR12 += 1 << (VAR13 * 2);
    if (VAR11->VAR12 == 0)
    {
        VAR11->VAR12 = 1 << (VAR13 * 2);
        memset(VAR11->VAR14, 0, sizeof(VAR15) * VAR16);
    }
    return VAR11->VAR12;
}