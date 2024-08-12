static int FUN1(const char *VAR1)
{
    int VAR2, VAR3;
    struct sockaddr_un VAR4;
    VAR2 = socket(VAR5, VAR6, 0);
    if (VAR2 < 0)
    {
        fprintf(VAR7, "", strerror(VAR8));
        return -1;
    }
    strcpy(VAR4.VAR9, VAR1);
    VAR4.VAR10 = VAR5;
    VAR3 = strlen(VAR4.VAR9) + sizeof(VAR4.VAR10);
    if (connect(VAR2, (struct VAR11 *)&VAR4, VAR3) < 0)
    {
        fprintf(VAR7, "");
        return -1;
    }
    unlink(VAR1);
    return VAR2;