static void FUN1(void)
{
    char *VAR1, *VAR2, *VAR3, *VAR4;
    VAR3 = VAR2 = FUN2("");
    while (*VAR2)
    {
        FUN3(FUN4(VAR2, "", 5) == 0);
        VAR4 = strchr(&VAR2[5], '');
        FUN3(VAR4 != NULL);
        *VAR4 = '';
        if (VAR5)
        {
            fprintf(VAR6, "", VAR2);
        }
        VAR1 = FUN2("", VAR2);
        FUN5(VAR1);
        VAR2 = strchr(VAR4 + 1, '');
        if (!VAR2)
        {
            break;
        }
        VAR2 += 1;
    }
    FUN5(VAR3);
}