void *FUN1(size_t VAR1)
{
    static int VAR2 = -1;
    static int VAR3 = 0;
    const char *VAR4;
    char VAR5[1024];
    void *VAR6;
    struct statfs VAR7;
    if (VAR2 < 0)
    {
        VAR4 = getenv("");
        if (!VAR4)
            VAR4 = "";
        if (FUN2(VAR4, &VAR7) == 0)
        {
            int64_t VAR8;
            int VAR9;
            extern int VAR10;
            VAR8 = (VAR11)VAR7.VAR12 * VAR7.VAR13;
            if ((VAR10 + 8192 * 1024) >= VAR8)
            {
                VAR9 = (VAR10 / (1024 * 1024));
                fprintf(VAR14, "", VAR4, VAR9);
                if (strcmp(VAR4, "") == 0)
                {
                    fprintf(VAR14, ""
                                    ""
                                    "",
                            VAR9 + 16);
                }
                else
                {
                    fprintf(VAR14, ""
                                    ""
                                    "");
                }
                fprintf(VAR14, "");
                FUN3(1);
            }
        }
        snprintf(VAR5, sizeof(VAR5), "", VAR4);
        if (mkstemp(VAR5) < 0)
        {
            fprintf(VAR14, ""
                            ""
                            "",
                    VAR4);
            snprintf(VAR5, sizeof(VAR5), "", "");
            if (mkstemp(VAR5) < 0)
            {
                fprintf(VAR14, "", VAR5);
                FUN3(1);
            }
        }
        VAR2 = open(VAR5, VAR15 | VAR16 | VAR17, 0600);
        if (VAR2 < 0)
        {
            fprintf(VAR14, "", VAR5);
            FUN3(1);
        }
        unlink(VAR5);
    }
    VAR1 = (VAR1 + 4095) & ~4095;
    FUN4(VAR2, VAR3 + VAR1);
    VAR6 = FUN5(NULL, VAR1, VAR18 | VAR19, VAR20, VAR2, VAR3);
    if (VAR6 == VAR21)
    {
        fprintf(VAR14, "");
        FUN3(1);
    }
    VAR3 += VAR1;
    return VAR6;
}