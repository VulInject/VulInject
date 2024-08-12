static int FUN1(void *VAR1, VAR2 **VAR3, int *VAR4, const char *VAR5)
{
    char *VAR6;
    int VAR7, VAR8 = 0;
    char *VAR9 = FUN2(VAR5);
    char *VAR10 = NULL;
    if (!VAR9)
        return FUN3(VAR11);
    *VAR4 = 1;
    for (VAR6 = VAR9; *VAR6; VAR6++)
        if (*VAR6 == '')
            (*VAR4)++;
    *VAR3 = FUN4(sizeof(**VAR3) * *VAR4);
    if (!*VAR3)
    {
        FUN5(VAR1, VAR12, "");
        FUN6(FUN3(VAR11));
    }
    VAR6 = VAR9;
    for (VAR7 = 0; VAR7 < *VAR4; VAR7++)
    {
        int64_t VAR13;
        char *VAR14 = FUN7(VAR6, "", &VAR10);
        FUN8(VAR14);
        VAR6 = NULL;
        VAR8 = FUN9(&VAR13, VAR14, 1);
        if (VAR8 < 0)
        {
            FUN5(VAR1, VAR12, "", VAR6);
            FUN6(FUN3(VAR15));
        }
        (*VAR3)[VAR7] = VAR13;
        if (VAR7 && (*VAR3)[VAR7 - 1] > (*VAR3)[VAR7])
        {
            FUN5(VAR1, VAR12, "", (float)((*VAR3)[VAR7]) / 1000000, (float)((*VAR3)[VAR7 - 1]) / 1000000);
            FUN6(FUN3(VAR15));
        }
    }
VAR16:
    FUN10(VAR9);
    return VAR8;
}