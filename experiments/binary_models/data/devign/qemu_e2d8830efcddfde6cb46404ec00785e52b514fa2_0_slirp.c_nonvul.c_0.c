static int FUN1(VAR1 *VAR2, const char *VAR3, struct in_addr VAR4)
{
    static int VAR5;
    char VAR6[128];
    char VAR7[128];
    VAR8 *VAR9;
    snprintf(VAR2->VAR10, sizeof(VAR2->VAR10), "", (long)FUN2(), VAR5++);
    if (mkdir(VAR2->VAR10, 0700) < 0)
    {
        FUN3("", VAR2->VAR10);
        return -1;
    }
    snprintf(VAR6, sizeof(VAR6), "", VAR2->VAR10, "");
    VAR9 = fopen(VAR6, "");
    if (!VAR9)
    {
        FUN4(VAR2);
        FUN3("", VAR6);
        return -1;
    }
    fprintf(VAR9, ""
               ""
               ""
               ""
               ""
               ""
               ""
               ""
               ""
               ""
               ""
               ""
               "",
            VAR2->VAR10, VAR2->VAR10, VAR2->VAR10, VAR2->VAR10, VAR2->VAR10, VAR3);
    fclose(VAR9);
    snprintf(VAR7, sizeof(VAR7), "", VAR11, VAR6);
    if (FUN5(VAR2->VAR12, 0, VAR7, &VAR4, 139) < 0)
    {
        FUN4(VAR2);
        FUN3("");
        return -1;
    }
    return 0;
}