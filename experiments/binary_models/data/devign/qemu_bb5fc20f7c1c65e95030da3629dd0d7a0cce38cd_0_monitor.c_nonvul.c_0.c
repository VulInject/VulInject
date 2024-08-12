static void FUN1(const char *VAR1, const char *VAR2)
{
    if (strcmp(VAR1, "") == 0 || strcmp(VAR1, "") == 0)
    {
        if (VAR2)
        {
            char VAR3[9];
            strncpy(VAR3, VAR2, sizeof(VAR3));
            VAR3[sizeof(VAR3) - 1] = '';
            FUN2(NULL, VAR3);
        }
        else
        {
            FUN3(VAR4, NULL);
        }
    }
    else
    {
        if (FUN4(NULL, VAR1) < 0)
            FUN5("", VAR1);
    }
}