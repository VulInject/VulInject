static int FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    char VAR5[1000], VAR6[1000], VAR7[1000];
    int VAR8;
    const char *VAR9[3] = {
        getenv(""),
        "",
        "",
    };
    for (VAR8 = !VAR9[0]; VAR8 < 3 && !VAR4; VAR8++)
    {
        snprintf(VAR5, sizeof(VAR5), "", VAR9[VAR8], VAR8 ? "" : "", VAR2);
        VAR4 = fopen(VAR5, "");
        if (!VAR4)
        {
            char *VAR10 = *VAR1 == '' ? VAR11 : *VAR1 == '' ? VAR12
                                                                            : VAR13;
            snprintf(VAR5, sizeof(VAR5), "", VAR9[VAR8], VAR8 ? "" : "", VAR10, VAR2);
            VAR4 = fopen(VAR5, "");
        }
    }
    if (!VAR4 && ((VAR2[0] == '' && VAR2[1] == '') || VAR2[0] == ''))
    {
        VAR4 = fopen(VAR2, "");
    }
    if (!VAR4)
    {
        fprintf(VAR14, "");
        FUN2(1);
    }
    while (!FUN3(VAR4))
    {
        int VAR15 = fscanf(VAR4, "", VAR7) - 1;
        if (VAR7[0] == '' && !VAR15)
            continue;
        VAR15 |= sscanf(VAR7, "", VAR5, VAR6) - 2;
        if (VAR15)
        {
            fprintf(VAR14, "");
            FUN2(1);
        }
        if (!strcmp(VAR5, ""))
        {
            FUN4(VAR6);
        }
        else if (!strcmp(VAR5, ""))
        {
            FUN5(VAR6);
        }
        else if (!strcmp(VAR5, ""))
        {
            FUN6(VAR6);
        }
        else
            FUN7(VAR5, VAR6);
    }
    fclose(VAR4);
    return 0;
}