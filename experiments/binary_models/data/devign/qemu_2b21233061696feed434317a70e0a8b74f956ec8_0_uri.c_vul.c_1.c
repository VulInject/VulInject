FUN1(VAR1 *VAR2, const char **VAR3)
{
    const char *VAR4 = *VAR3;
    if (FUN2(VAR4))
    {
        if (VAR2 != NULL)
            VAR2->VAR5 = 0;
        while (FUN2(VAR4))
        {
            if (VAR2 != NULL)
                VAR2->VAR5 = VAR2->VAR5 * 10 + (*VAR4 - '');
            VAR4++;
        }
        *VAR3 = VAR4;
        return (0);
    }
    return (1);
}