static int FUN1(const char *VAR1)
{
    VAR2 *VAR3 = FUN2("");
    static int VAR4 = 0;
    char VAR5[32];
    VAR6 *VAR7;
    if (strcmp(VAR1, "") == 0)
    {
        return 0;
    }
    if (VAR4 == VAR8)
    {
        FUN3("");
        FUN4(1);
    }
    assert(VAR9 == VAR10);
    VAR7 = FUN5(VAR3, NULL, 0, NULL);
    FUN6(VAR7, "", "", &VAR11);
    snprintf(VAR5, sizeof(VAR5), "", VAR4);
    VAR12[VAR4] = FUN7(VAR5, VAR1, NULL);
    if (!VAR12[VAR4])
    {
        FUN3(""
                     "",
                     VAR1);
        return -1;
    }
    FUN6(VAR7, "", VAR5, &VAR11);
    VAR4++;
    return 0;
}