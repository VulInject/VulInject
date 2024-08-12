static int FUN1(const char *VAR1)
{
    static int VAR2 = 0;
    char VAR3[32];
    if (strcmp(VAR1, "") == 0)
        return 0;
    if (VAR2 == VAR4)
    {
        FUN2("");
        FUN3(1);
    }
    snprintf(VAR3, sizeof(VAR3), "", VAR2);
    VAR5[VAR2] = FUN4(VAR3, VAR1, NULL);
    if (!VAR5[VAR2])
    {
        FUN2(""
                     "",
                     VAR1);
        return -1;
    }
    VAR2++;
    return 0;
}