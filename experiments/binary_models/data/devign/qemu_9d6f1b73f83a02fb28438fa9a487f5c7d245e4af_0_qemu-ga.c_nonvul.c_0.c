static bool FUN1(const char *VAR1)
{
    int VAR2;
    char VAR3[32];
    VAR2 = open(VAR1, VAR4 | VAR5, VAR6 | VAR7);
    if (VAR2 == -1 || FUN2(VAR2, VAR8, 0))
    {
        FUN3("", strerror(VAR9));
        if (VAR2 != -1)
        {
            close(VAR2);
        }
        return false;
    }
    if (FUN4(VAR2, 0) || FUN5(VAR2, 0, VAR10))
    {
        FUN3("");
        goto VAR11;
    }
    snprintf(VAR3, sizeof(VAR3), "", FUN6());
    if (write(VAR2, VAR3, strlen(VAR3)) != strlen(VAR3))
    {
        FUN3("");
        goto VAR11;
    }
    return true;
VAR11:
    unlink(VAR1);
    return false;
}