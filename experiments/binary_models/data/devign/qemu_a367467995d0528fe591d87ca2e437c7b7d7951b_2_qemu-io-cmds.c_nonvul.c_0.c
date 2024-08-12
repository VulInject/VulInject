static int FUN1(VAR1 *VAR2, char *VAR3, int64_t VAR4, int64_t VAR5, VAR6 *VAR7)
{
    int VAR8;
    if (VAR5 >> 9 > VAR9)
    {
        return -VAR10;
    }
    VAR8 = FUN2(VAR2, VAR4 >> 9, (VAR11 *)VAR3, VAR5 >> 9);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    *VAR7 = VAR5;
    return 1;
}