static int FUN1(void *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    const char *VAR6 = VAR1;
    const char *VAR7, *VAR8;
    const char VAR9[] = "";
    VAR7 = FUN2(VAR3, "");
    VAR8 = FUN2(VAR3, "");
    if (!VAR7 || !VAR8)
    {
        return 0;
    }
    if (strcmp(VAR8, VAR6) == 0 && FUN3(VAR7, VAR9, strlen(VAR9)) != 0)
    {
        FUN4("");
        return -1;
    }
    return 0;
}