static int FUN1(void)
{
    const char *VAR1 = NULL;
    char VAR2[10];
    int VAR3, VAR4;
    bool VAR5 = false;
    bool VAR6 = false;
    VAR7 *VAR8 = FUN2("");
    if (!FUN3(&VAR8->VAR9))
    {
        VAR1 = FUN4(FUN5(&VAR8->VAR9), "");
    }
    if (VAR1 == NULL)
    {
        VAR1 = "";
    }
    while (!VAR5 && *VAR1 != '')
    {
        if (*VAR1 == '')
        {
            VAR1++;
        }
        VAR1 = FUN6(VAR2, sizeof(VAR2), VAR1, '');
        for (VAR3 = 0; VAR3 < FUN7(VAR10); VAR3++)
        {
            if (strcmp(VAR10[VAR3].VAR11, VAR2) == 0)
            {
                if (!VAR10[VAR3].FUN8())
                {
                    FUN9("", VAR10[VAR3].VAR12);
                    continue;
                }
                *(VAR10[VAR3].VAR13) = true;
                VAR4 = VAR10[VAR3].FUN10();
                if (VAR4 < 0)
                {
                    VAR6 = true;
                    fprintf(VAR14, "", VAR10[VAR3].VAR12, strerror(-VAR4));
                    *(VAR10[VAR3].VAR13) = false;
                }
                else
                {
                    VAR5 = true;
                }
                break;
            }
        }
        if (VAR3 == FUN7(VAR10))
        {
            fprintf(VAR14, ""%VAR15\"", VAR2);
        }
    }
    if (!VAR5)
    {
        if (!VAR6)
        {
            fprintf(VAR14, "");
        }
        FUN11(1);
    }
    if (VAR6)
    {
        fprintf(VAR14, "", VAR10[VAR3].VAR12);
    }
    return !VAR5;
}