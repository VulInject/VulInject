static int FUN1(VAR1 *VAR2, const char *VAR3, struct in_addr VAR4)
{
    static int VAR5;
    char VAR6[128];
    char VAR7[128];
    struct VAR8 *VAR8;
    VAR9 *VAR10;
    VAR8 = getpwuid(FUN2());
    if (!VAR8)
    {
        FUN3("");
        snprintf(VAR2->VAR11, sizeof(VAR2->VAR11), "", (long)FUN4(), VAR5++);
        if (mkdir(VAR2->VAR11, 0700) < 0)
        {
            FUN3("", VAR2->VAR11);
            snprintf(VAR6, sizeof(VAR6), "", VAR2->VAR11, "");
            VAR10 = fopen(VAR6, "");
            if (!VAR10)
            {
                FUN5(VAR2);
                FUN3("", VAR6);
                fprintf(VAR10, ""
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
                           ""
                           "",
                        VAR2->VAR11, VAR2->VAR11, VAR2->VAR11, VAR2->VAR11, VAR2->VAR11, VAR2->VAR11, VAR3, VAR8->VAR12);
                fclose(VAR10);
                snprintf(VAR7, sizeof(VAR7), "", VAR13, VAR6);
                if (FUN6(VAR2->VAR14, 0, VAR7, &VAR4, 139) < 0)
                {
                    FUN5(VAR2);
                    FUN3("");
                    return 0