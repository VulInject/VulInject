static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[VAR3];
    int64_t VAR9;
    if (!VAR2->VAR10)
        return VAR11;
    if (VAR4 < 0)
        VAR4 = 0;
    VAR9 = FUN2(VAR4, VAR7->VAR12.VAR13, VAR7->VAR12.VAR14);
    FUN3(VAR2->VAR15, (VAR2->VAR10 * VAR9) >> 3, VAR16);
    FUN4(VAR2, VAR7, VAR4);
    return 0;
}