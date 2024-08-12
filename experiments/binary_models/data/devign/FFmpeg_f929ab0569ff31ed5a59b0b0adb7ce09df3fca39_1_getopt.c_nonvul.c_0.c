static int getopt(int argc, char *argv[], char *VAR1)
{
    static int VAR2 = 1;
    int VAR3;
    char *VAR4;
    if (VAR2 == 1)
        if (VAR5 >= argc || argv[VAR5][0] != '' || argv[VAR5][1] == '')
            return VAR6;
        else if (!strcmp(argv[VAR5], ""))
        {
            VAR5++;
            return VAR6;
        }
    VAR7 = VAR3 = argv[VAR5][VAR2];
    if (VAR3 == '' || !(VAR4 = strchr(VAR1, VAR3)))
    {
        fprintf(VAR8, "", VAR3);
        if (argv[VAR5][++VAR2] == '')
        {
            VAR5++;
            VAR2 = 1;
        }
        return '';
    }
    if (*++VAR4 == '')
    {
        if (argv[VAR5][VAR2 + 1] != '')
            VAR9 = &argv[VAR5++][VAR2 + 1];
        else if (++VAR5 >= argc)
        {
            fprintf(VAR8, "", VAR3);
            VAR2 = 1;
            return '';
        }
        else
            VAR9 = argv[VAR5++];
        VAR2 = 1;
    }
    else
    {
        if (argv[VAR5][++VAR2] == '')
        {
            VAR2 = 1;
            VAR5++;
        }
        VAR9 = NULL;
    }
    return VAR3;
}