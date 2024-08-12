int FUN1(const char *VAR1, const char **VAR2, int VAR3, unsigned long *VAR4)
{
    char *VAR5;
    int VAR6 = 0;
    if (!VAR1)
    {
        if (VAR2)
        {
            *VAR2 = VAR1;
        }
        VAR6 = -VAR7;
    }
    else
    {
        VAR8 = 0;
        *VAR4 = FUN2(VAR1, &VAR5, VAR3);
        VAR6 = FUN3(VAR2, VAR5, VAR8);
    }
    return VAR6;
}