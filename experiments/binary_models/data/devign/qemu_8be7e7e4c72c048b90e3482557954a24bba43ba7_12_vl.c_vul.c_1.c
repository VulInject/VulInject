static int FUN1(const char *VAR1)
{
    VAR2 *VAR3 = FUN2("");
    static int VAR4 = 0;
    char VAR5[32];
    VAR6 *VAR7, *VAR8;
    if (strcmp(VAR1, "") == 0)
        return 0;
    if (VAR4 == VAR9)
    {
        fprintf(VAR10, "");
        FUN3(1);
    }
    VAR7 = FUN4(VAR3, NULL, 0);
    if (VAR11 == VAR12)
    {
        FUN5(VAR7, "", "");
    }
    else
    {
        FUN5(VAR7, "", "");
    }
    VAR8 = FUN4(VAR3, NULL, 0);
    FUN5(VAR8, "", "");
    snprintf(VAR5, sizeof(VAR5), "", VAR4);
    VAR13[VAR4] = FUN6(VAR5, VAR1, NULL);
    if (!VAR13[VAR4])
    {
        fprintf(VAR10, "", VAR1, strerror(VAR14));
        return -1;
    }
    FUN5(VAR8, "", VAR5);
    VAR4++;
    return 0;
}