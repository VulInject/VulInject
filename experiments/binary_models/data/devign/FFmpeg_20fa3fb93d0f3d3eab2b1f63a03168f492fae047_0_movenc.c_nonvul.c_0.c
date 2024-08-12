static int FUN1(VAR1 *VAR2, int VAR3)
{
    int64_t VAR4;
    if (VAR3 >= VAR2->VAR5)
        return 0;
    if (VAR3 + 1 == VAR2->VAR5)
        VAR4 = VAR2->VAR6 + VAR2->VAR7;
    else
        VAR4 = VAR2->VAR8[VAR3 + 1].VAR9;
    VAR4 -= VAR2->VAR8[VAR3].VAR9;
    FUN2(VAR4 >= 0);
    FUN2(VAR4 <= VAR10);
    return VAR4;
}