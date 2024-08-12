int FUN1(const char *VAR1)
{
    struct sockaddr_in VAR2;
    int VAR3;
    int VAR4;
    if (FUN2(&VAR2, VAR1) < 0)
    {
        fprintf(VAR5, "", VAR1);
        return -VAR6;
    }
    VAR4 = socket(VAR7, VAR8, 0);
    if (VAR4 == -1)
        return -FUN3();
    VAR3 = 1;
    FUN4(VAR4, VAR9, VAR10, (const char *)&VAR3, sizeof(VAR3));
    if (FUN5(VAR4, (struct VAR11 *)&VAR2, sizeof(VAR2)) == -1)
        goto VAR12;
    if (FUN6(VAR4, 1) == -1)
        goto VAR12;
    FUN7(VAR4, NULL, VAR13, NULL, (void *)(unsigned long)VAR4);
    return 0;
VAR12:
    close(VAR4);
    return -FUN3();
}