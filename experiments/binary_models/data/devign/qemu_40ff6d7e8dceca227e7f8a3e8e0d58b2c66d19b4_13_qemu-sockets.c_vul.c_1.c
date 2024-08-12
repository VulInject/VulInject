int FUN1(VAR1 *VAR2)
{
    struct sockaddr_un VAR3;
    const char *VAR4 = FUN2(VAR2, "");
    int VAR5, VAR6;
    VAR5 = socket(VAR7, VAR8, 0);
    if (VAR5 < 0)
    {
        FUN3("");
        return -1;
    }
    memset(&VAR3, 0, sizeof(VAR3));
    VAR3.VAR9 = VAR10;
    if (VAR4 && strlen(VAR4))
    {
        snprintf(VAR3.VAR11, sizeof(VAR3.VAR11), "", VAR4);
    }
    else
    {
        char *VAR12 = getenv("");
        snprintf(VAR3.VAR11, sizeof(VAR3.VAR11), "", VAR12 ? VAR12 : "");
        VAR6 = mkstemp(VAR3.VAR11);
        close(VAR6);
        FUN4(VAR2, "", VAR3.VAR11);
    }
    unlink(VAR3.VAR11);
    if (FUN5(VAR5, (struct VAR13 *)&VAR3, sizeof(VAR3)) < 0)
    {
        fprintf(VAR14, "", VAR3.VAR11, strerror(VAR15));
        goto VAR16;
    }
    if (FUN6(VAR5, 1) < 0)
    {
        fprintf(VAR14, "", VAR3.VAR11, strerror(VAR15));
        goto VAR16;
    }
    if (VAR17)
        fprintf(VAR14, "", VAR3.VAR11);
    return VAR5;
VAR16:
    FUN7(VAR5);
    return -1;
}