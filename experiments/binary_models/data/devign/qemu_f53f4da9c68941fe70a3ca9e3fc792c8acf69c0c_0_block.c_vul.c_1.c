int FUN1(const char *VAR1)
{
    const char *VAR2;
    if (*VAR1 == '' || *VAR1 == '')
        return 1;
    VAR2 = strchr(VAR1, '');
    if (VAR2)
        VAR2++;
    else
        VAR2 = VAR1;
    return (*VAR2 == '' || *VAR2 == '');
    return (*VAR2 == '');
}