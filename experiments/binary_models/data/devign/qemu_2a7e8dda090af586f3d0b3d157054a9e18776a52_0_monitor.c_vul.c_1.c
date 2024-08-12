static void FUN1(const char *VAR1)
{
    if (strcmp(VAR1, "") == 0 || strcmp(VAR1, "") == 0)
    {
        char VAR2[9];
        FUN2("", 1, VAR2, sizeof(VAR2) - 1);
        VAR2[sizeof(VAR2) - 1] = '';
        if (FUN3(NULL, VAR2) < 0)
            FUN4("");
    }
    else
    {
        if (FUN5(NULL, VAR1) < 0)
            FUN4("", VAR1);
    }
}