static bool FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    int64_t VAR5;
    int VAR6;
    int64_t VAR7;
    VAR7 = FUN2(VAR3, VAR8);
    VAR4 = FUN3(VAR3 + VAR4, VAR8) - VAR7;
    if (VAR7 + VAR4 > VAR2->VAR9 * VAR8)
    {
        VAR4 = VAR2->VAR9 * VAR8 - VAR7;
    }
    if (!VAR4)
    {
        return true;
    }
    VAR6 = FUN4(VAR2, NULL, VAR7, VAR4, &VAR5, NULL, NULL);
    return VAR6 >= 0 && (VAR6 & VAR10) && VAR5 == VAR4;
}