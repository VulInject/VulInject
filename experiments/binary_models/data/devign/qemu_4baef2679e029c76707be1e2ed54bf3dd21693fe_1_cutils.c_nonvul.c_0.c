static int FUN1(const char *VAR1, char *VAR2, const char **VAR3, int VAR4)
{
    if (VAR3)
    {
        *VAR3 = VAR2;
    }
    if (VAR4 == 0 && VAR2 == VAR1)
    {
        return -VAR5;
    }
    if (!VAR3 && *VAR2)
    {
        return -VAR5;
    }
    return -VAR4;
}