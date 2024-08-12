int FUN1(const char *VAR1)
{
    char VAR2[128];
    int VAR3;
    int VAR4;
    VAR4 = FUN2(VAR1, VAR5 | VAR6, 0600);
    if (VAR4 == -1)
    {
        return -1;
    }
    if (FUN3(VAR4, VAR7, 0) == -1)
    {
        close(VAR4);
        return -1;
    }
    VAR3 = snprintf(VAR2, sizeof(VAR2), VAR8 "", FUN4());
    if (write(VAR4, VAR2, VAR3) != VAR3)
    {
        close(VAR4);
        return -1;
    }
    close(VAR4);
    return 0;
}