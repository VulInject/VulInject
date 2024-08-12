static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR4 < 0 || !VAR7->VAR9 && VAR4 > VAR7->VAR10 - VAR7->VAR11)
        return -1;
    VAR7->VAR12 = VAR4 % (VAR7->VAR10 - VAR7->VAR11 + 1) + VAR7->VAR11;
    VAR7->VAR13 = VAR4;
    return 0;
}