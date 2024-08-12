int FUN1(const char *VAR1, const char **VAR2, int VAR3, VAR4 *VAR5)
{
    char *VAR6;
    int VAR7 = 0;
    if (!VAR1)
    {
        if (VAR2)
        {
            *VAR2 = VAR1;
        }
        VAR7 = -VAR8;
    }
    else
    {
        VAR9 = 0;
        *VAR5 = FUN2(VAR1, &VAR6, VAR3);
        VAR7 = FUN3(VAR2, VAR6, VAR9);
    }
    return VAR7;
}