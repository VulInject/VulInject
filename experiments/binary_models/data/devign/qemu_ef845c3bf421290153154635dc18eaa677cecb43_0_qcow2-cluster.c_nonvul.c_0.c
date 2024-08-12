static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    VAR10 = VAR6 - VAR5;
    if (VAR10 <= 0)
        return 0;
    VAR11 = FUN2(VAR2, VAR3 + VAR5, VAR8->VAR12, VAR10);
    if (VAR11 < 0)
        return VAR11;
    if (VAR8->VAR13)
    {
        FUN3(VAR8, VAR3 + VAR5, VAR8->VAR12, VAR8->VAR12, VAR10, 1, &VAR8->VAR14);
    }
    VAR11 = FUN4(VAR8->VAR15, (VAR4 >> 9) + VAR5, VAR8->VAR12, VAR10);
    if (VAR11 < 0)
        return VAR11;
    return 0;
}