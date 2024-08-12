int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    const struct
    {
        const char *VAR4;
        int VAR5;
    } VAR6[] = {
        {"", VAR7},
        {"", VAR8},
        {"", VAR9},
        {"", VAR10},
        {"", VAR11},
        {"", VAR12},
        {"", VAR13},
        {"", VAR14},
    };
    char *VAR15;
    int VAR5;
    int VAR16;
    for (VAR16 = 0; VAR16 < FUN2(VAR6); VAR16++)
    {
        if (!strcmp(VAR6[VAR16].VAR4, VAR3))
        {
            FUN3(VAR6[VAR16].VAR5);
            return 0;
        }
    }
    VAR5 = FUN4(VAR3, &VAR15, 10);
    if (*VAR15)
    {
        FUN5(NULL, VAR9, ""%VAR17\""
                                   "",
               VAR3);
        for (VAR16 = 0; VAR16 < FUN2(VAR6); VAR16++)
            FUN5(NULL, VAR9, ""%VAR17\"", VAR6[VAR16].VAR4);
        FUN6(1);
    }
    FUN3(VAR5);
    return 0;
}