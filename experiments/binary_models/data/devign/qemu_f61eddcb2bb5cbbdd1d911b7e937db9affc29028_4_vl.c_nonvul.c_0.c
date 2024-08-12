static struct VAR1 *FUN1(const char *VAR2)
{
    struct VAR3 *VAR4;
    int VAR5 = 0;
    char *VAR6 = strstr(VAR2, "");
    int VAR7 = (VAR6 ? VAR6 - VAR2 : strlen(VAR2)) + 1;
    char VAR8[10];
    FUN2(VAR8, FUN3(sizeof(VAR8), VAR7), VAR2);
    if (VAR6)
    {
        VAR5 = FUN4(VAR6 + 6, &VAR6, 0);
        if (*VAR6)
        {
            FUN5("");
            return 0;
        }
    }
    VAR4 = FUN6(VAR5);
    if (!VAR4->VAR9)
        FUN5("", VAR5);
    if (!strcmp(VAR8, ""))
        return FUN7(VAR4);
    FUN5("", VAR8);
    return 0;
}