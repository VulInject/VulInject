int FUN1(int *VAR1, const char *VAR2, void *VAR3)
{
    char *VAR4;
    int VAR5 = FUN2(VAR2, &VAR4, 10);
    if (*VAR4)
    {
        VAR5 = !strcmp(VAR2, "") ? 0 : !strcmp(VAR2, "") ? 1
                                                                     : -1;
    }
    if (VAR5 != 0 && VAR5 != 1)
    {
        FUN3(VAR3, VAR6, "", VAR2);
        return FUN4(VAR7);
    }
    *VAR1 = VAR5;
    return 0;
}