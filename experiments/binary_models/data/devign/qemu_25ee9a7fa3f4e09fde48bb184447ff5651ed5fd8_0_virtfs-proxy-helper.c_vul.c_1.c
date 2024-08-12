static int FUN1(const char *VAR1, uid_t VAR2, gid_t VAR3)
{
    int VAR4, VAR5;
    struct sockaddr_un VAR6, VAR7;
    socklen_t VAR8;
    if (!FUN2(VAR1, VAR9))
    {
        FUN3(VAR10, "");
        return -1;
    }
    VAR4 = socket(VAR11, VAR12, 0);
    if (VAR4 < 0)
    {
        FUN4("");
        return -1;
    }
    FUN5(7);
    VAR6.VAR13 = VAR11;
    strcpy(VAR6.VAR14, VAR1);
    if (FUN6(VAR4, (struct VAR15 *)&VAR6, sizeof(struct VAR16)) < 0)
    {
        FUN4("");
        goto VAR17;
    }
    if (chown(VAR6.VAR14, VAR2, VAR3) < 0)
    {
        FUN4("");
        goto VAR17;
    }
    if (FUN7(VAR4, 1) < 0)
    {
        FUN4("");
        goto VAR17;
    }
    VAR8 = sizeof(VAR7);
    VAR5 = FUN8(VAR4, (struct VAR15 *)&VAR7, &VAR8);
    if (VAR5 < 0)
    {
        FUN4("");
        goto VAR17;
    }
    close(VAR4);
    return VAR5;
VAR17:
    close(VAR4);
    return -1;