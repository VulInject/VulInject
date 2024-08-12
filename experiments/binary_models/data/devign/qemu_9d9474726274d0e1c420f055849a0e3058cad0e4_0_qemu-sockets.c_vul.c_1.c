int FUN1(VAR1 *VAR2)
{
    struct sockaddr_un VAR3;
    const char *VAR4 = FUN2(VAR2, "");
    int VAR5;
    if (NULL == VAR4)
    {
        fprintf(VAR6, "");
        return -1;
    }
    VAR5 = FUN3(VAR7, VAR8, 0);
    if (VAR5 < 0)
    {
        FUN4("");
        return -1;
    }
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR9 = VAR10;
    snprintf(VAR3.VAR11, sizeof(VAR3.VAR11), "", VAR4);
    if (connect(VAR5, (struct VAR12 *)&VAR3, sizeof(VAR3)) < 0)
    {
        fprintf(VAR6, "", VAR4, strerror(VAR13));
        return -1;
    }
    if (VAR14)
        fprintf(VAR6, "", VAR4);
    return VAR5;