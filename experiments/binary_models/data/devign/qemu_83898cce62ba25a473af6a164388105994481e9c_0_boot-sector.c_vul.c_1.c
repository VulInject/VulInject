int FUN1(char *VAR1)
{
    int VAR2, VAR3;
    size_t VAR4 = sizeof VAR5;
    VAR2 = mkstemp(VAR1);
    if (VAR2 < 0)
    {
        fprintf(VAR6, ""%VAR7\"", VAR1, strerror(VAR8));
        return 1;
    }
    if (strcmp(FUN2(), "") == 0)
    {
        VAR4 = sprintf((char *)VAR5, "", FUN3(VAR9), VAR10 + VAR11, FUN4(VAR9), VAR10 + VAR11 + 1);
    }
    VAR3 = write(VAR2, VAR5, VAR4);
    close(VAR2);
    if (VAR3 != VAR4)
    {
        fprintf(VAR6, ""%VAR7\"", VAR1);
        return 1;
    }
    return 0;
}