int FUN1(int argc, char **argv, const VAR1 *VAR2, const char *VAR3)
{
    const VAR1 *VAR4;
    int VAR5;
    for (VAR5 = 1; VAR5 < argc; VAR5++)
    {
        const char *VAR6 = argv[VAR5];
        if (*VAR6++ != '')
            continue;
        VAR4 = FUN2(VAR2, VAR6);
        if (!VAR4->VAR7 && VAR6[0] == '' && VAR6[1] == '')
            VAR4 = FUN2(VAR2, VAR6 + 2);
        if ((!VAR4->VAR7 && !strcmp(VAR6, VAR3)) || (VAR4->VAR7 && !strcmp(VAR3, VAR4->VAR7)))
            return VAR5;
        if (!VAR4->VAR7 || VAR4->VAR8 & VAR9)
            VAR5++;
    }
    return 0;
}