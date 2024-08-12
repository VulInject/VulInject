int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, int VAR6)
{
    int VAR7;
    if ((VAR5 + VAR6) <= VAR2->VAR8)
        return VAR6;
    if (VAR5 >= VAR2->VAR8)
        VAR7 = 0;
    else
        VAR7 = VAR2->VAR8 - VAR5;
    FUN2(VAR4, 0, 512 * (VAR6 - VAR7));
    return VAR7;
}