static int FUN1(void)
{
    const char *VAR1 = NULL;
    char VAR2[10];
    int VAR3, VAR4;
    bool VAR5 = 0;
    bool VAR6 = 0;
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
                *(VAR10[VAR3].VAR12) = 1;
                VAR4 = VAR10[VAR3].FUN8();
                if (VAR4 < 0)
                {
                    VAR6 = 1;
                    if (!VAR10[VAR3].FUN9())
                    {
                        FUN10("", VAR10[VAR3].VAR13);
                    }
                    else
                    {
                        fprintf(VAR14, "", VAR10[VAR3].VAR13, strerror(-VAR4));
                    }
                    *(VAR10[VAR3].VAR12) = 0;
                }
                else
                {
                    VAR5 = 1;
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
        fprintf(VAR14, "");
        FUN11(1);
    }
    if (VAR6)
    {
        fprintf(VAR14, "", VAR10[VAR3].VAR13);
    }
    return !VAR5;
}