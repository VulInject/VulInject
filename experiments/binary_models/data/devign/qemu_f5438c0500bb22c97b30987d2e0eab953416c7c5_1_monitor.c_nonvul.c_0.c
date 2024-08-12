static void FUN1(const char *VAR1, int *VAR2, char **VAR3)
{
    const char *VAR4;
    int VAR5, VAR6;
    char VAR7[1024];
    VAR4 = VAR1;
    VAR5 = 0;
    for (;;)
    {
        while (FUN2(*VAR4))
        {
            VAR4++;
        }
        if (*VAR4 == '')
        {
            break;
        }
        if (VAR5 >= VAR8)
        {
            break;
        }
        VAR6 = FUN3(VAR7, sizeof(VAR7), &VAR4);
        VAR3[VAR5] = FUN4(VAR7);
        VAR5++;
        if (VAR6 < 0)
        {
            break;
        }
    }
    *VAR2 = VAR5;
}