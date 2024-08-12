static void FUN1(const char *VAR1)
{
    char VAR2[128];
    char *VAR3;
    unsigned long long VAR4, VAR5;
    int VAR6;
    VAR4 = VAR5 = 0ULL;
    VAR1 = FUN2(VAR2, 128, VAR1, '') + 1;
    if (!strcmp(VAR2, ""))
    {
        if (FUN3(VAR2, 128, "", VAR1) == 0)
        {
            VAR6 = VAR7;
        }
        else
        {
            VAR6 = FUN4(VAR2, NULL, 10);
        }
        if (FUN3(VAR2, 128, "", VAR1) == 0)
        {
            VAR8[VAR6] = 0;
        }
        else
        {
            int64_t VAR9;
            VAR9 = FUN5(VAR2, &VAR3);
            if (VAR9 < 0 || *VAR3)
            {
                fprintf(VAR10, "", VAR1);
                FUN6(1);
            }
            VAR8[VAR6] = VAR9;
        }
        if (FUN3(VAR2, 128, "", VAR1) != 0)
        {
            VAR4 = FUN4(VAR2, &VAR3, 10);
            if (*VAR3 == '')
            {
                VAR5 = FUN4(VAR3 + 1, &VAR3, 10);
            }
            else
            {
                VAR5 = VAR4;
            }
            if (!(VAR5 < VAR11))
            {
                VAR5 = VAR11 - 1;
                fprintf(VAR10, "", VAR11);
            }
            FUN7(VAR12[VAR6], VAR4, VAR5 - VAR4 + 1);
        }
        VAR7++;
    }
    return;
}