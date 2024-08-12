int FUN1(const char *VAR1, const char **VAR2, int VAR3, VAR4 *VAR5)
{
    char *VAR6;
    if (!VAR1)
    {
        if (VAR2)
        {
            *VAR2 = VAR1;
        }
        return -VAR7;
    }
    VAR8 = 0;
    *VAR5 = FUN2(VAR1, &VAR6, VAR3);
    return FUN3(VAR1, VAR6, VAR2, VAR8);
}