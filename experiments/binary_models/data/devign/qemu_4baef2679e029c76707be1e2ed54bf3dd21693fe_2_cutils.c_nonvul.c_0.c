int FUN1(const char *VAR1, const char **VAR2, int VAR3, unsigned long *VAR4)
{
    char *VAR5;
    if (!VAR1)
    {
        if (VAR2)
        {
            *VAR2 = VAR1;
        }
        return -VAR6;
    }
    VAR7 = 0;
    *VAR4 = FUN2(VAR1, &VAR5, VAR3);
    if (VAR7 == VAR8)
    {
        *VAR4 = -1;
    }
    return FUN3(VAR1, VAR5, VAR2, VAR7);
}