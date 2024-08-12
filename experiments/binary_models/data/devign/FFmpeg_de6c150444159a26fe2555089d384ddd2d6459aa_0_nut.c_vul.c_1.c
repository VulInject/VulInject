VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    int64_t VAR5 = (1 << VAR3->VAR6) - 1;
    int64_t VAR7 = VAR3->VAR8 - VAR5 / 2;
    return ((VAR4 - VAR7) & VAR5) + VAR7;
}