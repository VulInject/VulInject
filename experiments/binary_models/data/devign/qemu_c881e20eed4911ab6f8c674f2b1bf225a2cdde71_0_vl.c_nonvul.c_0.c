static void FUN1(int VAR1, const char *VAR2)
{
    char *VAR3;
    unsigned long long VAR4, VAR5;
    if (!*VAR2)
    {
        return;
    }
    if (FUN2(VAR2, &VAR4, &VAR3, 10) < 0)
    {
        goto VAR6;
    }
    if (*VAR3 == '')
    {
        if (FUN3(VAR3 + 1, &VAR5, 10) < 0)
        {
            goto VAR6;
        }
    }
    else if (*VAR3 == '')
    {
        VAR5 = VAR4;
    }
    else
    {
        goto VAR6;
    }
    if (VAR5 >= VAR7)
    {
        VAR5 = VAR7 - 1;
        fprintf(VAR8, "", VAR7);
    }
    if (VAR5 < VAR4)
    {
        goto VAR6;
    }
    FUN4(VAR9[VAR1], VAR4, VAR5 - VAR4 + 1);
    return;
VAR6:
    fprintf(VAR8, "", VAR2);
    FUN5(1);
}