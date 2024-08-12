static int FUN1(char *VAR1)
{
    char VAR2[100];
    VAR3 *VAR4;
    VAR4 = fopen("", "");
    if (VAR4 == NULL)
    {
        return 0;
    }
    while (fscanf(VAR4, "" FUN2(VAR5) "", VAR1, VAR2) == 2)
    {
        if (strcmp(VAR2, "") == 0)
        {
            break;
        }
    }
    fclose(VAR4);
    if (strcmp(VAR2, "") != 0)
    {
        return 0;
    }
    return 1;
}