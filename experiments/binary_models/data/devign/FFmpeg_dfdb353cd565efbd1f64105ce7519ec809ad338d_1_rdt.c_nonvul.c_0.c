FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    const char *VAR6;
    int VAR7 = 0, VAR8 = 0;
    VAR3 *VAR9;
    if (*VAR5 == '')
        VAR5++;
    while (1)
    {
        if (!(VAR6 = strchr(VAR5, '')))
            break;
        if (!VAR8 && VAR6 != VAR5)
        {
            if (VAR7 > 0)
                VAR9 = FUN2(VAR2, VAR4);
            else
                VAR9 = VAR4;
            if (!VAR9)
                break;
            FUN3(VAR9, VAR5, VAR6);
            VAR7++;
        }
        VAR5 = VAR6 + 1;
        VAR8 ^= 1;
    }
}