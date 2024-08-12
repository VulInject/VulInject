static void FUN1(const char *VAR1)
{
    char VAR2[128];
    char *VAR3;
    unsigned long long VAR4, VAR5;
    unsigned long long VAR6;
    VAR4 = VAR5 = 0ULL;
    VAR1 = FUN2(VAR2, 128, VAR1, '');
    if (*VAR1 == '')
    {
        VAR1++;
    }
    if (!strcmp(VAR2, ""))
    {
        if (VAR7 >= VAR8)
        {
            fprintf(VAR9, "");
            FUN3(1);
        }
        if (FUN4(VAR2, 128, "", VAR1) == 0)
        {
            VAR6 = VAR7;
        }
        else
        {
            VAR6 = FUN5(VAR2, NULL, 10);
        }
        if (VAR6 >= VAR8)
        {
            fprintf(VAR9, "", VAR6);
            FUN3(1);
        }
        if (FUN4(VAR2, 128, "", VAR1) == 0)
        {
            VAR10[VAR6] = 0;
        }
        else
        {
            int64_t VAR11;
            VAR11 = FUN6(VAR2, &VAR3);
            if (VAR11 < 0 || *VAR3)
            {
                fprintf(VAR9, "", VAR1);
                FUN3(1);
            }
            VAR10[VAR6] = VAR11;
        }
        if (FUN4(VAR2, 128, "", VAR1) != 0)
        {
            VAR4 = FUN5(VAR2, &VAR3, 10);
            if (*VAR3 == '')
            {
                VAR5 = FUN5(VAR3 + 1, &VAR3, 10);
            }
            else
            {
                VAR5 = VAR4;
            }
            if (!(VAR5 < VAR12))
            {
                VAR5 = VAR12 - 1;
                fprintf(VAR9, "", VAR12);
            }
            FUN7(VAR13[VAR6], VAR4, VAR5 - VAR4 + 1);
        }
        VAR7++;
    }
    else
    {
        fprintf(VAR9, "", VAR2);
        FUN3(1);
    }
}