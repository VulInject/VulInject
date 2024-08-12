void FUN1(const char *VAR1)
{
    struct VAR2 *VAR3;
    if (FUN2(VAR1))
    {
    VAR4:
        if (VAR5)
        {
            FUN3("");
            for (VAR3 = VAR2; VAR3->VAR6; ++VAR3)
            {
                FUN3("", VAR3->VAR6, VAR3->VAR7);
            }
            FUN3("");
        }
        else
        {
            FUN3(""
                   "");
        }
        FUN4(!FUN2(VAR1));
    }
    else
    {
        size_t VAR8;
        const char *VAR9;
        char *VAR10;
        int VAR11 = 0;
        if (!strcmp(VAR1, ""))
        {
            for (VAR3 = VAR2; VAR3->VAR6; ++VAR3)
            {
                VAR3->VAR12 = 1;
            }
            return;
        }
        VAR9 = VAR1;
        while (*VAR9)
        {
            VAR10 = strchr(VAR9, '');
            VAR8 = !VAR10 ? strlen(VAR9) : (VAR13)(VAR10 - VAR9);
            for (VAR3 = VAR2; VAR3->VAR6; ++VAR3)
            {
                if (!FUN5(VAR3->VAR6, VAR9, VAR8) && !VAR3->VAR6[VAR8])
                {
                    VAR3->VAR12 = 1;
                    break;
                }
            }
            if (!VAR3->VAR6)
            {
                if (VAR8 > 80)
                {
                    fprintf(VAR14, "");
                }
                else
                {
                    fprintf(VAR14, "", (int)VAR8, VAR9);
                }
                VAR11 = 1;
            }
            VAR9 += VAR8 + (VAR10 != NULL);
        }
        if (VAR11)
        {
            goto VAR4;
        }
    }
}