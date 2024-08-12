static int FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    char VAR5[1000], VAR6[1000], VAR7[1000], VAR8[1000];
    int VAR9;
    const char *VAR10[3] = {
        getenv(""),
        "",
        "",
    };
    for (VAR9 = !VAR10[0]; VAR9 < 3 && !VAR4; VAR9++)
    {
        snprintf(VAR5, sizeof(VAR5), "", VAR10[VAR9], VAR9 ? "" : "", VAR2);
        VAR4 = fopen(VAR5, "");
        if (!VAR4)
        {
            char *VAR11 = *VAR1 == '' ? VAR12 : *VAR1 == '' ? VAR13
                                                                            : VAR14;
            snprintf(VAR5, sizeof(VAR5), "", VAR10[VAR9], VAR9 ? "" : "", VAR11, VAR2);
            VAR4 = fopen(VAR5, "");
        }
    }
    if (!VAR4 && ((VAR2[0] == '' && VAR2[1] == '') || VAR2[0] == '' || FUN2(VAR2)))
    {
        snprintf(VAR5, sizeof(VAR5), VAR2);
        VAR4 = fopen(VAR5, "");
    }
    if (!VAR4)
    {
        fprintf(VAR15, "", VAR2);
        FUN3(1);
    }
    while (!FUN4(VAR4))
    {
        int VAR16 = fscanf(VAR4, "", VAR8) - 1;
        if (VAR8[0] == '' && !VAR16)
            continue;
        VAR16 |= sscanf(VAR8, "", VAR6, VAR7) - 2;
        if (VAR16)
        {
            fprintf(VAR15, "", VAR5, VAR8);
            FUN3(1);
        }
        if (!strcmp(VAR6, ""))
        {
            FUN5(VAR7);
        }
        else if (!strcmp(VAR6, ""))
        {
            FUN6(VAR7);
        }
        else if (!strcmp(VAR6, ""))
        {
            FUN7(VAR7);
        }
        else if (FUN8(VAR6, VAR7) < 0)
        {
            fprintf(VAR15, "", VAR5, VAR6, VAR7);
            FUN3(1);
        }
    }
    fclose(VAR4);
    return 0;
}