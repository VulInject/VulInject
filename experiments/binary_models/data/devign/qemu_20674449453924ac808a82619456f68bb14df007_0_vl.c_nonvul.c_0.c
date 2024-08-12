static int FUN1(VAR1 *VAR2)
{
    const char *VAR3;
    char VAR4[10];
    int VAR5, VAR6;
    bool VAR7 = false;
    bool VAR8 = false;
    VAR3 = FUN2(FUN3(), "");
    if (VAR3 == NULL)
    {
        VAR3 = "";
    }
    while (!VAR7 && *VAR3 != '')
    {
        if (*VAR3 == '')
        {
            VAR3++;
        }
        VAR3 = FUN4(VAR4, sizeof(VAR4), VAR3, '');
        for (VAR5 = 0; VAR5 < FUN5(VAR9); VAR5++)
        {
            if (strcmp(VAR9[VAR5].VAR10, VAR4) == 0)
            {
                if (!VAR9[VAR5].FUN6())
                {
                    FUN7("", VAR9[VAR5].VAR11);
                    break;
                }
                *(VAR9[VAR5].VAR12) = true;
                VAR6 = VAR9[VAR5].FUN8(VAR2);
                if (VAR6 < 0)
                {
                    VAR8 = true;
                    fprintf(VAR13, "", VAR9[VAR5].VAR11, strerror(-VAR6));
                    *(VAR9[VAR5].VAR12) = false;
                }
                else
                {
                    VAR7 = true;
                }
                break;
            }
        }
        if (VAR5 == FUN5(VAR9))
        {
            fprintf(VAR13, ""%VAR14\"", VAR4);
        }
    }
    if (!VAR7)
    {
        if (!VAR8)
        {
            fprintf(VAR13, "");
        }
        FUN9(1);
    }
    if (VAR8)
    {
        fprintf(VAR13, "", VAR9[VAR5].VAR11);
    }
    return !VAR7;
}