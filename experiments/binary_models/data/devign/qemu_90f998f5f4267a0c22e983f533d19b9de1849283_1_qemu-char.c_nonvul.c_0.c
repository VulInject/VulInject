static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    char VAR5[15] = "";
    char VAR6[50] = "";
    if (VAR7 > 0 && VAR7 < 26)
    {
        snprintf(VAR6, sizeof(VAR6), "");
        snprintf(VAR5, sizeof(VAR5), "", VAR7 - 1 + '');
    }
    else
    {
        snprintf(VAR6, sizeof(VAR6), "", VAR7);
    }
    FUN2(VAR2, (VAR8 *)VAR6, strlen(VAR6));
    for (VAR3 = 0; VAR9[VAR3] != NULL; VAR3++)
    {
        for (VAR4 = 0; VAR9[VAR3][VAR4] != ''; VAR4++)
        {
            if (VAR9[VAR3][VAR4] == '')
                FUN2(VAR2, (VAR8 *)VAR5, strlen(VAR5));
            else
                FUN2(VAR2, (VAR8 *)&VAR9[VAR3][VAR4], 1);
        }
    }
}