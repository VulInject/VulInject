static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    size_t VAR9;
    int VAR10;
    if (VAR11)
    {
        VAR4 &= ~(VAR12 - 1);
        VAR5 = (VAR5 + VAR12) & ~(VAR12 - 1);
        VAR9 = (VAR5 - VAR4) << VAR13;
        FUN2(VAR2->VAR14, VAR15);
        VAR10 = FUN3(VAR2->VAR14, VAR3 + (VAR4 << VAR13), &VAR7->VAR16[VAR4], VAR9);
        if (VAR10 < 0)
        {
            return VAR10