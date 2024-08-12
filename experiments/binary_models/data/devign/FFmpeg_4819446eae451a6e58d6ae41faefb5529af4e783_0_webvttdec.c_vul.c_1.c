static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4, VAR5, VAR6 = 0;
    while (*VAR3)
    {
        for (VAR4 = 0; VAR4 < FUN2(VAR7); VAR4++)
        {
            const char *VAR8 = VAR7[VAR4].VAR8;
            const size_t VAR9 = strlen(VAR8);
            if (!FUN3(VAR3, VAR8, VAR9))
            {
                FUN4(VAR2, "", VAR7[VAR4].VAR10);
                VAR3 += VAR9;
                VAR5 = 1;
                break;
            }
        }
        if (!*VAR3)
            break;
        if (VAR5)
        {
            VAR5 = 0;
            VAR6 = 0;
            continue;
        }
        if (*VAR3 == '')
            VAR6 = 1;
        else if (*VAR3 == '')
            VAR6 = 0;
        else if (VAR3[0] == '' && VAR3[1])
            FUN4(VAR2, "");
        else if (!VAR6 && *VAR3 != '')
            FUN5(VAR2, *VAR3, 1);
        VAR3++;
    }
    return 0;
}