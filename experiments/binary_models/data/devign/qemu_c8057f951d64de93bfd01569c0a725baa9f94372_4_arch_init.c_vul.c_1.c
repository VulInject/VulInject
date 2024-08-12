void FUN1(const char *VAR1)
{
    struct VAR2 *VAR3;
    if (*VAR1 == '')
    {
    VAR4:
        FUN2("");
        for (VAR3 = VAR2; VAR3->VAR5; ++VAR3)
        {
            FUN2("", VAR3->VAR5, VAR3->VAR6);
        }
        FUN2("");
        FUN3(*VAR1 != '');
    }
    else
    {
        size_t VAR7;
        const char *VAR8;
        char *VAR9;
        int VAR10 = 0;
        if (!strcmp(VAR1, ""))
        {
            for (VAR3 = VAR2; VAR3->VAR5; ++VAR3)
            {
                VAR3->VAR11 = 1;
            }
            return;
        }
        VAR8 = VAR1;
        while (*VAR8)
        {
            VAR9 = strchr(VAR8, '');
            VAR7 = !VAR9 ? strlen(VAR8) : (VAR12)(VAR9 - VAR8);
            for (VAR3 = VAR2; VAR3->VAR5; ++VAR3)
            {
                if (!FUN4(VAR3->VAR5, VAR8, VAR7) && !VAR3->VAR5[VAR7])
                {
                    VAR3->VAR11 = 1;
                    break;
                }
            }
            if (!VAR3->VAR5)
            {
                if (VAR7 > 80)
                {
                    fprintf(VAR13, "");
                }
                else
                {
                    fprintf(VAR13, "", (int)VAR7, VAR8);
                }
                VAR10 = 1;
            }
            VAR8 += VAR7 + (VAR9 != NULL);
        }
        if (VAR10)
        {
            goto VAR4;
        }
    }
}