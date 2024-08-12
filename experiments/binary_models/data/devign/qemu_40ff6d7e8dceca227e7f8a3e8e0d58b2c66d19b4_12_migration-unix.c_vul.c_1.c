int FUN1(const char *VAR1)
{
    struct sockaddr_un VAR2;
    int VAR3;
    FUN2("");
    VAR3 = socket(VAR4, VAR5, 0);
    if (VAR3 < 0)
    {
        fprintf(VAR6, "", strerror(VAR7));
        return -VAR8;
    }
    memset(&VAR2, 0, sizeof(VAR2));
    VAR2.VAR9 = VAR10;
    snprintf(VAR2.VAR11, sizeof(VAR2.VAR11), "", VAR1);
    unlink(VAR2.VAR11);
    if (FUN3(VAR3, (struct VAR12 *)&VAR2, sizeof(VAR2)) < 0)
    {
        fprintf(VAR6, "", VAR2.VAR11, strerror(VAR7));
        goto VAR13;
    }
    if (FUN4(VAR3, 1) < 0)
    {
        fprintf(VAR6, "", VAR2.VAR11, strerror(VAR7));
        goto VAR13;
    }
    FUN5(VAR3, NULL, VAR14, NULL, (void *)(unsigned long)VAR3);
    return 0;
VAR13:
    close(VAR3);
    return -VAR8;
}