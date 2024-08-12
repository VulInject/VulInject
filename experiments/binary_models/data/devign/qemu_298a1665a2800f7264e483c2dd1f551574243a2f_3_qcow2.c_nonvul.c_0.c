static bool FUN1(VAR1 *VAR2, int64_t VAR3, uint32_t VAR4)
{
    int VAR5;
    int64_t VAR6;
    if (VAR3 + VAR4 > VAR2->VAR7)
    {
        VAR4 = VAR2->VAR7 - VAR3;
    }
    if (!VAR4)
    {
        return true;
    }
    VAR6 = FUN2(VAR2, NULL, VAR3, VAR4, &VAR5, NULL);
    return VAR6 >= 0 && (VAR6 & VAR8) && VAR5 == VAR4;
}